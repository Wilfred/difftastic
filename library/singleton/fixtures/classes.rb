require 'singleton'

module SingletonSpecs
  class MyClass
    attr_accessor :data
    include Singleton
  end

  class NewSpec
    include Singleton
  end

  class MyClassChild < MyClass
  end

  class NotInstantiated < MyClass
  end
end
