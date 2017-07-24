# -*- encoding: utf-8 -*-

require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/common', __FILE__)

describe "File.expand_path" do
  before :each do
    platform_is :windows do
      @base = `cd`.chomp.tr '\\', '/'
      @tmpdir = "c:/tmp"
      @rootdir = "c:/"
    end

    platform_is_not :windows do
      @base = Dir.pwd
      @tmpdir = "/tmp"
      @rootdir = "/"
    end
  end

  with_feature :encoding do
    before :each do
      @external = Encoding.default_external
    end

    after :each do
      Encoding.default_external = @external
    end
  end

  it "converts a pathname to an absolute pathname" do
    File.expand_path('').should == @base
    File.expand_path('a').should == File.join(@base, 'a')
    File.expand_path('a', nil).should == File.join(@base, 'a')
  end

  it "converts a pathname to an absolute pathname, Ruby-Talk:18512" do
    # See Ruby-Talk:18512
    File.expand_path('.a').should == File.join(@base, '.a')
    File.expand_path('..a').should == File.join(@base, '..a')
    File.expand_path('a../b').should == File.join(@base, 'a../b')
  end

  platform_is_not :windows do
    it "keeps trailing dots on absolute pathname" do
      # See Ruby-Talk:18512
      File.expand_path('a.').should == File.join(@base, 'a.')
      File.expand_path('a..').should == File.join(@base, 'a..')
    end
  end

  it "converts a pathname to an absolute pathname, using a complete path" do
    File.expand_path("", "#{@tmpdir}").should == "#{@tmpdir}"
    File.expand_path("a", "#{@tmpdir}").should =="#{@tmpdir}/a"
    File.expand_path("../a", "#{@tmpdir}/xxx").should == "#{@tmpdir}/a"
    File.expand_path(".", "#{@rootdir}").should == "#{@rootdir}"
  end

  # FIXME: do not use conditionals like this around #it blocks
  unless not home = ENV['HOME']
    platform_is_not :windows do
      it "converts a pathname to an absolute pathname, using ~ (home) as base" do
        File.expand_path('~').should == home
        File.expand_path('~', '/tmp/gumby/ddd').should == home
        File.expand_path('~/a', '/tmp/gumby/ddd').should == File.join(home, 'a')
      end

      it "does not return a frozen string" do
        File.expand_path('~').frozen?.should == false
        File.expand_path('~', '/tmp/gumby/ddd').frozen?.should == false
        File.expand_path('~/a', '/tmp/gumby/ddd').frozen?.should == false
      end
    end
    platform_is :windows do
      it "converts a pathname to an absolute pathname, using ~ (home) as base" do
        File.expand_path('~').should == home.tr("\\", '/')
        File.expand_path('~', '/tmp/gumby/ddd').should == home.tr("\\", '/')
        File.expand_path('~/a', '/tmp/gumby/ddd').should == File.join(home.tr("\\", '/'), 'a')
      end

      it "does not return a frozen string" do
        File.expand_path('~').frozen?.should == false
        File.expand_path('~', '/tmp/gumby/ddd').frozen?.should == false
        File.expand_path('~/a', '/tmp/gumby/ddd').frozen?.should == false
      end
    end
  end

  platform_is_not :windows do
    before do
      @home = ENV['HOME'].chomp('/')
    end

    # FIXME: these are insane!
    it "expand path with" do
      File.expand_path("../../bin", "/tmp/x").should == "/bin"
      File.expand_path("../../bin", "/tmp").should == "/bin"
      File.expand_path("../../bin", "/").should == "/bin"
      File.expand_path("../bin", "tmp/x").should == File.join(@base, 'tmp', 'bin')
      File.expand_path("../bin", "x/../tmp").should == File.join(@base, 'bin')
    end

    it "expand_path for commoms unix path  give a full path" do
      File.expand_path('/tmp/').should =='/tmp'
      File.expand_path('/tmp/../../../tmp').should == '/tmp'
      File.expand_path('').should == Dir.pwd
      File.expand_path('./////').should == Dir.pwd
      File.expand_path('.').should == Dir.pwd
      File.expand_path(Dir.pwd).should == Dir.pwd
      File.expand_path('~/').should == @home
      File.expand_path('~/..badfilename').should == "#{@home}/..badfilename"
      File.expand_path('..').should == Dir.pwd.split('/')[0...-1].join("/")
      File.expand_path('~/a','~/b').should == "#{@home}/a"
    end

    it "does not replace multiple '/' at the beginning of the path" do
      File.expand_path('////some/path').should == "////some/path"
    end

    it "replaces multiple '/' with a single '/'" do
      File.expand_path('/some////path').should == "/some/path"
    end

    it "raises an ArgumentError if the path is not valid" do
      lambda { File.expand_path("~a_not_existing_user") }.should raise_error(ArgumentError)
    end

    it "expands ~ENV['USER'] to the user's home directory" do
      File.expand_path("~#{ENV['USER']}").should == @home
      File.expand_path("~#{ENV['USER']}/a").should == "#{@home}/a"
    end

    it "does not expand ~ENV['USER'] when it's not at the start" do
      File.expand_path("/~#{ENV['USER']}/a").should == "/~#{ENV['USER']}/a"
    end

    it "expands ../foo with ~/dir as base dir to /path/to/user/home/foo" do
      File.expand_path('../foo', '~/dir').should == "#{@home}/foo"
    end
  end

  it "accepts objects that have a #to_path method" do
    File.expand_path(mock_to_path("a"), mock_to_path("#{@tmpdir}"))
  end

  it "raises a TypeError if not passed a String type" do
    lambda { File.expand_path(1)    }.should raise_error(TypeError)
    lambda { File.expand_path(nil)  }.should raise_error(TypeError)
    lambda { File.expand_path(true) }.should raise_error(TypeError)
  end

  platform_is_not :windows do
    it "expands /./dir to /dir" do
      File.expand_path("/./dir").should == "/dir"
    end
  end

  platform_is :windows do
    it "expands C:/./dir to C:/dir" do
      File.expand_path("C:/./dir").should == "C:/dir"
    end
  end

  with_feature :encoding do
    it "returns a String in the same encoding as the argument" do
      Encoding.default_external = Encoding::SHIFT_JIS

      path = "./a".force_encoding Encoding::CP1251
      File.expand_path(path).encoding.should equal(Encoding::CP1251)

      weird_path = [222, 173, 190, 175].pack('C*')
      File.expand_path(weird_path).encoding.should equal(Encoding::ASCII_8BIT)
    end

    platform_is_not :windows do
      it "expands a path when the default external encoding is ASCII-8BIT" do
        Encoding.default_external = Encoding::ASCII_8BIT
        path_8bit = [222, 173, 190, 175].pack('C*')
        File.expand_path( path_8bit, @rootdir).should == "#{@rootdir}" + path_8bit
      end
    end

    it "expands a path with multi-byte characters" do
      File.expand_path("Ångström").should == "#{@base}/Ångström"
    end

    platform_is_not :windows do
      it "raises an Encoding::CompatibilityError if the external encoding is not compatible" do
        Encoding.default_external = Encoding::UTF_16BE
        lambda { File.expand_path("./a") }.should raise_error(Encoding::CompatibilityError)
      end
    end
  end

  it "does not modify the string argument" do
    str = "./a/b/../c"
    File.expand_path(str, @base).should == "#{@base}/a/c"
    str.should == "./a/b/../c"
  end

  it "does not modify a HOME string argument" do
    str = "~/a"
    File.expand_path(str).should == "#{Dir.home}/a"
    str.should == "~/a"
  end

  it "returns a String when passed a String subclass" do
    str = FileSpecs::SubString.new "./a/b/../c"
    path = File.expand_path(str, @base)
    path.should == "#{@base}/a/c"
    path.should be_an_instance_of(String)
  end
end

platform_is_not :windows do
  describe "File.expand_path when HOME is not set" do
    before :each do
      @home = ENV["HOME"]
    end

    after :each do
      ENV["HOME"] = @home
    end

    ruby_version_is ''...'2.4' do
      it "raises an ArgumentError when passed '~' if HOME is nil" do
        ENV.delete "HOME"
        lambda { File.expand_path("~") }.should raise_error(ArgumentError)
      end

      it "raises an ArgumentError when passed '~/' if HOME is nil" do
        ENV.delete "HOME"
        lambda { File.expand_path("~/") }.should raise_error(ArgumentError)
      end
    end

    it "raises an ArgumentError when passed '~' if HOME == ''" do
      ENV["HOME"] = ""
      lambda { File.expand_path("~") }.should raise_error(ArgumentError)
    end
  end
end
