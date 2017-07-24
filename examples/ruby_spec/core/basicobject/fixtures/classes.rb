module BasicObjectSpecs
  class IVars
    def initialize
      @secret = 99
    end
  end

  module InstExec
    def self.included(base)
      base.instance_exec { @@count = 2 }
    end
  end

  module InstExecIncluded
    include InstExec
  end

  module InstEvalCVar
    instance_eval { @@count = 2 }
  end

  class InstEvalConst
    INST_EVAL_CONST_X = 2
  end

  module InstEvalOuter
    module Inner
      obj = InstEvalConst.new
      X_BY_STR = obj.instance_eval("INST_EVAL_CONST_X") rescue nil
      X_BY_BLOCK = obj.instance_eval { INST_EVAL_CONST_X } rescue nil
    end
  end
end
