class Beyonce {
  public void four() {
    if (logFloor < SQRT2_PRECOMPUTE_THRESHOLD) {
      BigInteger halfPower =
          SQRT2_PRECOMPUTED_BITS.shiftRight(SQRT2_PRECOMPUTE_THRESHOLD - logFloor);
      if (x.compareTo(halfPower) <= 0) {
        return logFloor;
      } else {
        return logFloor + 1;
      }
    }
  }
}
