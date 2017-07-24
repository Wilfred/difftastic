describe :enum_for, shared: true do
  it "is defined in Kernel" do
    Kernel.method_defined?(@method).should be_true
  end

  it "returns a new enumerator" do
    "abc".send(@method).should be_an_instance_of(Enumerator)
  end

  it "defaults the first argument to :each" do
    enum = [1,2].send(@method)
    enum.map { |v| v }.should == [1,2].each { |v| v }
  end

  it "exposes multi-arg yields as an array" do
    o = Object.new
    def o.each
      yield :a
      yield :b1, :b2
      yield [:c]
      yield :d1, :d2
      yield :e1, :e2, :e3
    end

    enum = o.send(@method)
    enum.next.should == :a
    enum.next.should == [:b1, :b2]
    enum.next.should == [:c]
    enum.next.should == [:d1, :d2]
    enum.next.should == [:e1, :e2, :e3]
  end

  it "uses the passed block's value to calculate the size of the enumerator" do
    Object.new.enum_for { 100 }.size.should == 100
  end

  it "defers the evaluation of the passed block until #size is called" do
    ScratchPad.record []

    enum = Object.new.enum_for do
      ScratchPad << :called
      100
    end

    ScratchPad.recorded.should be_empty

    enum.size
    ScratchPad.recorded.should == [:called]
  end
end
