require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

# NOTE: A call to define_finalizer does not guarantee that the
# passed proc or callable will be called at any particular time.
# It is highly questionable whether these aspects of ObjectSpace
# should be spec'd at all.
describe "ObjectSpace.define_finalizer" do
  it "raises an ArgumentError if the action does not respond to call" do
    lambda {
      ObjectSpace.define_finalizer("", mock("ObjectSpace.define_finalizer no #call"))
    }.should raise_error(ArgumentError)
  end

  it "accepts an object and a proc" do
    handler = lambda { |obj| obj }
    ObjectSpace.define_finalizer("garbage", handler).should == [0, handler]
  end

  it "accepts an object and a callable" do
    handler = mock("callable")
    def handler.call(obj) end
    ObjectSpace.define_finalizer("garbage", handler).should == [0, handler]
  end

  it "raises ArgumentError trying to define a finalizer on a non-reference" do
    lambda {
      ObjectSpace.define_finalizer(:blah) { 1 }
    }.should raise_error(ArgumentError)
  end

  # see [ruby-core:24095]
  with_feature :fork do
    it "calls finalizer on process termination" do
      rd, wr = IO.pipe
      pid = Process.fork do
        rd.close
        handler = ObjectSpaceFixtures.scoped(wr)
        obj = "Test"
        ObjectSpace.define_finalizer(obj, handler)
        exit 0
      end

      wr.close
      begin
        rd.read.should == "finalized"
      ensure
        rd.close
        Process.wait pid
      end
    end

    it "calls finalizer at exit even if it is self-referencing" do
      rd, wr = IO.pipe
      pid = Process.fork do
        rd.close
        obj = "Test"
        handler = Proc.new { wr.write "finalized"; wr.close }
        ObjectSpace.define_finalizer(obj, handler)
        exit 0
      end

      wr.close
      begin
        rd.read.should == "finalized"
      ensure
        rd.close
        Process.wait pid
      end
    end

    # These specs are defined under the fork specs because there is no
    # deterministic way to force finalizers to be run, except process exit, so
    # we rely on that.
    it "allows multiple finalizers with different 'callables' to be defined" do
      rd1, wr1 = IO.pipe
      rd2, wr2 = IO.pipe

      pid = Kernel::fork do
        rd1.close
        rd2.close
        obj = mock("ObjectSpace.define_finalizer multiple")

        ObjectSpace.define_finalizer(obj, Proc.new { wr1.write "finalized1"; wr1.close })
        ObjectSpace.define_finalizer(obj, Proc.new { wr2.write "finalized2"; wr2.close })

        exit 0
      end

      wr1.close
      wr2.close

      rd1.read.should == "finalized1"
      rd2.read.should == "finalized2"

      rd1.close
      rd2.close
      Process.wait pid
    end
  end
end
