require File.expand_path('../../../spec_helper', __FILE__)

ruby_version_is '2.3' do
  describe "Thread#name" do
    before :each do
      @thread = Thread.new {}
    end

    after :each do
      @thread.join
    end

    it "is nil initially" do
      @thread.name.should == nil
    end

    it "returns the thread name" do
      @thread.name = "thread_name"
      @thread.name.should == "thread_name"
    end
  end

  describe "Thread#name=" do
    before :each do
      @thread = Thread.new {}
    end

    after :each do
      @thread.join
    end

    it "can be set to a String" do
      @thread.name = "new thread name"
      @thread.name.should == "new thread name"
    end

    it "raises an ArgumentError if the name includes a null byte" do
      lambda {
        @thread.name = "new thread\0name"
      }.should raise_error(ArgumentError)
    end

    it "can be reset to nil" do
      @thread.name = nil
      @thread.name.should == nil
    end

    it "calls #to_str to convert name to String" do
      name = mock("Thread#name")
      name.should_receive(:to_str).and_return("a thread name")

      @thread.name = name
      @thread.name.should == "a thread name"
    end
  end
end
