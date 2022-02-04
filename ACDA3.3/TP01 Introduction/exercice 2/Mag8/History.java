import java.util.Random;
import java.util.Arrays;
import java.awt.*;
import javax.swing.*;

/**
 * A repository for all answers to the user's questions
 *
 * <p>
 * This class stores question/answer pairs in an array that extends if need be,
 * and also remembers which particular couple is currently in display.
 * </p><p>
 * Based on History class definition
 * generated from StarUML project Mag8 on 04/03/2012
 * </p>
 *
 * @author Luc Hernandez
 */
public class History {
  private static final String[] PossibleAnswers = {
    "It is certain",
    "It is decidedly so",
    "Without a doubt",
    "Yes - definitely",
    "You may rely on it",
    "As I see it, yes",
    "Most likely",
    "Outlook good",
    "Signs point to yes",
    "Yes",
    "Reply hazy, try again",
    "Ask again later",
    "Better not tell you now",
    "Cannot predict now",
    "Concentrate and ask again",
    "Don't count on it",
    "My reply is no",
    "My sources say no",
    "Outlook not so good",
    "Very doubtful"
  };

  private static final int CAPACITY_INITIAL = 50;
  private static final int CAPACITY_INCREMENT = 20;
  private int currentSelection;
  private int size;
  private QuestionAndAnswer[] list;
  private JLabel view;
  private Random rng;

  /**
   * Constructs a <code>History</code> object linked to the specified view
   * element
   *
   * @param  v
   *         the view element that displays answers
   */
  public History(JLabel v) {
    currentSelection = -1;
    size = 0;
    list = new QuestionAndAnswer[CAPACITY_INITIAL];
    view = v;
    rng = new Random(System.currentTimeMillis());
  }

  /**
   * Generates an answer to a new question, and updates the view accordingly.
   *
   * @param  question
   *         the text of the question as typed by the user.
   */
  public void generate(String question) {
    int choice = rng.nextInt(PossibleAnswers.length);

    Color color = colorView(choice);
    QuestionAndAnswer qna = new QuestionAndAnswer(question,
                                                  PossibleAnswers[choice], color);

    if (size >= list.length)
      list = Arrays.copyOf(list, list.length + CAPACITY_INCREMENT);

    list[size++] = qna;

    currentSelection = size - 1;
    refreshView();
  }

  /**
   * Changes the displayed answer by moving forward or backward in the
   * chronological order (if possible).
   *
   * @param  offset
   *         the number of steps to take (backward in time if negative).
   */
  public void shiftSelection(int offset) {
    if (size != 0) {
      int oldSelection = currentSelection;

      currentSelection += offset;
      if (currentSelection < 0)
        currentSelection = 0;
      else if (currentSelection >= size)
        currentSelection = size - 1;

      if (currentSelection != oldSelection)
        refreshView();
    }
  }

  /**
   * Sends updated information to be displayed.
   */
  protected void refreshView() {
    view.setBackground(list[currentSelection].getColor());
    view.setText((currentSelection + 1) +") " + list[currentSelection].toString());
  }

  protected Color colorView(int offset) {
    Color color = Color.RED;

    if( (offset+1) <= 10) {
      color = Color.GREEN;
    }
    else if( (offset+1) <=15 ) {
      color = Color.ORANGE;
    }

    view.setBackground(color);

    return color;
  }
}
