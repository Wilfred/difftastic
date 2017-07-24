require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../../../fixtures/reflection', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe :kernel_singleton_methods, shared: true do
  it "returns an empty Array for an object with no singleton methods" do
    ReflectSpecs.o.singleton_methods(*@object).should == []
  end

  it "returns the names of module methods for a module" do
    ReflectSpecs::M.singleton_methods(*@object).should include(:ms_pro, :ms_pub)
  end

  it "does not return private module methods for a module" do
    ReflectSpecs::M.singleton_methods(*@object).should_not include(:ms_pri)
  end

  it "returns the names of class methods for a class" do
    ReflectSpecs::A.singleton_methods(*@object).should include(:as_pro, :as_pub)
  end

  it "does not return private class methods for a class" do
    ReflectSpecs::A.singleton_methods(*@object).should_not include(:as_pri)
  end

  it "returns the names of singleton methods for an object" do
    ReflectSpecs.os.singleton_methods(*@object).should include(:os_pro, :os_pub)
  end
end

describe :kernel_singleton_methods_modules, shared: true do
  it "does not return any included methods for a module including a module" do
    ReflectSpecs::N.singleton_methods(*@object).should include(:ns_pro, :ns_pub)
  end

  it "does not return any included methods for a class including a module" do
    ReflectSpecs::D.singleton_methods(*@object).should include(:ds_pro, :ds_pub)
  end
end

describe :kernel_singleton_methods_supers, shared: true do
  it "returns the names of singleton methods for an object extented with a module" do
    ReflectSpecs.oe.singleton_methods(*@object).should include(:m_pro, :m_pub)
  end

  it "returns a unique list for an object extended with a module" do
    m = ReflectSpecs.oed.singleton_methods(*@object)
    r = m.select { |x| x == :pub or x == :pro }.sort
    r.should == [:pro, :pub]
  end

  it "returns the names of singleton methods for an object extented with two modules" do
    ReflectSpecs.oee.singleton_methods(*@object).should include(:m_pro, :m_pub, :n_pro, :n_pub)
  end

  it "returns the names of singleton methods for an object extented with a module including a module" do
    ReflectSpecs.oei.singleton_methods(*@object).should include(:n_pro, :n_pub, :m_pro, :m_pub)
  end

  it "returns the names of inherited singleton methods for a subclass" do
    ReflectSpecs::B.singleton_methods(*@object).should include(:as_pro, :as_pub, :bs_pro, :bs_pub)
  end

  it "returns a unique list for a subclass" do
    m = ReflectSpecs::B.singleton_methods(*@object)
    r = m.select { |x| x == :pub or x == :pro }.sort
    r.should == [:pro, :pub]
  end

  it "returns the names of inherited singleton methods for a subclass including a module" do
    ReflectSpecs::C.singleton_methods(*@object).should include(:as_pro, :as_pub, :cs_pro, :cs_pub)
  end

  it "returns a unique list for a subclass including a module" do
    m = ReflectSpecs::C.singleton_methods(*@object)
    r = m.select { |x| x == :pub or x == :pro }.sort
    r.should == [:pro, :pub]
  end

  it "returns the names of inherited singleton methods for a subclass of a class including a module" do
    ReflectSpecs::E.singleton_methods(*@object).should include(:ds_pro, :ds_pub, :es_pro, :es_pub)
  end

  it "returns the names of inherited singleton methods for a subclass of a class that includes a module, where the subclass also includes a module" do
    ReflectSpecs::F.singleton_methods(*@object).should include(:ds_pro, :ds_pub, :fs_pro, :fs_pub)
  end

  it "returns the names of inherited singleton methods for a class extended with a module" do
    ReflectSpecs::P.singleton_methods(*@object).should include(:m_pro, :m_pub)
  end
end

describe :kernel_singleton_methods_private_supers, shared: true do
  it "does not return private singleton methods for an object extended with a module" do
    ReflectSpecs.oe.singleton_methods(*@object).should_not include(:m_pri)
  end

  it "does not return private singleton methods for an object extended with two modules" do
    ReflectSpecs.oee.singleton_methods(*@object).should_not include(:m_pri)
  end

  it "does not return private singleton methods for an object extented with a module including a module" do
    ReflectSpecs.oei.singleton_methods(*@object).should_not include(:n_pri, :m_pri)
  end

  it "does not return private singleton methods for a class extended with a module" do
    ReflectSpecs::P.singleton_methods(*@object).should_not include(:m_pri)
  end

  it "does not return private inherited singleton methods for a module including a module" do
    ReflectSpecs::N.singleton_methods(*@object).should_not include(:ns_pri)
  end

  it "does not return private inherited singleton methods for a class including a module" do
    ReflectSpecs::D.singleton_methods(*@object).should_not include(:ds_pri)
  end

  it "does not return private inherited singleton methods for a subclass" do
    ReflectSpecs::B.singleton_methods(*@object).should_not include(:as_pri, :bs_pri)
  end

  it "does not return private inherited singleton methods for a subclass including a module" do
    ReflectSpecs::C.singleton_methods(*@object).should_not include(:as_pri, :cs_pri)
  end

  it "does not return private inherited singleton methods for a subclass of a class including a module" do
    ReflectSpecs::E.singleton_methods(*@object).should_not include(:ds_pri, :es_pri)
  end

  it "does not return private inherited singleton methods for a subclass of a class that includes a module, where the subclass also includes a module" do
    ReflectSpecs::F.singleton_methods(*@object).should_not include(:ds_pri, :fs_pri)
  end
end

describe "Kernel#singleton_methods" do
  describe "when not passed an argument" do
    it_behaves_like :kernel_singleton_methods, nil, []
    it_behaves_like :kernel_singleton_methods_supers, nil, []
    it_behaves_like :kernel_singleton_methods_modules, nil, []
    it_behaves_like :kernel_singleton_methods_private_supers, nil, []
  end

  describe "when passed true" do
    it_behaves_like :kernel_singleton_methods, nil, true
    it_behaves_like :kernel_singleton_methods_supers, nil, true
    it_behaves_like :kernel_singleton_methods_modules, nil, true
    it_behaves_like :kernel_singleton_methods_private_supers, nil, true

  end

  describe "when passed false" do
    it_behaves_like :kernel_singleton_methods, nil, false
    it_behaves_like :kernel_singleton_methods_modules, nil, false
    it_behaves_like :kernel_singleton_methods_private_supers, nil, false

    it "returns an empty Array for an object extented with a module" do
      ReflectSpecs.oe.singleton_methods(false).should == []
    end

    it "returns an empty Array for an object extented with two modules" do
      ReflectSpecs.oee.singleton_methods(false).should == []
    end

    it "returns an empty Array for an object extended with a module including a module" do
      ReflectSpecs.oei.singleton_methods(false).should == []
    end

    it "returns the names of singleton methods of the subclass" do
      ReflectSpecs::B.singleton_methods(false).should include(:bs_pro, :bs_pub)
    end

    it "does not return names of inherited singleton methods for a subclass" do
      ReflectSpecs::B.singleton_methods(false).should_not include(:as_pro, :as_pub)
    end

    it "does not return the names of inherited singleton methods for a class extended with a module" do
      ReflectSpecs::P.singleton_methods(false).should_not include(:m_pro, :m_pub)
    end
  end
end
