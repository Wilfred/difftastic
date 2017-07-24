require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# FIXME: These methods exist only when the -n or -p option is passed to
# ruby, but we currently don't have a way of specifying that.
ruby_version_is ""..."1.9" do
  describe "Kernel#gsub" do
    it "is a private method" do
      Kernel.should have_private_instance_method(:gsub)
    end

    it "raises a TypeError if $_ is not a String" do
      lambda {
        $_ = 123
        gsub(/./, "!")
      }.should raise_error(TypeError)
    end

    it "when matches sets $_ to a new string, leaving the former value unaltered" do
      orig_value = $_ = "hello"
      gsub("ello", "ola")
      $_.should_not equal(orig_value)
      $_.should == "hola"
      orig_value.should == "hello"
    end

    it "returns a string with the same contents as $_ after the operation" do
      $_ = "bye"
      gsub("non-match", "?").should == "bye"

      orig_value = $_ = "bye"
      gsub(/$/, "!").should == "bye!"
      orig_value.should == "bye"
    end

    it "accepts Regexps as patterns" do
      $_ = "food"
      gsub(/.$/, "l")
      $_.should == "fool"
    end

    it "accepts Strings as patterns, treated literally" do
      $_ = "hello, world."
      gsub(".", "!")
      $_.should == "hello, world!"
    end

    it "accepts objects which respond to #to_str as patterns and treats them as strings" do
      $_ = "hello, world."
      stringlike = mock(".")
      stringlike.should_receive(:to_str).and_return(".")
      gsub(stringlike, "!")
      $_.should == "hello, world!"
    end
  end

  describe "Kernel#gsub with a pattern and replacement" do
    it "accepts strings for replacement" do
      $_ = "hello"
      gsub(/./, ".")
      $_.should == "....."
    end

    it "accepts objects which respond to #to_str for replacement" do
      o = mock("o")
      o.should_receive(:to_str).and_return("o")
      $_ = "ping"
      gsub("i", o)
      $_.should == "pong"
    end

    it "replaces \\1 sequences with the regexp's corresponding capture" do
      $_ = "hello!"
      gsub(/(.)(.)/, '\2\1')
      $_.should == "ehll!o"
    end
  end

  describe "Kernel#gsub with pattern and block" do
    it "acts similarly to using $_.gsub" do
      $_ = "olleh dlrow"
      gsub(/(\w+)/){ $1.reverse }
      $_.should == "hello world"
    end
  end

  describe "Kernel#gsub!" do
    it "is a private method" do
      Kernel.should have_private_instance_method(:gsub!)
    end
  end

  describe "Kernel.gsub!" do
    it "needs to be reviewed for spec completeness"
  end
end
