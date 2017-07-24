require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)
require File.expand_path('../fixtures/strings', __FILE__)

describe "YAML.load" do
  after :each do
    rm_r $test_file
  end

  it "returns a document from current io stream when io provided" do
    File.open($test_file, 'w') do |io|
      YAML.dump( ['badger', 'elephant', 'tiger'], io )
    end
    File.open($test_file) { |yf| YAML.load( yf ) }.should == ['badger', 'elephant', 'tiger']
  end

  it "loads strings" do
    strings = ["str",
               " str",
               "'str'",
               "str",
               " str",
               "'str'",
               "\"str\"",
                "\n str",
                "---  str",
                "---\nstr",
                "--- \nstr",
                "--- \n str",
                "--- 'str'"
              ]
    strings.each do |str|
      YAML.load(str).should == "str"
    end
  end

  it "fails on invalid keys" do
    if YAML.to_s == "Psych"
      error = Psych::SyntaxError
    else
      error = ArgumentError
    end
    lambda { YAML.load("key1: value\ninvalid_key") }.should raise_error(error)
  end

  it "accepts symbols" do
    YAML.load( "--- :locked" ).should == :locked
  end

  it "accepts numbers" do
    YAML.load("47").should == 47
    YAML.load("-1").should == -1
  end

  it "accepts collections" do
    expected = ["a", "b", "c"]
    YAML.load("--- \n- a\n- b\n- c\n").should == expected
    YAML.load("--- [a, b, c]").should == expected
    YAML.load("[a, b, c]").should == expected
  end

  it "parses start markers" do
    YAML.load("---\n").should == nil
    YAML.load("--- ---\n").should == "---"
    YAML.load("--- abc").should == "abc"
  end

  it "works with block sequence shortcuts" do
    block_seq = "- - - one\n    - two\n    - three"
    YAML.load(block_seq).should == [[["one", "two", "three"]]]
  end

  it "works on complex keys" do
    require 'date'
    expected = {
      [ 'Detroit Tigers', 'Chicago Cubs' ] => [ Date.new( 2001, 7, 23 ) ],
      [ 'New York Yankees', 'Atlanta Braves' ] => [ Date.new( 2001, 7, 2 ),
                                                    Date.new( 2001, 8, 12 ),
                                                    Date.new( 2001, 8, 14 ) ]
    }
    YAML.load($complex_key_1).should == expected
  end

  it "loads a symbol key that contains spaces" do
    string = ":user name: This is the user name."
    expected = { :"user name" => "This is the user name."}
    YAML.load(string).should == expected
  end

  describe "with iso8601 timestamp" do
    it "computes the microseconds" do
      [ [YAML.load("2011-03-22t23:32:11.2233+01:00"),   223300],
        [YAML.load("2011-03-22t23:32:11.0099+01:00"),   9900],
        [YAML.load("2011-03-22t23:32:11.000076+01:00"), 76]
      ].should be_computed_by(:usec)
    end

    it "rounds values smaller than 1 usec to 0 " do
      YAML.load("2011-03-22t23:32:11.000000342222+01:00").usec.should == 0
    end
  end

  it "loads an OpenStruct" do
    require "ostruct"
    os = OpenStruct.new("age" => 20, "name" => "John")
    loaded = YAML.load("--- !ruby/object:OpenStruct\ntable:\n  :age: 20\n  :name: John\n")
    loaded.should == os
  end

  it "loads a File but raise an error when used as it is uninitialized" do
    loaded = YAML.load("--- !ruby/object:File {}\n")
    lambda {
      loaded.read(1)
    }.should raise_error(IOError)
  end
end
