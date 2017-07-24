require File.expand_path('../../../../spec_helper', __FILE__)
require 'cgi'

describe "CGI::Cookie#initialize when passed String" do
  before :each do
    @cookie = CGI::Cookie.allocate
  end

  it "sets the self's name to the passed String" do
    @cookie.send(:initialize, "test-cookie")
    @cookie.name.should == "test-cookie"
  end

  it "sets the self's value to an empty Array" do
    @cookie.send(:initialize, "test-cookie")
    @cookie.value.should == []
  end

  it "sets self to a non-secure cookie" do
    @cookie.send(:initialize, "test")
    @cookie.secure.should be_false
  end

  it "does set self's path to an empty String when ENV[\"SCRIPT_NAME\"] is not set" do
    @cookie.send(:initialize, "test-cookie")
    @cookie.path.should == ""
  end

  it "does set self's path based on ENV[\"SCRIPT_NAME\"] when ENV[\"SCRIPT_NAME\"] is set" do
    old_script_name = ENV["SCRIPT_NAME"]

    begin
      ENV["SCRIPT_NAME"] = "some/path/script.rb"
      @cookie.send(:initialize, "test-cookie")
      @cookie.path.should == "some/path/"

      ENV["SCRIPT_NAME"] = "script.rb"
      @cookie.send(:initialize, "test-cookie")
      @cookie.path.should == ""

      ENV["SCRIPT_NAME"] = nil
      @cookie.send(:initialize, "test-cookie")
      @cookie.path.should == ""
    ensure
      ENV["SCRIPT_NAME"] = old_script_name
    end
  end

  it "does not set self's expiration date" do
    @cookie.expires.should be_nil
  end

  it "does not set self's domain" do
    @cookie.domain.should be_nil
  end
end

describe "CGI::Cookie#initialize when passed Hash" do
  before :each do
    @cookie = CGI::Cookie.allocate
  end

  it "sets self's contents based on the passed Hash" do
    @cookie.send(:initialize,
      'name'    => 'test-cookie',
      'value'   => ["one", "two", "three"],
      'path'    => 'some/path/',
      'domain'  => 'example.com',
      'expires' => Time.at(1196524602),
      'secure'  => true)

    @cookie.name.should == "test-cookie"
    @cookie.value.should == ["one", "two", "three"]
    @cookie.path.should == "some/path/"
    @cookie.domain.should == "example.com"
    @cookie.expires.should == Time.at(1196524602)
    @cookie.secure.should be_true
  end

  it "does set self's path based on ENV[\"SCRIPT_NAME\"] when the Hash has no 'path' entry" do
    old_script_name = ENV["SCRIPT_NAME"]

    begin
      ENV["SCRIPT_NAME"] = "some/path/script.rb"
      @cookie.send(:initialize, 'name' => 'test-cookie')
      @cookie.path.should == "some/path/"

      ENV["SCRIPT_NAME"] = "script.rb"
      @cookie.send(:initialize, 'name' => 'test-cookie')
      @cookie.path.should == ""

      ENV["SCRIPT_NAME"] = nil
      @cookie.send(:initialize, 'name' => 'test-cookie')
      @cookie.path.should == ""
    ensure
      ENV["SCRIPT_NAME"] = old_script_name
    end
  end

  it "tries to convert the Hash's 'value' to an Array using #Array" do
    obj = mock("Converted To Array")
    obj.should_receive(:to_ary).and_return(["1", "2", "3"])
    @cookie.send(:initialize,
      'name'  => 'test-cookie',
      'value' => obj)
    @cookie.value.should == [ "1", "2", "3" ]

    obj = mock("Converted To Array")
    obj.should_receive(:to_a).and_return(["one", "two", "three"])
    @cookie.send(:initialize,
      'name'  => 'test-cookie',
      'value' => obj)
    @cookie.value.should == [ "one", "two", "three" ]

    obj = mock("Put into an Array")
    @cookie.send(:initialize,
      'name'  => 'test-cookie',
      'value' => obj)
    @cookie.value.should == [ obj ]
  end

  it "raises a ArgumentError when the passed Hash has no 'name' entry" do
    lambda { @cookie.send(:initialize, {}) }.should raise_error(ArgumentError)
    lambda { @cookie.send(:initialize, "value" => "test") }.should raise_error(ArgumentError)
  end
end

describe "CGI::Cookie#initialize when passed String, values ..." do
  before :each do
    @cookie = CGI::Cookie.allocate
  end

  it "sets the self's name to the passed String" do
    @cookie.send(:initialize, "test-cookie", "one", "two", "three")
    @cookie.name.should == "test-cookie"
  end

  it "sets the self's value to an Array containing all passed values" do
    @cookie.send(:initialize, "test-cookie", "one", "two", "three")
    @cookie.value.should == ["one", "two", "three"]
  end

  it "sets self to a non-secure cookie" do
    @cookie.send(:initialize, "test", "one", "two", "three")
    @cookie.secure.should be_false
  end
end
