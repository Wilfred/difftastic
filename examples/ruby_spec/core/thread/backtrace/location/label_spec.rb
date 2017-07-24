require File.expand_path('../../../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe 'Thread::Backtrace::Location#label' do
  it 'returns the base label of the call frame' do
    ThreadBacktraceLocationSpecs.locations[0].label.should include('<top (required)>')
  end

  it 'returns the method name for a method location' do
    ThreadBacktraceLocationSpecs.method_location[0].label.should == "method_location"
  end

  it 'returns the block name for a block location' do
    ThreadBacktraceLocationSpecs.block_location[0].label.should == "block in block_location"
  end

  it 'returns the module name for a module location' do
    ThreadBacktraceLocationSpecs::MODULE_LOCATION[0].label.should include "ThreadBacktraceLocationSpecs"
  end
end
