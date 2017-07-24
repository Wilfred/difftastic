require File.expand_path('../enumeratorized', __FILE__)

describe :enumerable_enumeratorized_with_unknown_size, shared: true do
  describe "Enumerable with size" do
    before :all do
      @object = EnumerableSpecs::NumerousWithSize.new(1, 2, 3, 4)
    end
    it_should_behave_like :enumeratorized_with_unknown_size
  end

  describe "Enumerable with no size" do
    before :all do
      @object = EnumerableSpecs::Numerous.new(1, 2, 3, 4)
    end
    it_should_behave_like :enumeratorized_with_unknown_size
  end
end

describe :enumerable_enumeratorized_with_origin_size, shared: true do
  describe "Enumerable with size" do
    before :all do
      @object = EnumerableSpecs::NumerousWithSize.new(1, 2, 3, 4)
    end
    it_should_behave_like :enumeratorized_with_origin_size
  end

  describe "Enumerable with no size" do
    before :all do
      @object = EnumerableSpecs::Numerous.new(1, 2, 3, 4)
    end
    it_should_behave_like :enumeratorized_with_unknown_size
  end
end
