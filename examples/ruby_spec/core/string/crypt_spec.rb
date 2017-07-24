require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes.rb', __FILE__)

describe "String#crypt" do
  # Note: MRI's documentation just says that the C stdlib function crypt() is
  # called.
  #
  # I'm not sure if crypt() is guaranteed to produce the same result across
  # different platforms. It seems that there is one standard UNIX implementation
  # of crypt(), but that alternative implementations are possible. See
  # http://www.unix.org.ua/orelly/networking/puis/ch08_06.htm
  it "returns a cryptographic hash of self by applying the UNIX crypt algorithm with the specified salt" do
    "".crypt("aa").should == "aaQSqAReePlq6"
    "nutmeg".crypt("Mi").should == "MiqkFWCm1fNJI"
    "ellen1".crypt("ri").should == "ri79kNd7V6.Sk"
    "Sharon".crypt("./").should == "./UY9Q7TvYJDg"
    "norahs".crypt("am").should == "amfIADT2iqjA."
    "norahs".crypt("7a").should == "7azfT5tIdyh0I"

    # Only uses first 8 chars of string
    "01234567".crypt("aa").should == "aa4c4gpuvCkSE"
    "012345678".crypt("aa").should == "aa4c4gpuvCkSE"
    "0123456789".crypt("aa").should == "aa4c4gpuvCkSE"

    # Only uses first 2 chars of salt
    "hello world".crypt("aa").should == "aayPz4hyPS1wI"
    "hello world".crypt("aab").should == "aayPz4hyPS1wI"
    "hello world".crypt("aabc").should == "aayPz4hyPS1wI"
  end

  it "raises an ArgumentError when the salt is shorter than two characters" do
    lambda { "hello".crypt("")  }.should raise_error(ArgumentError)
    lambda { "hello".crypt("f") }.should raise_error(ArgumentError)
    lambda { "hello".crypt("\x00\x00") }.should raise_error(ArgumentError)
    lambda { "hello".crypt("\x00a") }.should raise_error(ArgumentError)
    lambda { "hello".crypt("a\x00") }.should raise_error(ArgumentError)
  end

  ruby_version_is "2.3" do
    it "raises an ArgumentError when the string contains NUL character" do
      lambda { "poison\0null".crypt("aa") }.should raise_error(ArgumentError)
    end
  end

  it "calls #to_str to converts the salt arg to a String" do
    obj = mock('aa')
    obj.should_receive(:to_str).and_return("aa")

    "".crypt(obj).should == "aaQSqAReePlq6"
  end

  it "raises a type error when the salt arg can't be converted to a string" do
    lambda { "".crypt(5)         }.should raise_error(TypeError)
    lambda { "".crypt(mock('x')) }.should raise_error(TypeError)
  end

  it "taints the result if either salt or self is tainted" do
    tainted_salt = "aa"
    tainted_str = "hello"

    tainted_salt.taint
    tainted_str.taint

    "hello".crypt("aa").tainted?.should == false
    tainted_str.crypt("aa").tainted?.should == true
    "hello".crypt(tainted_salt).tainted?.should == true
    tainted_str.crypt(tainted_salt).tainted?.should == true
  end

  it "doesn't return subclass instances" do
    StringSpecs::MyString.new("hello").crypt("aa").should be_an_instance_of(String)
    "hello".crypt(StringSpecs::MyString.new("aa")).should be_an_instance_of(String)
    StringSpecs::MyString.new("hello").crypt(StringSpecs::MyString.new("aa")).should be_an_instance_of(String)
  end
end
