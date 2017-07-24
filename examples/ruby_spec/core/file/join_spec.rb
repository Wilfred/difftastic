require File.expand_path('../../../spec_helper', __FILE__)

describe "File.join" do
  # see [ruby-core:46804] for the 4 following rules
  it "changes only boundaries separators" do
    File.join("file/\\/usr/", "/bin").should == "file/\\/usr/bin"
    File.join("file://usr", "bin").should == "file://usr/bin"
  end

  it "respects the given separator if only one part has a boundary separator" do
    File.join("usr/", "bin").should == "usr/bin"
    File.join("usr", "/bin").should == "usr/bin"
    File.join("usr//", "bin").should == "usr//bin"
    File.join("usr", "//bin").should == "usr//bin"
  end

  it "joins parts using File::SEPARATOR if there are no boundary separators" do
    File.join("usr", "bin").should == "usr/bin"
  end

  it "prefers the separator of the right part if both parts have separators" do
    File.join("usr/", "//bin").should == "usr//bin"
    File.join("usr//", "/bin").should == "usr/bin"
  end

  platform_is :windows do
    it "respects given separator if only one part has a boundary separator" do
      File.join("C:\\", 'windows').should == "C:\\windows"
      File.join("C:", "\\windows").should == "C:\\windows"
      File.join("\\\\", "usr").should == "\\\\usr"
    end

    it "prefers the separator of the right part if both parts have separators" do
      File.join("C:/", "\\windows").should == "C:\\windows"
      File.join("C:\\", "/windows").should == "C:/windows"
    end
  end

  platform_is_not :windows do
    it "does not treat \\ as a separator on non-Windows" do
      File.join("usr\\", 'bin').should == "usr\\/bin"
      File.join("usr", "\\bin").should == "usr/\\bin"
      File.join("usr/", "\\bin").should == "usr/\\bin"
      File.join("usr\\", "/bin").should == "usr\\/bin"
    end
  end

  it "returns an empty string when given no arguments" do
    File.join.should == ""
  end

  it "returns a duplicate string when given a single argument" do
    str = "usr"
    File.join(str).should == str
    File.join(str).should_not equal(str)
  end

  it "supports any number of arguments" do
    File.join("a", "b", "c", "d").should == "a/b/c/d"
  end

  it "flattens nested arrays" do
    File.join(["a", "b", "c"]).should == "a/b/c"
    File.join(["a", ["b", ["c"]]]).should == "a/b/c"
  end

  it "inserts the separator in between empty strings and arrays" do
    File.join("").should == ""
    File.join("", "").should == "/"
    File.join(["", ""]).should == "/"
    File.join("a", "").should == "a/"
    File.join("", "a").should == "/a"

    File.join([]).should == ""
    File.join([], []).should == "/"
    File.join([[], []]).should == "/"
    File.join("a", []).should == "a/"
    File.join([], "a").should == "/a"
  end

  it "handles leading parts edge cases" do
    File.join("/bin")     .should == "/bin"
    File.join("", "bin")  .should == "/bin"
    File.join("/", "bin") .should == "/bin"
    File.join("/", "/bin").should == "/bin"
  end

  it "handles trailing parts edge cases" do
    File.join("bin", "")  .should == "bin/"
    File.join("bin/")     .should == "bin/"
    File.join("bin/", "") .should == "bin/"
    File.join("bin", "/") .should == "bin/"
    File.join("bin/", "/").should == "bin/"
  end

  it "handles middle parts edge cases" do
    File.join("usr",   "", "bin") .should == "usr/bin"
    File.join("usr/",  "", "bin") .should == "usr/bin"
    File.join("usr",   "", "/bin").should == "usr/bin"
    File.join("usr/",  "", "/bin").should == "usr/bin"
  end

  # TODO: See MRI svn r23306. Add patchlevel when there is a release.
  it "raises an ArgumentError if passed a recursive array" do
    a = ["a"]
    a << a
    lambda { File.join a }.should raise_error(ArgumentError)
  end

  it "raises a TypeError exception when args are nil" do
    lambda { File.join nil }.should raise_error(TypeError)
  end

  it "calls #to_str" do
    lambda { File.join(mock('x')) }.should raise_error(TypeError)

    bin = mock("bin")
    bin.should_receive(:to_str).exactly(:twice).and_return("bin")
    File.join(bin).should == "bin"
    File.join("usr", bin).should == "usr/bin"
  end

  it "doesn't mutate the object when calling #to_str" do
    usr = mock("usr")
    str = "usr"
    usr.should_receive(:to_str).and_return(str)
    File.join(usr, "bin").should == "usr/bin"
    str.should == "usr"
  end

  it "calls #to_path" do
    lambda { File.join(mock('x')) }.should raise_error(TypeError)

    bin = mock("bin")
    bin.should_receive(:to_path).exactly(:twice).and_return("bin")
    File.join(bin).should == "bin"
    File.join("usr", bin).should == "usr/bin"
  end
end
