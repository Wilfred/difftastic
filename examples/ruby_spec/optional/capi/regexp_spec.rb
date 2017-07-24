require File.expand_path('../spec_helper', __FILE__)

load_extension("regexp")

describe "C-API Regexp function" do
  before :each do
    @p = CApiRegexpSpecs.new
  end

  describe "rb_reg_new" do
    it "returns a new valid Regexp" do
      my_re = @p.a_re
      my_re.kind_of?(Regexp).should == true
      ('1a' =~ my_re).should == 1
      ('1b' =~ my_re).should == nil
      my_re.source.should == 'a'
    end
  end

  describe "rb_reg_nth_match" do
    it "returns a the appropriate match data entry" do
      @p.a_re_1st_match(/([ab])/.match("a")).should == 'a'
      @p.a_re_1st_match(/([ab])/.match("b")).should == 'b'
      @p.a_re_1st_match(/[ab]/.match("a")).should == nil
      @p.a_re_1st_match(/[ab]/.match("c")).should == nil
    end
  end

  describe "rb_reg_options" do
    it "returns the options used to create the regexp" do
      @p.rb_reg_options(/42/im).should == //im.options
      @p.rb_reg_options(/42/i).should == //i.options
      @p.rb_reg_options(/42/m).should == //m.options
    end
  end

  describe "rb_reg_regcomp" do
    it "creates a valid regexp from a string" do
      regexp = /\b([A-Z0-9._%+-]+)\.{2,4}/
      @p.rb_reg_regcomp(regexp.source).should == regexp
    end
  end

  it "allows matching in C, properly setting the back references" do
    mail_regexp = /\b([A-Z0-9._%+-]+)@([A-Z0-9.-]+\.[A-Z]{2,4})\b/i
    name = "john.doe"
    domain = "example.com"
    @p.match(mail_regexp, "#{name}@#{domain}")
    $1.should == name
    $2.should == domain
  end

  describe "rb_reg_match" do
    it "returns the matched position or nil" do
      @p.rb_reg_match(/a/, 'ab').should == 0
      @p.rb_reg_match(/b/, 'ab').should == 1
      @p.rb_reg_match(/c/, 'ab').should == nil
    end
  end

  describe "rb_backref_get" do
    it "returns the last MatchData" do
      md = /a/.match('ab')
      @p.rb_backref_get.should == md
      md = /b/.match('ab')
      @p.rb_backref_get.should == md
      md = /c/.match('ab')
      @p.rb_backref_get.should == md
    end
  end
end
