class Yo {
  ConfigurableMutableGraph(AbstractGraphBuilder<? super N> builder) {
    this.backingValueGraph = new ConfigurableMutableValueGraph<>(builder);
  }
}
