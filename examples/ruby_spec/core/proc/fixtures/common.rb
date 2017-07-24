module ProcSpecs
  class ToAryAsNil
    def to_ary
      nil
    end
  end
  def self.new_proc_in_method
    Proc.new
  end

  def self.new_proc_from_amp(&block)
    block
  end

  def self.proc_for_1
    proc { 1 }
  end

  class ProcSubclass < Proc
  end

  def self.new_proc_subclass_in_method
    ProcSubclass.new
  end

  class MyProc < Proc
  end

  class MyProc2 < Proc
    def initialize(a, b)
      @first = a
      @second = b
    end

    attr_reader :first, :second
  end

  class Arity
    def arity_check(&block)
      pn = Proc.new(&block).arity
      pr = proc(&block).arity
      lm = lambda(&block).arity

      if pn == pr and pr == lm
        return pn
      else
        return :arity_check_failed
      end
    end
  end
end
