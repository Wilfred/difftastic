require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Observer#notify_observers" do

  before :each do
    @observable = ObservableSpecs.new
    @observer = ObserverCallbackSpecs.new
    @observable.add_observer(@observer)
  end

  it "must call changed before notifying observers" do
    @observer.value.should == nil
    @observable.notify_observers("test")
    @observer.value.should == nil
  end

  it "verifies observer responds to update" do
    lambda {
      @observable.add_observer(@observable)
    }.should raise_error(NoMethodError)
  end

  it "receives the callback" do
    @observer.value.should == nil
    @observable.changed
    @observable.notify_observers("test")
    @observer.value.should == "test"
  end

end
