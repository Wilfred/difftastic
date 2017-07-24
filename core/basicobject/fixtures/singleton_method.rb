module BasicObjectSpecs
  class SingletonMethod
    def self.singleton_method_added name
      ScratchPad.record [:singleton_method_added, name]
    end

    def self.singleton_method_to_alias
    end
  end
end
