require File.expand_path('../../../spec_helper', __FILE__)

describe "Proc#binding" do
  it "returns a Binding instance" do
    [Proc.new{}, lambda {}, proc {}].each { |p|
      p.binding.should be_kind_of(Binding)
    }
  end

  it "returns the binding associated with self" do
    obj = mock('binding')
    def obj.test_binding(some, params)
      lambda {}
    end

    lambdas_binding = obj.test_binding(1, 2).binding

    eval("some", lambdas_binding).should == 1
    eval("params", lambdas_binding).should == 2
  end
end
