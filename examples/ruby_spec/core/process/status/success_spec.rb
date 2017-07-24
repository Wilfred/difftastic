require File.expand_path('../../../../spec_helper', __FILE__)

describe "Process::Status#success?" do

  describe "for a child that exited normally" do

    before :each do
      ruby_exe("exit(0)")
    end

    it "returns true" do
      $?.success?.should be_true
    end
  end

  describe "for a child that exited with a non zero status" do

    before :each do
      ruby_exe("exit(42)")
    end

    it "returns false" do
      $?.success?.should be_false
    end
  end

  describe "for a child that was terminated" do

    before :each do
      ruby_exe("Process.kill(:KILL, $$); exit(42)")
    end

    platform_is_not :windows do

      it "returns nil" do
        $?.success?.should be_nil
      end

    end

    platform_is :windows do

      it "always returns true" do
        $?.success?.should be_true
      end

    end

  end

end
