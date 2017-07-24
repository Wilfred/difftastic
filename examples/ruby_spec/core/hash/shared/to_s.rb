require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe :hash_to_s, shared: true do

  it "returns a string representation with same order as each()" do
    h = { a: [1, 2], b: -2, d: -6, nil => nil }

    pairs = []
    h.each do |key, value|
      pairs << key.inspect + '=>' + value.inspect
    end

    str = '{' + pairs.join(', ') + '}'
    h.send(@method).should == str
  end

  it "calls #inspect on keys and values" do
    key = mock('key')
    val = mock('val')
    key.should_receive(:inspect).and_return('key')
    val.should_receive(:inspect).and_return('val')

    { key => val }.send(@method).should == '{key=>val}'
  end

  it "does not call #to_s on a String returned from #inspect" do
    str = "abc"
    str.should_not_receive(:to_s)

    { a: str }.send(@method).should == '{:a=>"abc"}'
  end

  it "calls #to_s on the object returned from #inspect if the Object isn't a String" do
    obj = mock("Hash#inspect/to_s calls #to_s")
    obj.should_receive(:inspect).and_return(obj)
    obj.should_receive(:to_s).and_return("abc")

    { a: obj }.send(@method).should == "{:a=>abc}"
  end

  it "does not call #to_str on the object returned from #inspect when it is not a String" do
    obj = mock("Hash#inspect/to_s does not call #to_str")
    obj.should_receive(:inspect).and_return(obj)
    obj.should_not_receive(:to_str)

    { a: obj }.send(@method).should =~ /^\{:a=>#<MockObject:0x[0-9a-f]+>\}$/
  end

  it "does not call #to_str on the object returned from #to_s when it is not a String" do
    obj = mock("Hash#inspect/to_s does not call #to_str on #to_s result")
    obj.should_receive(:inspect).and_return(obj)
    obj.should_receive(:to_s).and_return(obj)
    obj.should_not_receive(:to_str)

    { a: obj }.send(@method).should =~ /^\{:a=>#<MockObject:0x[0-9a-f]+>\}$/
  end

  it "does not swallow exceptions raised by #to_s" do
    obj = mock("Hash#inspect/to_s does not swallow #to_s exceptions")
    obj.should_receive(:inspect).and_return(obj)
    obj.should_receive(:to_s).and_raise(Exception)

    lambda { { a: obj }.send(@method) }.should raise_error(Exception)
  end

  it "handles hashes with recursive values" do
    x = {}
    x[0] = x
    x.send(@method).should == '{0=>{...}}'

    x = {}
    y = {}
    x[0] = y
    y[1] = x
    x.send(@method).should == "{0=>{1=>{...}}}"
    y.send(@method).should == "{1=>{0=>{...}}}"
  end

  it "returns a tainted string if self is tainted and not empty" do
    {}.taint.send(@method).tainted?.should be_false
    { nil => nil }.taint.send(@method).tainted?.should be_true
  end

  it "returns an untrusted string if self is untrusted and not empty" do
    {}.untrust.send(@method).untrusted?.should be_false
    { nil => nil }.untrust.send(@method).untrusted?.should be_true
  end

  ruby_version_is ''...'2.3' do
    it "raises if inspected result is not default external encoding" do
      utf_16be = mock("utf_16be")
      utf_16be.should_receive(:inspect).and_return(%<"utf_16be \u3042">.encode!(Encoding::UTF_16BE))

      lambda {
        {a: utf_16be}.send(@method)
      }.should raise_error(Encoding::CompatibilityError)
    end
  end

  ruby_version_is '2.3' do
    it "does not raise if inspected result is not default external encoding" do
      utf_16be = mock("utf_16be")
      utf_16be.should_receive(:inspect).and_return(%<"utf_16be \u3042">.encode!(Encoding::UTF_16BE))

      {a: utf_16be}.send(@method).should == '{:a=>"utf_16be \u3042"}'
    end
  end
end
