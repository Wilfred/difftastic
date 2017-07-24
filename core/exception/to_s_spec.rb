require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "Exception#to_s" do
  it "returns the self's name if no message is set" do
    Exception.new.to_s.should == 'Exception'
    ExceptionSpecs::Exceptional.new.to_s.should == 'ExceptionSpecs::Exceptional'
  end

  it "returns self's message if set" do
    ExceptionSpecs::Exceptional.new('!!').to_s.should == '!!'
  end

  it "calls #to_s on the message" do
    message = mock("message")
    message.should_receive(:to_s).and_return("message")
    ExceptionSpecs::Exceptional.new(message).to_s.should == "message"
  end
end

describe "NameError#to_s" do
  it "needs to be reviewed for spec completeness"
end
