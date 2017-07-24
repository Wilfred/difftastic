require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Observer#count_observers" do
  before :each do
    @observable = ObservableSpecs.new
    @observer   = ObserverCallbackSpecs.new
    @observer2  = ObserverCallbackSpecs.new
  end

  it "returns the number of observers" do
    @observable.count_observers.should == 0
    @observable.add_observer(@observer)
    @observable.count_observers.should == 1
    @observable.add_observer(@observer2)
    @observable.count_observers.should == 2
  end

  it "returns the number of unique observers" do
    2.times { @observable.add_observer(@observer) }
    @observable.count_observers.should == 1
  end
end
