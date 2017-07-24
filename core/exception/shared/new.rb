describe :exception_new, shared: true do
  it "creates a new instance of Exception" do
    Exception.should be_ancestor_of(Exception.send(@method).class)
  end

  it "sets the message of the Exception when passes a message" do
    Exception.send(@method, "I'm broken.").message.should == "I'm broken."
  end

  it "returns 'Exception' for message when no message given" do
    Exception.send(@method).message.should == "Exception"
  end

  it "returns the exception when it has a custom constructor" do
    ExceptionSpecs::ConstructorException.send(@method).should be_kind_of(ExceptionSpecs::ConstructorException)
  end

end
