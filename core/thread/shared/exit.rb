describe :thread_exit, shared: true do
  before :each do
    ScratchPad.clear
  end

  it "kills sleeping thread" do
    sleeping_thread = Thread.new do
      sleep
      ScratchPad.record :after_sleep
    end
    Thread.pass while sleeping_thread.status and sleeping_thread.status != "sleep"
    sleeping_thread.send(@method)
    sleeping_thread.join
    ScratchPad.recorded.should == nil
  end

  it "kills current thread" do
    thread = Thread.new do
      Thread.current.send(@method)
      ScratchPad.record :after_sleep
    end
    thread.join
    ScratchPad.recorded.should == nil
  end

  it "runs ensure clause" do
    thread = ThreadSpecs.dying_thread_ensures(@method) { ScratchPad.record :in_ensure_clause }
    thread.join
    ScratchPad.recorded.should == :in_ensure_clause
  end

  it "runs nested ensure clauses" do
    ScratchPad.record []
    @outer = Thread.new do
      begin
        @inner = Thread.new do
          begin
            sleep
          ensure
            ScratchPad << :inner_ensure_clause
          end
        end
        sleep
      ensure
        ScratchPad << :outer_ensure_clause
        @inner.send(@method)
        @inner.join
      end
    end
    Thread.pass while @outer.status and @outer.status != "sleep"
    Thread.pass until @inner
    Thread.pass while @inner.status and @inner.status != "sleep"
    @outer.send(@method)
    @outer.join
    ScratchPad.recorded.should include(:inner_ensure_clause)
    ScratchPad.recorded.should include(:outer_ensure_clause)
  end

  it "does not set $!" do
    thread = ThreadSpecs.dying_thread_ensures(@method) { ScratchPad.record $! }
    thread.join
    ScratchPad.recorded.should == nil
  end

  it "cannot be rescued" do
    thread = Thread.new do
      begin
        Thread.current.send(@method)
      rescue Exception
        ScratchPad.record :in_rescue
      end
     ScratchPad.record :end_of_thread_block
    end

    thread.join
    ScratchPad.recorded.should == nil
  end

  with_feature :fiber do
    it "kills the entire thread when a fiber is active" do
      t = Thread.new do
        Fiber.new do
          sleep
        end.resume
        ScratchPad.record :fiber_resumed
      end
      Thread.pass while t.status and t.status != "sleep"
      t.send(@method)
      t.join
      ScratchPad.recorded.should == nil
    end
  end

  # This spec is a mess. It fails randomly, it hangs on MRI, it needs to be removed
  quarantine! do
  it "killing dying running does nothing" do
    in_ensure_clause = false
    exit_loop = true
    t = ThreadSpecs.dying_thread_ensures do
      in_ensure_clause = true
      loop { if exit_loop then break end }
      ScratchPad.record :after_stop
    end

    Thread.pass until in_ensure_clause == true
    10.times { t.send(@method); Thread.pass }
    exit_loop = true
    t.join
    ScratchPad.recorded.should == :after_stop
  end
  end

  quarantine! do

    it "propogates inner exception to Thread.join if there is an outer ensure clause" do
      thread = ThreadSpecs.dying_thread_with_outer_ensure(@method) { }
      lambda { thread.join }.should raise_error(RuntimeError, "In dying thread")
    end

    it "runs all outer ensure clauses even if inner ensure clause raises exception" do
      ThreadSpecs.join_dying_thread_with_outer_ensure(@method) { ScratchPad.record :in_outer_ensure_clause }
      ScratchPad.recorded.should == :in_outer_ensure_clause
    end

    it "sets $! in outer ensure clause if inner ensure clause raises exception" do
      ThreadSpecs.join_dying_thread_with_outer_ensure(@method) { ScratchPad.record $! }
      ScratchPad.recorded.to_s.should == "In dying thread"
    end
  end

  it "can be rescued by outer rescue clause when inner ensure clause raises exception" do
    thread = Thread.new do
      begin
        begin
          Thread.current.send(@method)
        ensure
          raise "In dying thread"
        end
      rescue Exception
        ScratchPad.record $!
      end
      :end_of_thread_block
    end

    thread.value.should == :end_of_thread_block
    ScratchPad.recorded.to_s.should == "In dying thread"
  end

  it "is deferred if ensure clause does Thread.stop" do
    ThreadSpecs.wakeup_dying_sleeping_thread(@method) { Thread.stop; ScratchPad.record :after_sleep }
    ScratchPad.recorded.should == :after_sleep
  end

  # Hangs on 1.8.6.114 OS X, possibly also on Linux
  quarantine! do
    it "is deferred if ensure clause sleeps" do
      ThreadSpecs.wakeup_dying_sleeping_thread(@method) { sleep; ScratchPad.record :after_sleep }
      ScratchPad.recorded.should == :after_sleep
    end
  end

  # This case occurred in JRuby where native threads are used to provide
  # the same behavior as MRI green threads. Key to this issue was the fact
  # that the thread which called #exit in its block was also being explicitly
  # sent #join from outside the thread. The 100.times provides a certain
  # probability that the deadlock will occur. It was sufficient to reliably
  # reproduce the deadlock in JRuby.
  it "does not deadlock when called from within the thread while being joined from without" do
    100.times do
      t = Thread.new { Thread.stop; Thread.current.send(@method) }
      Thread.pass while t.status and t.status != "sleep"
      t.wakeup.should == t
      t.join.should == t
    end
  end
end
