module EnumeratorSpecs
  class Feed
    def each
      ScratchPad << yield
      ScratchPad << yield
      ScratchPad << yield
    end
  end
end
