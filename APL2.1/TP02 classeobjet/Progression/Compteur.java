class Compteur {
 
  private static int compte = 4;
 
  public void plusUn() {
    this.compte++;
  }

  public String toString() {
    return Integer.toBinaryString(this.compte);
  }

}

