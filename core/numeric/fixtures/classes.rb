module NumericSpecs
  class Comparison < Numeric
    # This method is used because we cannot define
    # singleton methods on subclasses of Numeric,
    # which is needed for a.should_receive to work.
    def <=>(other)
      ScratchPad.record :numeric_comparison
      1
    end
  end

  class Subclass < Numeric
    # Allow methods to be mocked
    def singleton_method_added(val)
    end
  end
end
