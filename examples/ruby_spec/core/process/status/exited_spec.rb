require File.expand_path('../../../../spec_helper', __FILE__)

describe "Process::Status#exited?" do

  describe "for a child that exited normally" do

    before :each do
      ruby_exe("exit(0)")
    end

    it "returns true" do
      $?.exited?.should be_true
    end
  end


  describe "for a terminated child" do

    before :each do
      ruby_exe("Process.kill(:KILL, $$); exit(42)")
    end

    platform_is_not :windows do
      it "returns false" do
        $?.exited?.should be_false
      end
    end

    platform_is :windows do
      it "always returns true" do
        $?.exited?.should be_true
      end
    end

  end

end
