require File.expand_path('../spec_helper', __FILE__)

with_feature :readline do
  describe "Readline.readline" do
    before :each do
      @file = tmp('readline')
      @out = tmp('out.txt')
      touch(@file) { |f|
        f.puts "test"
      }
      @options = { options: "-rreadline", args: [@out, "< #{@file}"] }
    end

    after :each do
      rm_r @file, @out
    end

    # Somehow those specs block on Windows
    platform_is_not :windows do
      it "returns the input string" do
        ruby_exe('File.write ARGV[0], Readline.readline', @options)
        File.read(@out).should == "test"
      end

      it "taints the returned strings" do
        ruby_exe('File.write ARGV[0], Readline.readline.tainted?', @options)
        File.read(@out).should == "true"
      end
    end
  end
end
