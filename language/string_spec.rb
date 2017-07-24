# -*- encoding: binary -*-

require File.expand_path('../../spec_helper', __FILE__)

# TODO: rewrite these horrid specs. it "are..." seriously?!

describe "Ruby character strings" do

  before :each do
    @ip = 'xxx' # used for interpolation
    $ip = 'xxx'
  end

  it "don't get interpolated when put in single quotes" do
    '#{@ip}'.should == '#{@ip}'
  end

  it 'get interpolated with #{} when put in double quotes' do
    "#{@ip}".should == 'xxx'
  end

  it "interpolate instance variables just with the # character" do
    "#@ip".should == 'xxx'
  end

  it "interpolate global variables just with the # character" do
    "#$ip".should == 'xxx'
  end

  it "allows underscore as part of a variable name in a simple interpolation" do
    @my_ip = 'xxx'
    "#@my_ip".should == 'xxx'
  end

  it "has characters [.(=?!# end simple # interpolation" do
    "#@ip[".should == 'xxx['
    "#@ip.".should == 'xxx.'
    "#@ip(".should == 'xxx('
    "#@ip=".should == 'xxx='
    "#@ip?".should == 'xxx?'
    "#@ip!".should == 'xxx!'
    "#@ip#@ip".should == 'xxxxxx'
  end

  it "taints the result of interpolation when an interpolated value is tainted" do
    "#{"".taint}".tainted?.should be_true

    @ip.taint
    "#@ip".tainted?.should be_true

    $ip.taint
    "#$ip".tainted?.should be_true
  end

  it "untrusts the result of interpolation when an interpolated value is untrusted" do
    "#{"".untrust}".untrusted?.should be_true

    @ip.untrust
    "#@ip".untrusted?.should be_true

    $ip.untrust
    "#$ip".untrusted?.should be_true
  end

  it "allows using non-alnum characters as string delimiters" do
    %(hey #{@ip}).should == "hey xxx"
    %[hey #{@ip}].should == "hey xxx"
    %{hey #{@ip}}.should == "hey xxx"
    %<hey #{@ip}>.should == "hey xxx"
    %!hey #{@ip}!.should == "hey xxx"
    %@hey #{@ip}@.should == "hey xxx"
    %#hey hey#.should == "hey hey"
    %%hey #{@ip}%.should == "hey xxx"
    %^hey #{@ip}^.should == "hey xxx"
    %&hey #{@ip}&.should == "hey xxx"
    %*hey #{@ip}*.should == "hey xxx"
    %-hey #{@ip}-.should == "hey xxx"
    %_hey #{@ip}_.should == "hey xxx"
    %=hey #{@ip}=.should == "hey xxx"
    %+hey #{@ip}+.should == "hey xxx"
    %~hey #{@ip}~.should == "hey xxx"
    %:hey #{@ip}:.should == "hey xxx"
    %;hey #{@ip};.should == "hey xxx"
    %"hey #{@ip}".should == "hey xxx"
    %|hey #{@ip}|.should == "hey xxx"
    %?hey #{@ip}?.should == "hey xxx"
    %/hey #{@ip}/.should == "hey xxx"
    %,hey #{@ip},.should == "hey xxx"
    %.hey #{@ip}..should == "hey xxx"

    # surprised? huh
    %'hey #{@ip}'.should == "hey xxx"
    %\hey #{@ip}\.should == "hey xxx"
    %`hey #{@ip}`.should == "hey xxx"
    %$hey #{@ip}$.should == "hey xxx"
  end

  it "using percent with 'q', stopping interpolation" do
    %q(#{@ip}).should == '#{@ip}'
  end

  it "using percent with 'Q' to interpolate" do
    %Q(#{@ip}).should == 'xxx'
  end

  # The backslashes :
  #
  # \t (tab), \n (newline), \r (carriage return), \f (form feed), \b
  # (backspace), \a (bell), \e (escape), \s (whitespace), \nnn (octal),
  # \xnn (hexadecimal), \cx (control x), \C-x (control x), \M-x (meta x),
  # \M-\C-x (meta control x)

  it "backslashes follow the same rules as interpolation" do
    "\t\n\r\f\b\a\e\s\075\x62\cx".should == "\t\n\r\f\b\a\e =b\030"
    '\t\n\r\f\b\a\e =b\030'.should == "\\t\\n\\r\\f\\b\\a\\e =b\\030"
  end

  it "calls #to_s when the object is not a String" do
    obj = mock('to_s')
    obj.stub!(:to_s).and_return('42')

    "#{obj}".should == '42'
  end

  it "calls #to_s as a private method" do
    obj = mock('to_s')
    obj.stub!(:to_s).and_return('42')

    class << obj
      private :to_s
    end

    "#{obj}".should == '42'
  end

  it "uses an internal representation when #to_s doesn't return a String" do
    obj = mock('to_s')
    obj.stub!(:to_s).and_return(42)

    # See rubyspec commit 787c132d by yugui. There is value in
    # ensuring that this behavior works. So rather than removing
    # this spec completely, the only thing that can be asserted
    # is that if you interpolate an object that fails to return
    # a String, you will still get a String and not raise an
    # exception.
    "#{obj}".should be_an_instance_of(String)
  end

  it "allows a dynamic string to parse a nested do...end block as an argument to a call without parens, interpolated" do
    s = eval 'eval "#{proc do; 1; end.call}"'
    s.should == 1
  end

  it "are produced from character shortcuts" do
    ?z.should == 'z'
  end

  it "are produced from control character shortcuts" do
    # Control-Z
    ?\C-z.should == "\x1A"

    # Meta-Z
    ?\M-z.should == "\xFA"

    # Meta-Control-Z
    ?\M-\C-z.should == "\x9A"
  end

  describe "Unicode escaping" do
    it "can be done with \\u and four hex digits" do
      [ ["\u0000", 0x0000],
        ["\u2020", 0x2020]
      ].should be_computed_by(:ord)
    end

    it "can be done with \\u{} and one to six hex digits" do
      [ ["\u{a}", 0xa],
        ["\u{ab}", 0xab],
        ["\u{abc}", 0xabc],
        ["\u{1abc}", 0x1abc],
        ["\u{12abc}", 0x12abc],
        ["\u{100000}", 0x100000]
      ].should be_computed_by(:ord)
    end

    # TODO: spec other source encodings
    describe "with ASCII_8BIT source encoding" do
      it "produces an ASCII string when escaping ASCII characters via \\u" do
        "\u0000".encoding.should == Encoding::ASCII_8BIT
      end

      it "produces an ASCII string when escaping ASCII characters via \\u{}" do
        "\u{0000}".encoding.should == Encoding::ASCII_8BIT
      end

      it "produces a UTF-8-encoded string when escaping non-ASCII characters via \\u" do
        "\u1234".encoding.should == Encoding::UTF_8
      end

      it "produces a UTF-8-encoded string when escaping non-ASCII characters via \\u{}" do
        "\u{1234}".encoding.should == Encoding::UTF_8
      end
    end
  end
end

# TODO: rewrite all specs above this

describe "Ruby String literals" do
  def str_concat
    "foo" "bar" "baz"
  end

  def long_string_literals
    "Beautiful is better than ugly." \
    "Explicit is better than implicit."
  end

  it "on a single line with spaces in between are concatenated together" do
    str_concat.should == "foobarbaz"
  end

  it "on multiple lines with newlines and backslash in between are concatenated together" do
    long_string_literals.should == "Beautiful is better than ugly.Explicit is better than implicit."
  end

  ruby_version_is "2.3" do
    describe "with a magic frozen comment" do
      it "produce the same object each time" do
        ruby_exe(fixture(__FILE__, "freeze_magic_comment_one_literal.rb")).chomp.should == "true"
      end

      it "produce the same object for literals with the same content" do
        ruby_exe(fixture(__FILE__, "freeze_magic_comment_two_literals.rb")).chomp.should == "true"
      end

      it "produce the same object for literals with the same content in different files" do
        ruby_exe(fixture(__FILE__, "freeze_magic_comment_across_files.rb")).chomp.should == "true"
      end

      it "produce different objects for literals with the same content in different files if the other file doesn't have the comment" do
        ruby_exe(fixture(__FILE__, "freeze_magic_comment_across_files_no_comment.rb")).chomp.should == "true"
      end

      it "produce different objects for literals with the same content in different files if they have different encodings" do
        ruby_exe(fixture(__FILE__, "freeze_magic_comment_across_files_diff_enc.rb")).chomp.should == "true"
      end
    end
  end

end

with_feature :encoding do
  describe "Ruby String interpolation" do
    it "creates a String having an Encoding compatible with all components" do
      a = "\u3042"
      b = "abc".encode("ascii-8bit")

      str = "#{a} x #{b}"

      str.should == "\xe3\x81\x82\x20\x78\x20\x61\x62\x63".force_encoding("utf-8")
      str.encoding.should == Encoding::UTF_8
    end

    it "creates a String having the Encoding of the components when all are the same Encoding" do
      a = "abc".force_encoding("euc-jp")
      b = "def".force_encoding("euc-jp")
      str = '"#{a} x #{b}"'.force_encoding("euc-jp")

      result = eval(str)
      result.should == "\x61\x62\x63\x20\x78\x20\x64\x65\x66".force_encoding("euc-jp")
      result.encoding.should == Encoding::EUC_JP
    end

    it "raises an Encoding::CompatibilityError if the Encodings are not compatible" do
      a = "\u3042"
      b = "\xff".force_encoding "ascii-8bit"

      lambda { "#{a} #{b}" }.should raise_error(Encoding::CompatibilityError)
    end
  end
end
