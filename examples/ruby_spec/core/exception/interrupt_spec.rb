require File.expand_path('../../../spec_helper', __FILE__)

describe "Interrupt" do
  it "is a subclass of SignalException" do
    Interrupt.superclass.should == SignalException
  end
end

describe "Interrupt.new" do
  it "returns an instance of interrupt with no message given" do
    e = Interrupt.new
    e.signo.should == Signal.list["INT"]
    e.signm.should == "Interrupt"
  end

  it "takes an optional message argument" do
    e = Interrupt.new("message")
    e.signo.should == Signal.list["INT"]
    e.signm.should == "message"
  end
end

describe "rescueing Interrupt" do
  before do
    @original_sigint_proc = Signal.trap(:INT, :SIG_DFL)
  end

  after do
    Signal.trap(:INT, @original_sigint_proc)
  end

  it "raises an Interrupt when sent a signal SIGINT" do
    begin
      Process.kill :INT, Process.pid
      sleep
    rescue Interrupt => e
      e.signo.should == Signal.list["INT"]
      e.signm.should == ""
    end
  end
end
