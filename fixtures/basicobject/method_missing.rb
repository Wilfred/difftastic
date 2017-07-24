module KernelSpecs
  module ModuleNoMM
    class << self
      def method_public() :module_public_method end

      def method_protected() :module_private_method end
      protected :method_protected

      def method_private() :module_private_method end
      private :method_private
    end
  end

  module ModuleMM
    class << self
      def method_missing(*args) :module_method_missing end

      def method_public() :module_public_method end

      def method_protected() :module_private_method end
      protected :method_protected

      def method_private() :module_private_method end
      private :method_private
    end
  end

  class ClassNoMM
    class << self
      def method_public() :class_public_method end

      def method_protected() :class_private_method end
      protected :method_protected

      def method_private() :class_private_method end
      private :method_private
    end

    def method_public() :instance_public_method end

    def method_protected() :instance_private_method end
    protected :method_protected

    def method_private() :instance_private_method end
    private :method_private
  end

  class ClassMM < ClassNoMM
    class << self
      def method_missing(*args) :class_method_missing end
    end

    def method_missing(*args) :instance_method_missing end
  end
end
