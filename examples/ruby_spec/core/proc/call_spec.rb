require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/call', __FILE__)
require File.expand_path('../shared/call_arguments', __FILE__)

describe "Proc#call" do
  it_behaves_like :proc_call, :call
  it_behaves_like :proc_call_block_args, :call
end

describe "Proc#call on a Proc created with Proc.new" do
  it_behaves_like :proc_call_on_proc_new, :call
end

describe "Proc#call on a Proc created with Kernel#lambda or Kernel#proc" do
  it_behaves_like :proc_call_on_proc_or_lambda, :call
end
