require File.expand_path('../../../spec_helper', __FILE__)

describe "Signal.list" do
  RUBY_SIGNALS = %w{
    EXIT
    HUP
    INT
    QUIT
    ILL
    TRAP
    IOT
    ABRT
    EMT
    FPE
    KILL
    BUS
    SEGV
    SYS
    PIPE
    ALRM
    TERM
    URG
    STOP
    TSTP
    CONT
    CHLD
    CLD
    TTIN
    TTOU
    IO
    XCPU
    XFSZ
    VTALRM
    PROF
    WINCH
    USR1
    USR2
    LOST
    MSG
    PWR
    POLL
    DANGER
    MIGRATE
    PRE
    GRANT
    RETRACT
    SOUND
    INFO
  }

  it "doesn't contain other signals than the known list" do
    (Signal.list.keys - RUBY_SIGNALS).should == []
  end

  if Signal.list["CHLD"]
    it "redefines CLD with CHLD if defined" do
      Signal.list["CLD"].should == Signal.list["CHLD"]
    end
  end

  it "includes the EXIT key with a value of zero" do
    Signal.list["EXIT"].should == 0
  end
end
