require File.expand_path('../../../../spec_helper', __FILE__)

describe "Process::Status#signaled?" do

  describe "for a cleanly exited child" do

    before :each do
      ruby_exe("exit(0)")
    end

    it "returns false" do
      $?.signaled?.should be_false
    end
  end

  describe "for a terminated child" do

    before :each do
      ruby_exe("Process.kill(:KILL, $$); exit(42)")
    end

    platform_is_not :windows do
      it "returns true" do
        $?.signaled?.should be_true
      end
    end

    platform_is :windows do
      it "always returns false" do
        $?.signaled?.should be_false
      end
    end

  end
end
