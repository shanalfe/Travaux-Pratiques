public class Date {
  int annee, mois, jour;

  public Date(int annee, int mois, int jour) {
    this.annee = annee;
    this.mois = mois;
    this.jour = jour;
  }

  public String toString() {
    return Integer.toString(annee)+"/"+String.format("%02d",mois)+"/"+String.format("%02d",jour);
  }
}