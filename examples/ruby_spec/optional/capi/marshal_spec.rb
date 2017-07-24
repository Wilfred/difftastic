require File.expand_path('../spec_helper', __FILE__)

load_extension("marshal")

describe "CApiMarshalSpecs" do
  before :each do
    @s = CApiMarshalSpecs.new
  end

  describe "rb_marshal_dump" do
    before :each do
      @obj = "foo"
    end

    it "marshals an object" do
      expected = Marshal.dump(@obj)

      @s.rb_marshal_dump(@obj, nil).should == expected
    end

    it "marshals an object and write to an IO when passed" do
      expected_io = IOStub.new
      test_io = IOStub.new

      Marshal.dump(@obj, expected_io)

      @s.rb_marshal_dump(@obj, test_io)

      test_io.should == expected_io
    end

  end

  describe "rb_marshal_load" do
    before :each do
      @obj = "foo"
      @data = Marshal.dump(@obj)
    end

    it "unmarshals an object" do
      @s.rb_marshal_load(@data).should == @obj
    end

  end

end
