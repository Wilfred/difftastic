require File.expand_path('../../../shared/basicobject/method_missing', __FILE__)

describe "BasicObject#method_missing" do
  it "is a private method" do
    BasicObject.should have_private_instance_method(:method_missing)
  end
end

describe "BasicObject#method_missing" do
  it_behaves_like :method_missing_class, nil, BasicObject
end

describe "BasicObject#method_missing" do
  it_behaves_like :method_missing_instance, nil, BasicObject
end

describe "BasicObject#method_missing" do
  it_behaves_like :method_missing_defined_module, nil, KernelSpecs::ModuleMM
end

describe "BasicObject#method_missing" do
  it_behaves_like :method_missing_module, nil, KernelSpecs::ModuleNoMM
end

describe "BasicObject#method_missing" do
  it_behaves_like :method_missing_defined_class, nil, KernelSpecs::ClassMM
end

describe "BasicObject#method_missing" do
  it_behaves_like :method_missing_class, nil, KernelSpecs::ClassNoMM
end

describe "BasicObject#method_missing" do
  it_behaves_like :method_missing_defined_instance, nil, KernelSpecs::ClassMM
end

describe "BasicObject#method_missing" do
  it_behaves_like :method_missing_instance, nil, KernelSpecs::ClassNoMM
end
