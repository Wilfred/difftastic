require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/caller_locations', __FILE__)

describe 'Kernel#caller_locations' do
  it 'is a private method' do
    Kernel.should have_private_instance_method(:caller_locations)
  end

  it 'returns an Array of caller locations' do
    KernelSpecs::CallerLocationsTest.locations.empty?.should == false
  end

  it 'returns an Array of caller locations using a custom offset' do
    locations = KernelSpecs::CallerLocationsTest.locations(2)

    locations[0].absolute_path.end_with?('mspec.rb').should == true
  end

  it 'returns an Array of caller locations using a custom limit' do
    locations = KernelSpecs::CallerLocationsTest.locations(1, 1)

    locations.length.should == 1
  end

  it 'returns the locations as Thread::Backtrace::Location instances' do
    locations = KernelSpecs::CallerLocationsTest.locations

    locations.each do |location|
      location.kind_of?(Thread::Backtrace::Location).should == true
    end
  end
end
