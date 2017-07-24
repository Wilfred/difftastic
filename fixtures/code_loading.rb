module CodeLoadingSpecs
  # The #require instance method is private, so this class enables
  # calling #require like obj.require(file). This is used to share
  # specs between Kernel#require and Kernel.require.
  class Method
    def require(name)
      super name
    end

    def load(name, wrap=false)
      super
    end
  end

  def self.spec_setup
    @saved_loaded_features = $LOADED_FEATURES.clone
    @saved_load_path = $LOAD_PATH.clone
    ScratchPad.record []
  end

  def self.spec_cleanup
    $LOADED_FEATURES.replace @saved_loaded_features
    $LOAD_PATH.replace @saved_load_path
    ScratchPad.clear
  end
end
