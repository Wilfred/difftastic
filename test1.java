class Yo {
  public void testWrapperIsBound() throws IOException {
    module.setSearcherWrapper(s -> new Wrapper());
  }
}
