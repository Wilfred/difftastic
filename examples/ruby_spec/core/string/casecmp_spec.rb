# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#casecmp independent of case" do
  it "returns -1 when less than other" do
    "a".casecmp("b").should == -1
    "A".casecmp("b").should == -1
  end

  it "returns 0 when equal to other" do
    "a".casecmp("a").should == 0
    "A".casecmp("a").should == 0
  end

  it "returns 1 when greater than other" do
    "b".casecmp("a").should == 1
    "B".casecmp("a").should == 1
  end

  it "tries to convert other to string using to_str" do
    other = mock('x')
    other.should_receive(:to_str).and_return("abc")

    "abc".casecmp(other).should == 0
  end

  ruby_version_is ""..."2.5" do
    it "raises a TypeError if other can't be converted to a string" do
      lambda { "abc".casecmp(mock('abc')) }.should raise_error(TypeError)
    end
  end

  ruby_version_is "2.5" do
    it "returns nil if other can't be converted to a string" do
      "abc".casecmp(mock('abc')).should be_nil
    end
  end

  describe "in UTF-8 mode" do
    describe "for non-ASCII characters" do
      before :each do
        @upper_a_tilde  = "\xc3\x83"
        @lower_a_tilde  = "\xc3\xa3"
        @upper_a_umlaut = "\xc3\x84"
        @lower_a_umlaut = "\xc3\xa4"
      end

      it "returns -1 when numerically less than other" do
        @upper_a_tilde.casecmp(@lower_a_tilde).should == -1
        @upper_a_tilde.casecmp(@upper_a_umlaut).should == -1
      end

      it "returns 0 when numerically equal to other" do
        @upper_a_tilde.casecmp(@upper_a_tilde).should == 0
      end

      it "returns 1 when numerically greater than other" do
        @lower_a_umlaut.casecmp(@upper_a_umlaut).should == 1
        @lower_a_umlaut.casecmp(@lower_a_tilde).should == 1
      end
    end

    describe "for ASCII characters" do
      it "returns -1 when less than other" do
        "a".casecmp("b").should == -1
        "A".casecmp("b").should == -1
      end

      it "returns 0 when equal to other" do
        "a".casecmp("a").should == 0
        "A".casecmp("a").should == 0
      end

      it "returns 1 when greater than other" do
        "b".casecmp("a").should == 1
        "B".casecmp("a").should == 1
      end
    end
  end

  describe "for non-ASCII characters" do
    before :each do
      @upper_a_tilde = "\xc3"
      @lower_a_tilde = "\xe3"
    end

    it "returns -1 when numerically less than other" do
      @upper_a_tilde.casecmp(@lower_a_tilde).should == -1
    end

    it "returns 0 when equal to other" do
      @upper_a_tilde.casecmp("\xc3").should == 0
    end

    it "returns 1 when numerically greater than other" do
      @lower_a_tilde.casecmp(@upper_a_tilde).should == 1
    end
  end

  describe "when comparing a subclass instance" do
    it "returns -1 when less than other" do
      b = StringSpecs::MyString.new "b"
      "a".casecmp(b).should == -1
      "A".casecmp(b).should == -1
    end

    it "returns 0 when equal to other" do
      a = StringSpecs::MyString.new "a"
      "a".casecmp(a).should == 0
      "A".casecmp(a).should == 0
    end

    it "returns 1 when greater than other" do
      a = StringSpecs::MyString.new "a"
      "b".casecmp(a).should == 1
      "B".casecmp(a).should == 1
    end
  end
end
