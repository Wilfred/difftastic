require 'delegate'

describe "DelegateClass#respond_to_missing?" do
  it "is used for respond_to? behavior of late-bound delegated methods" do
    # From jruby/jruby#3151:
    # DelegateClass subtracts Delegate's public API from the target class's instance_methods
    # to determine which methods to eagerly delegate. If respond_to_missing? shows up in
    # instance_methods, it will get delegated and skip the delegate-aware implementation
    # in Delegate. Any methods that must be delegated through method_missing, like methods
    # defined after the DelegateClass is created, will fail to dispatch properly.

    cls = Class.new
    dcls = DelegateClass(cls)
    cdcls = Class.new(dcls)
    cdcls_obj = cdcls.new(cls.new)

    cdcls_obj.respond_to?(:foo).should == false

    cls.class_eval { def foo; end }

    cdcls_obj.respond_to?(:foo).should == true
  end
end
