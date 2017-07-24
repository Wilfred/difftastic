require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "StringIO#close" do
  before :each do
    @io = StringIOSpecs.build
  end

  it "returns nil" do
    @io.close.should be_nil
  end

  it "prevents further reading and/or writing" do
    @io.close
    lambda { @io.read(1) }.should raise_error(IOError)
    lambda { @io.write('x') }.should raise_error(IOError)
  end

  ruby_version_is ''...'2.3' do
    it "raises an IOError when self was already closed" do
      @io.close
      lambda { @io.close }.should raise_error(IOError)
    end
  end

  ruby_version_is "2.3" do
    it "does not raise anything when self was already closed" do
      @io.close
      lambda { @io.close }.should_not raise_error(IOError)
    end
  end
end
