require File.expand_path('../../../spec_helper', __FILE__)

describe "Proc#arity" do
  SpecEvaluate.desc = "for definition"

  context "for instances created with -> () { }" do
    context "returns zero" do
      evaluate <<-ruby do
          @a = -> () {}
        ruby

        @a.arity.should == 0
      end

      evaluate <<-ruby do
          @a = -> (&b) {}
        ruby

        @a.arity.should == 0
      end
    end

    context "returns positive values" do
      evaluate <<-ruby do
          @a = -> (a) { }
          @b = -> (a, b) { }
          @c = -> (a, b, c) { }
          @d = -> (a, b, c, d) { }
        ruby

        @a.arity.should == 1
        @b.arity.should == 2
        @c.arity.should == 3
        @d.arity.should == 4
      end

      evaluate <<-ruby do
          @a = -> (a:) { }
          @b = -> (a:, b:) { }
          @c = -> (a: 1, b:, c:, d: 2) { }
        ruby

        @a.arity.should == 1
        @b.arity.should == 1
        @c.arity.should == 1
      end

      evaluate <<-ruby do
          @a = -> (a, b:) { }
          @b = -> (a, b:, &l) { }
        ruby

        @a.arity.should == 2
        @b.arity.should == 2
      end

      evaluate <<-ruby do
          @a = -> (a, b, c:, d: 1) { }
          @b = -> (a, b, c:, d: 1, **k, &l) { }
        ruby

        @a.arity.should == 3
        @b.arity.should == 3
      end

      evaluate <<-ruby do
          @a = -> ((a, (*b, c))) { }
          @b = -> (a, (*b, c), d, (*e), (*)) { }
        ruby

        @a.arity.should == 1
        @b.arity.should == 5
      end
    end

    context "returns negative values" do
      evaluate <<-ruby do
          @a = -> (a=1) { }
          @b = -> (a=1, b=2) { }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = -> (a, b=1) { }
          @b = -> (a, b, c=1, d=2) { }
        ruby

        @a.arity.should == -2
        @b.arity.should == -3
      end

      evaluate <<-ruby do
          @a = -> (a=1, *b) { }
          @b = -> (a=1, b=2, *c) { }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = -> (*) { }
          @b = -> (*a) { }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = -> (a, *) { }
          @b = -> (a, *b) { }
          @c = -> (a, b, *c) { }
          @d = -> (a, b, c, *d) { }
        ruby

        @a.arity.should == -2
        @b.arity.should == -2
        @c.arity.should == -3
        @d.arity.should == -4
      end

      evaluate <<-ruby do
          @a = -> (*a, b) { }
          @b = -> (*a, b, c) { }
          @c = -> (*a, b, c, d) { }
        ruby

        @a.arity.should == -2
        @b.arity.should == -3
        @c.arity.should == -4
      end

      evaluate <<-ruby do
          @a = -> (a, *b, c) { }
          @b = -> (a, b, *c, d, e) { }
        ruby

        @a.arity.should == -3
        @b.arity.should == -5
      end

      evaluate <<-ruby do
          @a = -> (a, b=1, c=2, *d, e, f) { }
          @b = -> (a, b, c=1, *d, e, f, g) { }
        ruby

        @a.arity.should == -4
        @b.arity.should == -6
      end

      evaluate <<-ruby do
          @a = -> (a: 1) { }
          @b = -> (a: 1, b: 2) { }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = -> (a=1, b: 2) { }
          @b = -> (*a, b: 1) { }
          @c = -> (a=1, b: 2) { }
          @d = -> (a=1, *b, c: 2, &l) { }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
        @c.arity.should == -1
        @d.arity.should == -1
      end

      evaluate <<-ruby do
          @a = -> (**k, &l) { }
          @b= -> (*a, **k) { }
          @c = ->(a: 1, b: 2, **k) { }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
        @c.arity.should == -1
      end

      evaluate <<-ruby do
          @a = -> (a=1, *b, c:, d: 2, **k, &l) { }
        ruby

        @a.arity.should == -2
      end

      evaluate <<-ruby do
          @a = -> (a, b=1, *c, d, e:, f: 2, **k, &l) { }
          @b = -> (a, b=1, *c, d:, e:, f: 2, **k, &l) { }
          @c = -> (a=0, b=1, *c, d, e:, f: 2, **k, &l) { }
          @d = -> (a=0, b=1, *c, d:, e:, f: 2, **k, &l) { }
        ruby

        @a.arity.should == -4
        @b.arity.should == -3
        @c.arity.should == -3
        @d.arity.should == -2
      end
    end
  end

  context "for instances created with lambda { || }" do
    context "returns zero" do
      evaluate <<-ruby do
          @a = lambda { }
          @b = lambda { || }
        ruby

        @a.arity.should == 0
        @b.arity.should == 0
      end

      evaluate <<-ruby do
          @a = lambda { |&b| }
        ruby

        @a.arity.should == 0
      end
    end

    context "returns positive values" do
      evaluate <<-ruby do
          @a = lambda { |a| }
          @b = lambda { |a, b| }
          @c = lambda { |a, b, c| }
          @d = lambda { |a, b, c, d| }
        ruby

        @a.arity.should == 1
        @b.arity.should == 2
        @c.arity.should == 3
        @d.arity.should == 4
      end

      evaluate <<-ruby do
          @a = lambda { |a:| }
          @b = lambda { |a:, b:| }
          @c = lambda { |a: 1, b:, c:, d: 2| }
        ruby

        @a.arity.should == 1
        @b.arity.should == 1
        @c.arity.should == 1
      end

      evaluate <<-ruby do
          @a = lambda { |a, b:| }
          @b = lambda { |a, b:, &l| }
        ruby

        @a.arity.should == 2
        @b.arity.should == 2
      end

      evaluate <<-ruby do
          @a = lambda { |a, b, c:, d: 1| }
          @b = lambda { |a, b, c:, d: 1, **k, &l| }
        ruby

        @a.arity.should == 3
        @b.arity.should == 3
      end
    end

    context "returns negative values" do
      evaluate <<-ruby do
          @a = lambda { |a=1| }
          @b = lambda { |a=1, b=2| }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = lambda { |a, b=1| }
          @b = lambda { |a, b, c=1, d=2| }
        ruby

        @a.arity.should == -2
        @b.arity.should == -3
      end

      evaluate <<-ruby do
          @a = lambda { |a=1, *b| }
          @b = lambda { |a=1, b=2, *c| }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = lambda { |*| }
          @b = lambda { |*a| }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = lambda { |a, *| }
          @b = lambda { |a, *b| }
          @c = lambda { |a, b, *c| }
          @d = lambda { |a, b, c, *d| }
        ruby

        @a.arity.should == -2
        @b.arity.should == -2
        @c.arity.should == -3
        @d.arity.should == -4
      end

      evaluate <<-ruby do
          @a = lambda { |*a, b| }
          @b = lambda { |*a, b, c| }
          @c = lambda { |*a, b, c, d| }
        ruby

        @a.arity.should == -2
        @b.arity.should == -3
        @c.arity.should == -4
      end

      evaluate <<-ruby do
          @a = lambda { |a, *b, c| }
          @b = lambda { |a, b, *c, d, e| }
        ruby

        @a.arity.should == -3
        @b.arity.should == -5
      end

      evaluate <<-ruby do
          @a = lambda { |a, b=1, c=2, *d, e, f| }
          @b = lambda { |a, b, c=1, *d, e, f, g| }
        ruby

        @a.arity.should == -4
        @b.arity.should == -6
      end

      evaluate <<-ruby do
          @a = lambda { |a: 1| }
          @b = lambda { |a: 1, b: 2| }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = lambda { |a=1, b: 2| }
          @b = lambda { |*a, b: 1| }
          @c = lambda { |a=1, b: 2| }
          @d = lambda { |a=1, *b, c: 2, &l| }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
        @c.arity.should == -1
        @d.arity.should == -1
      end

      evaluate <<-ruby do
          @a = lambda { |**k, &l| }
          @b = lambda { |*a, **k| }
          @c = lambda { |a: 1, b: 2, **k| }
        ruby

        @a.arity.should == -1
        @b.arity.should == -1
        @c.arity.should == -1
      end

      evaluate <<-ruby do
          @a = lambda { |a=1, *b, c:, d: 2, **k, &l| }
        ruby

        @a.arity.should == -2
      end

      evaluate <<-ruby do
          @a = lambda { |(a, (*b, c)), d=1| }
          @b = lambda { |a, (*b, c), d, (*e), (*), **k| }
          @c = lambda { |a, (b, c), *, d:, e: 2, **| }
        ruby

        @a.arity.should == -2
        @b.arity.should == -6
        @c.arity.should == -4
      end

      evaluate <<-ruby do
          @a = lambda { |a, b=1, *c, d, e:, f: 2, **k, &l| }
          @b = lambda { |a, b=1, *c, d:, e:, f: 2, **k, &l| }
          @c = lambda { |a=0, b=1, *c, d, e:, f: 2, **k, &l| }
          @d = lambda { |a=0, b=1, *c, d:, e:, f: 2, **k, &l| }
        ruby

        @a.arity.should == -4
        @b.arity.should == -3
        @c.arity.should == -3
        @d.arity.should == -2
      end
    end
  end

  context "for instances created with proc { || }" do
    context "returns zero" do
      evaluate <<-ruby do
          @a = proc { }
          @b = proc { || }
      ruby

        @a.arity.should == 0
        @b.arity.should == 0
      end

      evaluate <<-ruby do
          @a = proc { |&b| }
      ruby

        @a.arity.should == 0
      end

      evaluate <<-ruby do
          @a = proc { |a=1| }
          @b = proc { |a=1, b=2| }
      ruby

        @a.arity.should == 0
        @b.arity.should == 0
      end

      evaluate <<-ruby do
          @a = proc { |a: 1| }
          @b = proc { |a: 1, b: 2| }
      ruby

        @a.arity.should == 0
        @b.arity.should == 0
      end

      evaluate <<-ruby do
          @a = proc { |**k, &l| }
          @b = proc { |a: 1, b: 2, **k| }
      ruby

        @a.arity.should == 0
        @b.arity.should == 0
      end

      evaluate <<-ruby do
          @a = proc { |a=1, b: 2| }
          @b = proc { |a=1, b: 2| }
      ruby

        @a.arity.should == 0
        @b.arity.should == 0
      end
    end

    context "returns positive values" do
      evaluate <<-ruby do
          @a = proc { |a| }
          @b = proc { |a, b| }
          @c = proc { |a, b, c| }
          @d = proc { |a, b, c, d| }
      ruby

        @a.arity.should == 1
        @b.arity.should == 2
        @c.arity.should == 3
        @d.arity.should == 4
      end

      evaluate <<-ruby do
          @a = proc { |a, b=1| }
          @b = proc { |a, b, c=1, d=2| }
      ruby

        @a.arity.should == 1
        @b.arity.should == 2
      end

      evaluate <<-ruby do
          @a = lambda { |a:| }
          @b = lambda { |a:, b:| }
          @c = lambda { |a: 1, b:, c:, d: 2| }
      ruby

        @a.arity.should == 1
        @b.arity.should == 1
        @c.arity.should == 1
      end

      evaluate <<-ruby do
          @a = proc { |a, b:| }
          @b = proc { |a, b:, &l| }
      ruby

        @a.arity.should == 2
        @b.arity.should == 2
      end

      evaluate <<-ruby do
          @a = proc { |a, b, c:, d: 1| }
          @b = proc { |a, b, c:, d: 1, **k, &l| }
      ruby

        @a.arity.should == 3
        @b.arity.should == 3
      end

      evaluate <<-ruby do
          @a = proc { |(a, (*b, c)), d=1| }
          @b = proc { |a, (*b, c), d, (*e), (*), **k| }
      ruby

        @a.arity.should == 1
        @b.arity.should == 5
      end
    end

    context "returns negative values" do
      evaluate <<-ruby do
          @a = proc { |a=1, *b| }
          @b = proc { |a=1, b=2, *c| }
      ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = proc { |*| }
          @b = proc { |*a| }
      ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = proc { |a, *| }
          @b = proc { |a, *b| }
          @c = proc { |a, b, *c| }
          @d = proc { |a, b, c, *d| }
      ruby

        @a.arity.should == -2
        @b.arity.should == -2
        @c.arity.should == -3
        @d.arity.should == -4
      end

      evaluate <<-ruby do
          @a = proc { |*a, b| }
          @b = proc { |*a, b, c| }
          @c = proc { |*a, b, c, d| }
      ruby

        @a.arity.should == -2
        @b.arity.should == -3
        @c.arity.should == -4
      end

      evaluate <<-ruby do
          @a = proc { |a, *b, c| }
          @b = proc { |a, b, *c, d, e| }
      ruby

        @a.arity.should == -3
        @b.arity.should == -5
      end

      evaluate <<-ruby do
          @a = proc { |a, b=1, c=2, *d, e, f| }
          @b = proc { |a, b, c=1, *d, e, f, g| }
      ruby

        @a.arity.should == -4
        @b.arity.should == -6
      end

      evaluate <<-ruby do
          @a = proc { |*a, b: 1| }
          @b = proc { |a=1, *b, c: 2, &l| }
      ruby

        @a.arity.should == -1
        @b.arity.should == -1
      end

      evaluate <<-ruby do
          @a = proc { |*a, **k| }
      ruby

        @a.arity.should == -1
      end

      evaluate <<-ruby do
          @a = proc { |a=1, *b, c:, d: 2, **k, &l| }
      ruby

        @a.arity.should == -2
      end

      evaluate <<-ruby do
          @a = proc { |a, (b, c), *, d:, e: 2, **| }
      ruby

        @a.arity.should == -4
      end

      evaluate <<-ruby do
          @a = proc { |a, b=1, *c, d, e:, f: 2, **k, &l| }
          @b = proc { |a, b=1, *c, d:, e:, f: 2, **k, &l| }
          @c = proc { |a=0, b=1, *c, d, e:, f: 2, **k, &l| }
          @d = proc { |a=0, b=1, *c, d:, e:, f: 2, **k, &l| }
      ruby

        @a.arity.should == -4
        @b.arity.should == -3
        @c.arity.should == -3
        @d.arity.should == -2
      end
    end
  end
end
