require File.expand_path('../../spec_helper', __FILE__)
require File.expand_path('../fixtures/super', __FILE__)

describe "The super keyword" do
  it "calls the method on the calling class" do
    Super::S1::A.new.foo([]).should == ["A#foo","A#bar"]
    Super::S1::A.new.bar([]).should == ["A#bar"]
    Super::S1::B.new.foo([]).should == ["B#foo","A#foo","B#bar","A#bar"]
    Super::S1::B.new.bar([]).should == ["B#bar","A#bar"]
  end

  it "searches the full inheritence chain" do
    Super::S2::B.new.foo([]).should == ["B#foo","A#baz"]
    Super::S2::B.new.baz([]).should == ["A#baz"]
    Super::S2::C.new.foo([]).should == ["B#foo","C#baz","A#baz"]
    Super::S2::C.new.baz([]).should == ["C#baz","A#baz"]
  end

  it "searches class methods" do
    Super::S3::A.new.foo([]).should == ["A#foo"]
    Super::S3::A.foo([]).should == ["A.foo"]
    Super::S3::A.bar([]).should == ["A.bar","A.foo"]
    Super::S3::B.new.foo([]).should == ["A#foo"]
    Super::S3::B.foo([]).should == ["B.foo","A.foo"]
    Super::S3::B.bar([]).should == ["B.bar","A.bar","B.foo","A.foo"]
  end

  it "calls the method on the calling class including modules" do
    Super::MS1::A.new.foo([]).should == ["ModA#foo","ModA#bar"]
    Super::MS1::A.new.bar([]).should == ["ModA#bar"]
    Super::MS1::B.new.foo([]).should == ["B#foo","ModA#foo","ModB#bar","ModA#bar"]
    Super::MS1::B.new.bar([]).should == ["ModB#bar","ModA#bar"]
  end

  it "searches the full inheritence chain including modules" do
    Super::MS2::B.new.foo([]).should == ["ModB#foo","A#baz"]
    Super::MS2::B.new.baz([]).should == ["A#baz"]
    Super::MS2::C.new.baz([]).should == ["C#baz","A#baz"]
    Super::MS2::C.new.foo([]).should == ["ModB#foo","C#baz","A#baz"]
  end

  it "can resolve to different methods in an included module method" do
    Super::MultiSuperTargets::A.new.foo.should == :BaseA
    Super::MultiSuperTargets::B.new.foo.should == :BaseB
  end

  it "searches class methods including modules" do
    Super::MS3::A.new.foo([]).should == ["A#foo"]
    Super::MS3::A.foo([]).should == ["ModA#foo"]
    Super::MS3::A.bar([]).should == ["ModA#bar","ModA#foo"]
    Super::MS3::B.new.foo([]).should == ["A#foo"]
    Super::MS3::B.foo([]).should == ["B.foo","ModA#foo"]
    Super::MS3::B.bar([]).should == ["B.bar","ModA#bar","B.foo","ModA#foo"]
  end

  it "searches BasicObject from a module for methods defined there" do
    Super::IncludesFromBasic.new.__send__(:foobar).should == 43
  end

  it "searches BasicObject through another module for methods defined there" do
    Super::IncludesIntermediate.new.__send__(:foobar).should == 42
  end

  it "calls the correct method when the method visibility is modified" do
    Super::MS4::A.new.example.should == 5
  end

  it "calls the correct method when the superclass argument list is different from the subclass" do
    Super::S4::A.new.foo([]).should == ["A#foo"]
    Super::S4::B.new.foo([],"test").should == ["B#foo(a,test)", "A#foo"]
  end

  it "raises an error error when super method does not exist" do
    sup = Class.new
    sub_normal = Class.new(sup) do
      def foo
        super()
      end
    end
    sub_zsuper = Class.new(sup) do
      def foo
        super
      end
    end

    lambda {sub_normal.new.foo}.should raise_error(NoMethodError, /super/)
    lambda {sub_zsuper.new.foo}.should raise_error(NoMethodError, /super/)
  end

  it "uses given block even if arguments are passed explicitly" do
    c1 = Class.new do
      def m
        yield
      end
    end
    c2 = Class.new(c1) do
      def m(v)
        super()
      end
    end

    c2.new.m(:dump) { :value }.should == :value
  end

  it "calls the superclass method when in a block" do
    Super::S6.new.here.should == :good
  end

  it "calls the superclass method when initial method is defined_method'd" do
    Super::S7.new.here.should == :good
  end

  it "can call through a define_method multiple times (caching check)" do
    obj = Super::S7.new

    2.times do
      obj.here.should == :good
    end
  end

  it "supers up appropriate name even if used for multiple method names" do
    sup = Class.new do
      def a; "a"; end
      def b; "b"; end
    end

    sub = Class.new(sup) do
      [:a, :b].each do |name|
        define_method name do
          super()
        end
      end
    end

    sub.new.a.should == "a"
    sub.new.b.should == "b"
    sub.new.a.should == "a"
  end

  it "raises a RuntimeError when called with implicit arguments from a method defined with define_method" do
    super_class = Class.new do
      def a(arg)
        arg
      end
    end

    klass = Class.new super_class do
      define_method :a do |arg|
        super
      end
    end

    lambda { klass.new.a(:a_called) }.should raise_error(RuntimeError)
  end

  # Rubinius ticket github#157
  it "calls method_missing when a superclass method is not found" do
    Super::MM_B.new.is_a?(Hash).should == false
  end

  # Rubinius ticket github#180
  it "respects the original module a method is aliased from" do
    Super::Alias3.new.name3.should == [:alias2, :alias1]
  end

  it "sees the included version of a module a method is alias from" do
    Super::AliasWithSuper::Trigger.foo.should == [:b, :a]
  end

  it "find super from a singleton class" do
    obj = Super::SingletonCase::Foo.new
    def obj.foobar(array)
      array << :singleton
      super
    end
    obj.foobar([]).should == [:singleton, :foo, :base]
  end

  it "finds super on other objects if a singleton class aliased the method" do
    orig_obj = Super::SingletonAliasCase::Foo.new
    orig_obj.alias_on_singleton
    orig_obj.new_foobar([]).should == [:foo, :base]
    Super::SingletonAliasCase::Foo.new.foobar([]).should == [:foo, :base]
  end

  it "passes along modified rest args when they weren't originally empty" do
    Super::RestArgsWithSuper::B.new.a("bar").should == ["bar", "foo"]
  end

  it "passes along modified rest args when they were originally empty" do
    Super::RestArgsWithSuper::B.new.a.should == ["foo"]
  end

  it "invokes methods from a chain of anonymous modules" do
    Super::AnonymousModuleIncludedTwice.new.a([]).should == ["anon", "anon", "non-anon"]
  end

  it "without explicit arguments can accept a block but still pass the original arguments" do
    Super::ZSuperWithBlock::B.new.a.should == 14
  end

  it "passes along block via reference to method expecting a reference" do
    Super::ZSuperWithBlock::B.new.b.should == [14, 15]
  end

  it "passes along a block via reference to a method that yields" do
    Super::ZSuperWithBlock::B.new.c.should == 16
  end

  it "without explicit arguments passes optional arguments that have a default value" do
    Super::ZSuperWithOptional::B.new.m(1, 2).should == 14
  end

  it "without explicit arguments passes optional arguments that have a non-default value" do
    Super::ZSuperWithOptional::B.new.m(1, 2, 3).should == 3
  end

  it "without explicit arguments passes optional arguments that have a default value but were modified" do
    Super::ZSuperWithOptional::C.new.m(1, 2).should == 100
  end

  it "without explicit arguments passes optional arguments that have a non-default value but were modified" do
    Super::ZSuperWithOptional::C.new.m(1, 2, 3).should == 100
  end

  it "without explicit arguments passes rest arguments" do
    Super::ZSuperWithRest::B.new.m(1, 2, 3).should == [1, 2, 3]
  end

  it "without explicit arguments passes rest arguments including any modifications" do
    Super::ZSuperWithRest::B.new.m_modified(1, 2, 3).should == [1, 14, 3]
  end

  it "without explicit arguments passes arguments and rest arguments" do
    Super::ZSuperWithRestAndOthers::B.new.m(1, 2, 3, 4, 5).should == [3, 4, 5]
  end

  it "without explicit arguments passes arguments and rest arguments including any modifications" do
    Super::ZSuperWithRestAndOthers::B.new.m_modified(1, 2, 3, 4, 5).should == [3, 14, 5]
  end

  it "without explicit arguments that are '_'" do
    Super::ZSuperWithUnderscores::B.new.m(1, 2).should == [1, 2]
  end

  it "without explicit arguments that are '_' including any modifications" do
    Super::ZSuperWithUnderscores::B.new.m_modified(1, 2).should == [14, 2]
  end

  describe 'when using keyword arguments' do
    it 'passes any given keyword arguments to the parent' do
      b = Super::KeywordArguments::B.new
      b.foo(:number => 10).should == {:number => 10}
    end

    it "passes any given keyword arguments including optional and required ones to the parent" do
      class Super::KeywordArguments::C
        eval <<-RUBY
        def foo(a:, b: 'b', **)
          super
        end
        RUBY
      end
      c = Super::KeywordArguments::C.new

      c.foo(a: 'a', c: 'c').should == {a: 'a', b: 'b', c: 'c'}
    end

    it 'does not pass any keyword arguments to the parent when none are given' do
      b = Super::KeywordArguments::B.new
      b.foo.should == {}
    end

    describe 'when using splat arguments' do
      it 'passes splat arguments and keyword arguments to the parent' do
        b = Super::SplatAndKeyword::B.new

        b.foo('bar', baz: true).should == [['bar'], {baz: true}]
      end
    end
  end
end
