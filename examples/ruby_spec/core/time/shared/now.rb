require File.expand_path('../../fixtures/classes', __FILE__)

describe :time_now, shared: true do
  it "creates a subclass instance if called on a subclass" do
    TimeSpecs::SubTime.send(@method).should be_an_instance_of(TimeSpecs::SubTime)
    TimeSpecs::MethodHolder.send(@method).should be_an_instance_of(Time)
  end
end
