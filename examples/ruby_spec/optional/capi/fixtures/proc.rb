class CApiProcSpecs
  def call_nothing
  end

  def call_Proc_new
    Proc.new
  end

  def call_block_given?
    block_given?
  end

  def call_rb_Proc_new
    rb_Proc_new(0)
  end

  def call_rb_Proc_new_with_block
    rb_Proc_new(0) { :calling_with_block }
  end
end
