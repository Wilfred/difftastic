require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/caller', __FILE__)

describe 'Kernel#caller' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:caller)
  end

  it 'returns an Array of caller locations' do
    KernelSpecs::CallerTest.locations.empty?.should == false
  end

  it 'returns an Array of caller locations using a custom offset' do
    locations = KernelSpecs::CallerTest.locations(2)

    locations[0].should =~ %r{runner/mspec.rb}
  end

  it 'returns an Array of caller locations using a custom limit' do
    locations = KernelSpecs::CallerTest.locations(1, 1)

    locations.length.should == 1
  end

  it 'returns an Array of caller locations using a range' do
    locations = KernelSpecs::CallerTest.locations(1..1)

    locations.length.should == 1
  end

  it 'returns the locations as String instances' do
    locations = KernelSpecs::CallerTest.locations
    line      = __LINE__ - 1

    locations[0].should include("#{__FILE__}:#{line}:in")
  end
end
