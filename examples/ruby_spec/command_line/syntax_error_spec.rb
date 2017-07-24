require File.expand_path('../../spec_helper', __FILE__)

describe "The interpreter" do
  it "prints an error when given a file with invalid syntax" do
    out = ruby_exe(fixture(__FILE__, "bad_syntax.rb"), args: "2>&1")
    out.should include "syntax error"
  end

  it "prints an error when given code via -e with invalid syntax" do
    out = ruby_exe(nil, args: "-e 'a{' 2>&1")
    out.should include "syntax error"
  end
end
