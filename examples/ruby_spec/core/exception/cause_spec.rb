require File.expand_path('../../../spec_helper', __FILE__)

describe "Exception#cause" do
  it "returns the active exception when an exception is raised" do
    begin
      raise Exception, "the cause"
    rescue Exception
      begin
        raise RuntimeError, "the consequence"
      rescue RuntimeError => e
        e.should be_an_instance_of(RuntimeError)
        e.message.should == "the consequence"

        e.cause.should be_an_instance_of(Exception)
        e.cause.message.should == "the cause"
      end
    end
  end
end
