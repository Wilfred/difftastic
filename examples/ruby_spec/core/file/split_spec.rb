require File.expand_path('../../../spec_helper', __FILE__)

describe "File.split" do
  before :each do
    @backslash_ext = "C:\\foo\\bar\\baz.rb"
    @backslash = "C:\\foo\\bar\\baz"
  end

  it "splits the string at the last '/' when the last component does not have an extension" do
    File.split("/foo/bar/baz").should == ["/foo/bar", "baz"]
    File.split("C:/foo/bar/baz").should == ["C:/foo/bar", "baz"]
  end

  it "splits the string at the last '/' when the last component has an extension" do
    File.split("/foo/bar/baz.rb").should == ["/foo/bar", "baz.rb"]
    File.split("C:/foo/bar/baz.rb").should == ["C:/foo/bar", "baz.rb"]
  end

  it "splits an empty string into a '.' and an empty string" do
    File.split("").should == [".", ""]
  end

  platform_is_not :windows do
    it "collapses multiple '/' characters and strips trailing ones" do
      File.split("//foo////").should == ["/", "foo"]
    end
  end

  platform_is_not :windows do
    it "does not split a string that contains '\\'" do
      File.split(@backslash).should == [".", "C:\\foo\\bar\\baz"]
      File.split(@backslash_ext).should ==  [".", "C:\\foo\\bar\\baz.rb"]
    end
  end

  platform_is :windows do
    it "splits the string at the last '\\' when the last component does not have an extension" do
      File.split(@backslash).should == ["C:\\foo\\bar", "baz"]
    end

    it "splits the string at the last '\\' when the last component has an extension" do
      File.split(@backslash_ext).should ==  ["C:\\foo\\bar", "baz.rb"]
    end
  end

  it "raises an ArgumentError when not passed a single argument" do
    lambda { File.split }.should raise_error(ArgumentError)
    lambda { File.split('string', 'another string') }.should raise_error(ArgumentError)
  end

  it "raises a TypeError if the argument is not a String type" do
    lambda { File.split(1) }.should raise_error(TypeError)
  end

  it "coerces the argument with to_str if it is not a String type" do
    class C; def to_str; "/rubinius/better/than/ruby"; end; end
    File.split(C.new).should == ["/rubinius/better/than", "ruby"]
  end

  it "accepts an object that has a #to_path method" do
    File.split(mock_to_path("")).should == [".", ""]
  end
end
