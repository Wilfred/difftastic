require File.expand_path('../../../spec_helper', __FILE__)

require 'English'

describe "English" do
  it "aliases $ERROR_INFO to $!" do
    begin
      raise "error"
    rescue
      $ERROR_INFO.should_not be_nil
      $ERROR_INFO.should == $!
    end
    $ERROR_INFO.should be_nil
  end

  it "aliases $ERROR_POSITION to $@" do
    begin
      raise "error"
    rescue
      $ERROR_POSITION.should_not be_nil
      $ERROR_POSITION.should == $@
    end
    $ERROR_POSITION.should be_nil
  end

  it "aliases $FS to $;" do
    original = $;
    $; = ","
    $FS.should_not be_nil
    $FS.should == $;
    $; = original
  end

  it "aliases $FIELD_SEPARATOR to $;" do
    original = $;
    $; = ","
    $FIELD_SEPARATOR.should_not be_nil
    $FIELD_SEPARATOR.should == $;
    $; = original
  end

  it "aliases $OFS to $," do
    original = $,
    $, = "|"
    $OFS.should_not be_nil
    $OFS.should == $,
    $, = original
  end

  it "aliases $OUTPUT_FIELD_SEPARATOR to $," do
    original = $,
    $, = "|"
    $OUTPUT_FIELD_SEPARATOR.should_not be_nil
    $OUTPUT_FIELD_SEPARATOR.should == $,
    $, = original
  end

  it "aliases $RS to $/" do
    $RS.should_not be_nil
    $RS.should == $/
  end

  it "aliases $INPUT_RECORD_SEPARATOR to $/" do
    $INPUT_RECORD_SEPARATOR.should_not be_nil
    $INPUT_RECORD_SEPARATOR.should == $/
  end

  it "aliases $ORS to $\\" do
    original = $\
    $\ = "\t"
    $ORS.should_not be_nil
    $ORS.should == $\
    $\ = original
  end

  it "aliases $OUTPUT_RECORD_SEPARATOR to $\\" do
    original = $\
    $\ = "\t"
    $OUTPUT_RECORD_SEPARATOR.should_not be_nil
    $OUTPUT_RECORD_SEPARATOR.should == $\
    $\ = original
  end

  it "aliases $INPUT_LINE_NUMBER to $." do
    $INPUT_LINE_NUMBER.should_not be_nil
    $INPUT_LINE_NUMBER.should == $.
  end

  it "aliases $NR to $." do
    $NR.should_not be_nil
    $NR.should == $.
  end

  it "aliases $LAST_READ_LINE to $_ needs to be reviewed for spec completeness"

  it "aliases $DEFAULT_OUTPUT to $>" do
    $DEFAULT_OUTPUT.should_not be_nil
    $DEFAULT_OUTPUT.should == $>
  end

  it "aliases $DEFAULT_INPUT to $<" do
    $DEFAULT_INPUT.should_not be_nil
    $DEFAULT_INPUT.should == $<
  end

  it "aliases $PID to $$" do
    $PID.should_not be_nil
    $PID.should == $$
  end

  it "aliases $PID to $$" do
    $PID.should_not be_nil
    $PID.should == $$
  end

  it "aliases $PROCESS_ID to $$" do
    $PROCESS_ID.should_not be_nil
    $PROCESS_ID.should == $$
  end

  it "aliases $CHILD_STATUS to $?" do
    ruby_exe('exit 0')
    $CHILD_STATUS.should_not be_nil
    $CHILD_STATUS.should == $?
  end

  it "aliases $LAST_MATCH_INFO to $~" do
    /c(a)t/ =~ "cat"
    $LAST_MATCH_INFO.should_not be_nil
    $LAST_MATCH_INFO.should == $~
  end

  it "aliases $IGNORECASE to $=" do
    $VERBOSE, verbose = nil, $VERBOSE
    begin
      $IGNORECASE.should_not be_nil
      $IGNORECASE.should == $=
    ensure
      $VERBOSE = verbose
    end
  end

  it "aliases $ARGV to $*" do
    $ARGV.should_not be_nil
    $ARGV.should == $*
  end

  it "aliases $MATCH to $&" do
    /c(a)t/ =~ "cat"
    $MATCH.should_not be_nil
    $MATCH.should == $&
  end

  it "aliases $PREMATCH to $`" do
    /c(a)t/ =~ "cat"
    $PREMATCH.should_not be_nil
    $PREMATCH.should == $`
  end

  it "aliases $POSTMATCH to $'" do
    /c(a)t/ =~ "cat"
    $POSTMATCH.should_not be_nil
    $POSTMATCH.should == $'
  end

  it "aliases $LAST_PAREN_MATCH to $+" do
    /c(a)t/ =~ "cat"
    $LAST_PAREN_MATCH.should_not be_nil
    $LAST_PAREN_MATCH.should == $+
  end
end
