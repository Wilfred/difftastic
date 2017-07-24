require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe "Regexps with repetition" do
  it "supports * (0 or more of previous subexpression)" do
    /a*/.match("aaa").to_a.should == ["aaa"]
    /a*/.match("bbb").to_a.should == [""]
    /<.*>/.match("<a>foo</a>").to_a.should == ["<a>foo</a>"] # it is greedy
  end

  it "supports *? (0 or more of previous subexpression - lazy)" do
    /a*?/.match("aaa").to_a.should == [""]
    /<.*?>/.match("<a>foo</a>").to_a.should == ["<a>"]
  end

  it "supports + (1 or more of previous subexpression)" do
    /a+/.match("aaa").to_a.should == ["aaa"]
    /a+/.match("bbb").should be_nil
    /<.+>/.match("<a>foo</a>").to_a.should == ["<a>foo</a>"] # it is greedy
  end

  it "supports +? (0 or more of previous subexpression - lazy)" do
    /a+?/.match("aaa").to_a.should == ["a"]
    /<.+?>/.match("<a>foo</a>").to_a.should == ["<a>"]
  end

  it "supports {m,n} (m to n of previous subexpression)" do
    /a{2,4}/.match("aaaaaa").to_a.should == ["aaaa"]
    /<.{1,}>/.match("<a>foo</a>").to_a.should == ["<a>foo</a>"] # it is greedy
  end

  it "supports {m,n}? (m to n of previous subexpression) - lazy)" do
    /<.{1,}?>/.match("<a>foo</a>").to_a.should == ["<a>"]
    /.([0-9]){3,5}?foo/.match("9876543210foo").to_a.should == ["543210foo", "0"]
  end

  ruby_version_is ""..."2.4" do
    it "does not treat {m,n}+ as possessive" do
      @regexp = eval "/foo(A{0,1}+)Abar/"
      @regexp.match("fooAAAbar").to_a.should == ["fooAAAbar", "AA"]
    end
  end

  ruby_version_is "2.4" do
    it "does not treat {m,n}+ as possessive" do
      -> {
        @regexp = eval "/foo(A{0,1}+)Abar/"
      }.should complain(/nested repeat operato/)
      @regexp.match("fooAAAbar").to_a.should == ["fooAAAbar", "AA"]
    end
  end

  it "supports ? (0 or 1 of previous subexpression)" do
    /a?/.match("aaa").to_a.should == ["a"]
    /a?/.match("bbb").to_a.should == [""]
  end
end
