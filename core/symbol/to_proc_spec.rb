require File.expand_path('../../../spec_helper', __FILE__)

describe "Symbol#to_proc" do
  it "returns a new Proc" do
    proc = :to_s.to_proc
    proc.should be_kind_of(Proc)
  end

  it "sends self to arguments passed when calling #call on the Proc" do
    obj = mock("Receiving #to_s")
    obj.should_receive(:to_s).and_return("Received #to_s")
    :to_s.to_proc.call(obj).should == "Received #to_s"
  end

  it "raises an ArgumentError when calling #call on the Proc without receiver" do
    lambda { :object_id.to_proc.call }.should raise_error(ArgumentError)
  end

  it "produces a proc that always returns [[:rest]] for #parameters" do
    pr = :to_s.to_proc
    pr.parameters.should == [[:rest]]
  end
end

describe "Symbol#to_proc" do
  before :all do
    @klass = Class.new do
      def m
        yield
      end

      def to_proc
        :m.to_proc.call(self) { :value }
      end
    end
  end

  it "passes along the block passed to Proc#call" do
    @klass.new.to_proc.should == :value
  end
end
