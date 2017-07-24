describe :process_fork, shared: true do
  platform_is :windows do
    it "returns false from #respond_to?" do
      # Workaround for Kernel::Method being public and losing the "non-respond_to? magic"
      mod = @object.class.name == "KernelSpecs::Method" ? Object.new : @object
      mod.respond_to?(:fork).should be_false
      mod.respond_to?(:fork, true).should be_false
    end

    it "raises a NotImplementedError when called" do
      lambda { @object.fork }.should raise_error(NotImplementedError)
    end
  end

  platform_is_not :windows do
    before :each do
      @file = tmp('i_exist')
      rm_r @file
    end

    after :each do
      rm_r @file
    end

    it "returns status zero" do
      pid = Process.fork { exit! 0 }
      _, result = Process.wait2(pid)
      result.exitstatus.should == 0
    end

    it "returns status zero" do
      pid = Process.fork { exit 0 }
      _, result = Process.wait2(pid)
      result.exitstatus.should == 0
    end

    it "returns status zero" do
      pid = Process.fork {}
      _, result = Process.wait2(pid)
      result.exitstatus.should == 0
    end

    it "returns status non-zero" do
      pid = Process.fork { exit! 42 }
      _, result = Process.wait2(pid)
      result.exitstatus.should == 42
    end

    it "returns status non-zero" do
      pid = Process.fork { exit 42 }
      _, result = Process.wait2(pid)
      result.exitstatus.should == 42
    end

    it "returns nil for the child process" do
      child_id = @object.fork
      if child_id == nil
        touch(@file) { |f| f.write 'rubinius' }
        Process.exit!
      else
        Process.waitpid(child_id)
      end
      File.exist?(@file).should == true
    end

    it "runs a block in a child process" do
      pid = @object.fork {
        touch(@file) { |f| f.write 'rubinius' }
        Process.exit!
      }
      Process.waitpid(pid)
      File.exist?(@file).should == true
    end

    it "marks threads from the parent as killed" do
      t = Thread.new { sleep }
      pid = @object.fork {
        touch(@file) do |f|
          f.write Thread.current.alive?
          f.write t.alive?
        end
        Process.exit!
      }
      Process.waitpid(pid)
      t.kill
      t.join
      File.read(@file).should == "truefalse"
    end
  end
end
