require File.expand_path('../../../spec_helper', __FILE__)
require 'prime'

describe :prime_each, shared: true do
  before :each do
    ScratchPad.record []
  end

  it "enumerates primes" do
    primes = Prime.instance
    result = []

    primes.each { |p|
      result << p
      break if p > 10
    }

    result.should == [2, 3, 5, 7, 11]
  end

  it "yields ascending primes to the block" do
    previous = 1
    @object.each do |prime|
      break if prime > 1000
      ScratchPad << prime
      prime.should > previous
      previous = prime
    end

    all_prime = true
    ScratchPad.recorded.all? do |prime|
      all_prime &&= (2..Math.sqrt(prime)).all? { |d| prime % d != 0 }
    end

    all_prime.should be_true
  end

  it "returns the last evaluated expression in the passed block" do
    @object.each { break :value }.should equal(:value)
  end

  describe "when not passed a block" do
    before :each do
      @prime_enum = @object.each
    end

    it "returns an object that is Enumerable" do
      @prime_enum.each.should be_kind_of(Enumerable)
    end

    it "returns an object that responds to #with_index" do
      @prime_enum.should respond_to(:with_index)
    end

    it "returns an object that responds to #with_object" do
      @prime_enum.should respond_to(:with_object)
    end

    it "returns an object that responds to #next" do
      @prime_enum.should respond_to(:next)
    end

    it "returns an object that responds to #rewind" do
      @prime_enum.should respond_to(:rewind)
    end

    it "yields primes starting at 2 independent of prior enumerators" do
      @prime_enum.next.should == 2
      @prime_enum.next.should == 3

      @object.each { |prime| break prime }.should == 2
    end

    it "returns an enumerator that yields previous primes when #rewind is called" do
      @prime_enum.next.should == 2
      @prime_enum.next.should == 3
      @prime_enum.rewind
      @prime_enum.next.should == 2
    end

    it "returns independent enumerators" do
      enum = @object.each
      enum.next.should == 2
      enum.next.should == 3

      @prime_enum.next.should == 2

      enum.next.should == 5
    end
  end
end

describe :prime_each_with_arguments, shared: true do
  before :each do
    ScratchPad.record []
  end

  it "yields ascending primes less than or equal to the argument" do
    bound = 1000
    previous = 1
    @object.each(bound) do |prime|
      ScratchPad << prime
      prime.should > previous
      previous = prime
    end

    ScratchPad.recorded.all? do |prime|
      (2..Math.sqrt(prime)).all? { |d| prime % d != 0 }
    end.should be_true

    ScratchPad.recorded.all? { |prime| prime <= bound }.should be_true
  end

  it "returns nil when no prime is generated" do
    @object.each(1) { :value }.should be_nil
  end

  it "yields primes starting at 2 independent of prior enumeration" do
    @object.each(10) { |prime| prime }.should == 7
    @object.each(10) { |prime| break prime }.should == 2
  end

  it "accepts a pseudo-prime generator as the second argument" do
    generator = mock('very bad pseudo-prime generator')
    generator.should_receive(:upper_bound=).with(100)
    generator.should_receive(:each).and_yield(2).and_yield(3).and_yield(4)

    @object.each(100, generator) { |prime| ScratchPad << prime }
    ScratchPad.recorded.should == [2, 3, 4]
  end

  describe "when not passed a block" do
    it "returns an object that returns primes less than or equal to the bound" do
      bound = 100
      @object.each(bound).all? { |prime| prime <= bound }.should be_true
    end
  end
end

describe "Prime.each" do
  it_behaves_like :prime_each, :each, Prime
end

describe "Prime.each" do
  it_behaves_like :prime_each_with_arguments, :each, Prime
end

describe "Prime#each with Prime.instance" do
  it_behaves_like :prime_each, :each, Prime.instance
end

describe "Prime#each with Prime.instance" do
  it_behaves_like :prime_each_with_arguments, :each, Prime.instance
end

describe "Prime#each with Prime.instance" do
  before :each do
    @object = Prime.instance
  end

  it_behaves_like :prime_each, :each

  it "resets the enumerator with each call" do
    @object.each { |prime| break if prime > 10 }
    @object.each { |prime| break prime }.should == 2
  end
end
