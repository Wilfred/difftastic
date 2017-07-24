module ProcSpecs
  class SourceLocation
    def self.my_proc
      proc { true }
    end

    def self.my_lambda
      lambda { true }
    end

    def self.my_proc_new
      Proc.new { true }
    end

    def self.my_method
      method(__method__).to_proc
    end

    def self.my_multiline_proc
      proc do
        'a'.upcase
        1 + 22
      end
    end

    def self.my_multiline_lambda
      lambda do
        'a'.upcase
        1 + 22
      end
    end

    def self.my_multiline_proc_new
      Proc.new do
        'a'.upcase
        1 + 22
      end
    end

    def self.my_detached_proc
      body = proc { true }
      proc(&body)
    end

    def self.my_detached_lambda
      body = lambda { true }
      lambda(&body)
    end

    def self.my_detached_proc_new
      body = Proc.new { true }
      Proc.new(&body)
    end
  end
end
