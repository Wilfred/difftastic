describe :thread_wakeup, shared: true do
  it "can interrupt Kernel#sleep" do
    exit_loop = false
    after_sleep1 = false
    after_sleep2 = false

    t = Thread.new do
      while true
        break if exit_loop == true
        Thread.pass
      end

      sleep
      after_sleep1 = true

      sleep
      after_sleep2 = true
    end

    10.times { t.send(@method); Thread.pass }
    t.status.should_not == "sleep"

    exit_loop = true

    10.times { sleep 0.1 if t.status and t.status != "sleep" }
    after_sleep1.should == false # t should be blocked on the first sleep
    t.send(@method)

    10.times { sleep 0.1 if after_sleep1 != true }
    10.times { sleep 0.1 if t.status and t.status != "sleep" }
    after_sleep2.should == false # t should be blocked on the second sleep
    t.send(@method)

    t.join
  end

  it "does not result in a deadlock" do
    t = Thread.new do
      100.times { Thread.stop }
    end

    while t.status
      begin
        t.send(@method)
      rescue ThreadError
        # The thread might die right after.
        t.status.should == false
      end
      Thread.pass
    end

    t.status.should == false
    t.join
  end

  it "raises a ThreadError when trying to wake up a dead thread" do
    t = Thread.new { 1 }
    t.join
    lambda { t.send @method }.should raise_error(ThreadError)
  end
end
