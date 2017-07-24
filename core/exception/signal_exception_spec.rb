require File.expand_path('../../../spec_helper', __FILE__)

describe "SignalException.new" do
  it "takes a signal number as the first argument" do
    exc = SignalException.new(Signal.list["INT"])
    exc.signo.should == Signal.list["INT"]
    exc.signm.should == "SIGINT"
    exc.message.should == "SIGINT"
  end

  it "raises an exception with an invalid signal number" do
    lambda { SignalException.new(100000) }.should raise_error(ArgumentError)
  end

  it "takes a signal name without SIG prefix as the first argument" do
    exc = SignalException.new("INT")
    exc.signo.should == Signal.list["INT"]
    exc.signm.should == "SIGINT"
    exc.message.should == "SIGINT"
  end

  it "takes a signal name with SIG prefix as the first argument" do
    exc = SignalException.new("SIGINT")
    exc.signo.should == Signal.list["INT"]
    exc.signm.should == "SIGINT"
    exc.message.should == "SIGINT"
  end

  it "raises an exception with an invalid signal name" do
    lambda { SignalException.new("NONEXISTANT") }.should raise_error(ArgumentError)
  end

  it "takes a signal symbol without SIG prefix as the first argument" do
    exc = SignalException.new(:INT)
    exc.signo.should == Signal.list["INT"]
    exc.signm.should == "SIGINT"
    exc.message.should == "SIGINT"
  end

  it "takes a signal symbol with SIG prefix as the first argument" do
    exc = SignalException.new(:SIGINT)
    exc.signo.should == Signal.list["INT"]
    exc.signm.should == "SIGINT"
    exc.message.should == "SIGINT"
  end

  it "raises an exception with an invalid signal name" do
    lambda { SignalException.new(:NONEXISTANT) }.should raise_error(ArgumentError)
  end

  it "takes an optional message argument with a signal number" do
    exc = SignalException.new(Signal.list["INT"], "name")
    exc.signo.should == Signal.list["INT"]
    exc.signm.should == "name"
    exc.message.should == "name"
  end

  it "raises an exception for an optional argument with a signal name" do
    lambda { SignalException.new("INT","name") }.should raise_error(ArgumentError)
  end
end

describe "rescueing SignalException" do
  it "raises a SignalException when sent a signal" do
    begin
      Process.kill :TERM, Process.pid
      sleep
    rescue SignalException => e
      e.signo.should == Signal.list["TERM"]
      e.signm.should == "SIGTERM"
      e.message.should == "SIGTERM"
    end
  end
end
