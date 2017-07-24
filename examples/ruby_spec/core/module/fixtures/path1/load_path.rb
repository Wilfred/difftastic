$LOAD_PATH.unshift(File.expand_path('../../path2', __FILE__))

module ModuleSpecs::Autoload
  module LoadPath
    def self.loaded
      :autoload_load_path
    end
  end
end
