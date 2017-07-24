require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../../../fixtures/reflection', __FILE__)

# TODO: rewrite
describe "Kernel#public_methods" do
  it "returns a list of the names of publicly accessible methods in the object" do
    KernelSpecs::Methods.public_methods(false).sort.should include(:hachi,
      :ichi, :juu, :juu_ni, :roku, :san, :shi)
    KernelSpecs::Methods.new.public_methods(false).sort.should include(:juu_san, :ni)
  end

  it "returns a list of names without protected accessible methods in the object" do
    KernelSpecs::Methods.public_methods(false).sort.should_not include(:juu_ichi)
    KernelSpecs::Methods.new.public_methods(false).sort.should_not include(:ku)
  end

  it "returns a list of the names of publicly accessible methods in the object and its ancestors and mixed-in modules" do
    (KernelSpecs::Methods.public_methods(false) & KernelSpecs::Methods.public_methods).sort.should include(
      :hachi, :ichi, :juu, :juu_ni, :roku, :san, :shi)
    m = KernelSpecs::Methods.new.public_methods
    m.should include(:ni, :juu_san)
  end

  it "returns methods mixed in to the metaclass" do
    m = KernelSpecs::Methods.new
    m.extend(KernelSpecs::Methods::MetaclassMethods)
    m.public_methods.should include(:peekaboo)
  end

  it "returns public methods for immediates" do
    10.public_methods.should include(:divmod)
  end
end

describe :kernel_public_methods_supers, shared: true do
  it "returns a unique list for an object extended by a module" do
    m = ReflectSpecs.oed.public_methods(*@object)
    m.select { |x| x == :pub }.sort.should == [:pub]
  end

  it "returns a unique list for a class including a module" do
    m = ReflectSpecs::D.new.public_methods(*@object)
    m.select { |x| x == :pub }.sort.should == [:pub]
  end

  it "returns a unique list for a subclass of a class that includes a module" do
    m = ReflectSpecs::E.new.public_methods(*@object)
    m.select { |x| x == :pub }.sort.should == [:pub]
  end
end

describe :kernel_public_methods_with_falsy, shared: true do
  it "returns a list of public methods in without its ancestors" do
    ReflectSpecs::F.public_methods(@object).select{|m|/_pub\z/ =~ m}.sort.should == [:ds_pub, :fs_pub]
    ReflectSpecs::F.new.public_methods(@object).should == [:f_pub]
  end
end

describe "Kernel#public_methods" do
  describe "when not passed an argument" do
    it_behaves_like :kernel_public_methods_supers, nil, []
  end

  describe "when passed true" do
    it_behaves_like :kernel_public_methods_supers, nil, true
  end

  describe "when passed false" do
    it_behaves_like :kernel_public_methods_with_falsy, nil, false
  end

  describe "when passed nil" do
    it_behaves_like :kernel_public_methods_with_falsy, nil, nil
  end
end
