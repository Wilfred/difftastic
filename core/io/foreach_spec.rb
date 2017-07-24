# -*- encoding: utf-8 -*-
require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/readlines', __FILE__)

describe "IO.foreach" do
  before :each do
    @name = fixture __FILE__, "lines.txt"
    @count = 0
    ScratchPad.record []
  end

  it "updates $. with each yield" do
    IO.foreach(@name) { $..should == @count += 1 }
  end

  describe "when the filename starts with |" do
    it "gets data from the standard out of the subprocess" do
      cmd = "|sh -c 'echo hello;echo line2'"
      platform_is :windows do
        cmd = "|cmd.exe /C echo hello&echo line2"
      end
      IO.foreach(cmd) { |l| ScratchPad << l }
      ScratchPad.recorded.should == ["hello\n", "line2\n"]
    end

    with_feature :fork do
      it "gets data from a fork when passed -" do
        parent_pid = $$

        IO.foreach("|-") { |l| ScratchPad << l }

        if $$ == parent_pid
          ScratchPad.recorded.should == ["hello\n", "from a fork\n"]
        else # child
          puts "hello"
          puts "from a fork"
          exit!
        end
      end
    end
  end
end

describe "IO.foreach" do
  before :each do
    @external = Encoding.default_external
    Encoding.default_external = Encoding::UTF_8

    @name = fixture __FILE__, "lines.txt"
    ScratchPad.record []
  end

  after :each do
    Encoding.default_external = @external
  end

  it "sets $_ to nil" do
    $_ = "test"
    IO.foreach(@name) { }
    $_.should be_nil
  end

  describe "when no block is given" do
    it "returns an Enumerator" do
      IO.foreach(@name).should be_an_instance_of(Enumerator)
      IO.foreach(@name).to_a.should == IOSpecs.lines
    end

    describe "returned Enumerator" do
      describe "size" do
        it "should return nil" do
          IO.foreach(@name).size.should == nil
        end
      end
    end
  end

  it_behaves_like :io_readlines, :foreach, IOSpecs.collector
  it_behaves_like :io_readlines_options_19, :foreach, IOSpecs.collector
end
