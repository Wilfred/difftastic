require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Observer#delete_observers" do
  before :each do
    @observable = ObservableSpecs.new
    @observer = ObserverCallbackSpecs.new
  end

  it "deletes the observers" do
    @observable.add_observer(@observer)
    @observable.delete_observers

    @observable.changed
    @observable.notify_observers("test")
    @observer.value.should == nil
  end

end
