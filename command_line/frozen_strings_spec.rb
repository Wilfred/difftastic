require File.expand_path('../../spec_helper', __FILE__)

ruby_version_is "2.3" do
  describe "The --enable-frozen-string-literal flag causes string literals to" do

    it "produce the same object each time" do
      ruby_exe(fixture(__FILE__, "freeze_flag_one_literal.rb"), options: "--enable-frozen-string-literal").chomp.should == "true"
    end

    it "produce the same object for literals with the same content" do
      ruby_exe(fixture(__FILE__, "freeze_flag_two_literals.rb"), options: "--enable-frozen-string-literal").chomp.should == "true"
    end

    it "produce the same object for literals with the same content in different files" do
      ruby_exe(fixture(__FILE__, "freeze_flag_across_files.rb"), options: "--enable-frozen-string-literal").chomp.should == "true"
    end

    it "produce different objects for literals with the same content in different files if they have different encodings" do
      ruby_exe(fixture(__FILE__, "freeze_flag_across_files_diff_enc.rb"), options: "--enable-frozen-string-literal").chomp.should == "true"
    end
  end

  describe "The --debug flag produces" do
    it "debugging info on attempted frozen string modification" do
      error_str = ruby_exe(fixture(__FILE__, 'debug_info.rb'), options: '--debug',  args: "2>&1")
      error_str.should include("can't modify frozen String, created at ")
      error_str.should include("command_line/fixtures/debug_info.rb:2")
    end
  end
end
