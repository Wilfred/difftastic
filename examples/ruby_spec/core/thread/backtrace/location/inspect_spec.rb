require File.expand_path('../../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe 'Thread::Backtrace::Location#inspect' do
  before :each do
    @frame = ThreadBacktraceLocationSpecs.locations[0]
    @line  = __LINE__ - 1
  end

  it 'converts the call frame to a String' do
    @frame.inspect.should include("#{__FILE__}:#{@line}:in ")
  end
end
