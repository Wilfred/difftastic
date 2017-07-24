module ClassVariablesSpec

  class ClassA
    @@cvar_a = :cvar_a

    def cvar_a
      @@cvar_a
    end

    def cvar_a=(val)
      @@cvar_a = val
    end
  end

  class ClassB < ClassA; end

  # Extended in ClassC
  module ModuleM
    @@cvar_m = :value

    def cvar_m
      @@cvar_m
    end

    def cvar_m=(val)
      @@cvar_m = val
    end
  end

  # Extended in ModuleO
  module ModuleN
    @@cvar_n = :value

    def cvar_n
      @@cvar_n
    end

    def cvar_n=(val)
      @@cvar_n = val
    end
  end

  module ModuleO
    extend ModuleN
  end

  class ClassC
    extend ModuleM

    def self.cvar_defined?
      self.class_variable_defined?(:@@cvar)
    end

    def self.cvar_c=(val)
      @@cvar = val
    end
  end
end
