describe "The -x command line option" do
  it "runs code after the first /\#!.*ruby.*/-ish line in target file" do
    embedded_ruby = fixture __FILE__, "bin/embedded_ruby.txt"
    result = ruby_exe(embedded_ruby, options: '-x')
    result.should == "success\n"
  end

  it "fails when /\#!.*ruby.*/-ish line in target file is not found" do
    bad_embedded_ruby = fixture __FILE__, "bin/bad_embedded_ruby.txt"
    result = ruby_exe(bad_embedded_ruby, options: '-x', args: '2>&1')
    result.should include "no Ruby script found in input"
  end

  it "behaves as -x was set when non-ruby shebang is encountered on first line" do
    embedded_ruby = fixture __FILE__, "bin/hybrid_launcher.sh"
    result = ruby_exe(embedded_ruby)
    result.should == "success\n"
  end

  it "needs to be reviewed for spec completeness"
end
