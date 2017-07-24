module ExceptionSpecs
  class Exceptional < Exception; end

  class Backtrace
    def self.backtrace
      begin
        raise # Do not move this line or update backtrace_spec.rb
      rescue RuntimeError => e
        e.backtrace
      end
    end
  end

  class UnExceptional < Exception
    def backtrace
      nil
    end
    def message
      nil
    end
  end

  class ConstructorException < Exception

    def initialize
    end

  end

  class OverrideToS < RuntimeError
    def to_s
      "this is from #to_s"
    end
  end

  class EmptyToS < RuntimeError
    def to_s
      ""
    end
  end
end

module NoMethodErrorSpecs
  class NoMethodErrorA; end

  class NoMethodErrorB; end

  class NoMethodErrorC;
    protected
    def a_protected_method;end
    private
    def a_private_method; end
  end

  class NoMethodErrorD; end
end

class NameErrorSpecs
  class ReceiverClass
    def call_undefined_class_variable
      @@doesnt_exist
    end
  end
end
