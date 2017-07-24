describe :proc_call_block_args, shared: true do
  it "can receive block arguments" do
    Proc.new {|&b| b.send(@method)}.send(@method) {1 + 1}.should == 2
    lambda {|&b| b.send(@method)}.send(@method) {1 + 1}.should == 2
    proc {|&b| b.send(@method)}.send(@method) {1 + 1}.should == 2
  end
end
