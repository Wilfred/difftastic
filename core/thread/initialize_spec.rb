require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Thread#initialize" do

  describe "already initialized" do

    before do
      @t = Thread.new { sleep }
    end

    after do
      @t.kill
      @t.join
    end

    it "raises a ThreadError" do
      lambda {
        @t.instance_eval do
          initialize {}
        end
      }.should raise_error(ThreadError)
    end

  end

end
