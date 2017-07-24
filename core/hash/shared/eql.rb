describe :hash_eql, shared: true do
  it "does not compare values when keys don't match" do
    value = mock('x')
    value.should_not_receive(:==)
    value.should_not_receive(:eql?)
    { 1 => value }.send(@method, { 2 => value }).should be_false
  end

  it "returns false when the numbers of keys differ without comparing any elements" do
    obj = mock('x')
    h = { obj => obj }

    obj.should_not_receive(:==)
    obj.should_not_receive(:eql?)

    {}.send(@method, h).should be_false
    h.send(@method, {}).should be_false
  end

  it "first compares keys via hash" do
    x = mock('x')
    x.should_receive(:hash).any_number_of_times.and_return(0)
    y = mock('y')
    y.should_receive(:hash).any_number_of_times.and_return(0)

    { x => 1 }.send(@method, { y => 1 }).should be_false
  end

  it "does not compare keys with different hash codes via eql?" do
    x = mock('x')
    y = mock('y')
    x.should_not_receive(:eql?)
    y.should_not_receive(:eql?)

    x.should_receive(:hash).any_number_of_times.and_return(0)
    y.should_receive(:hash).any_number_of_times.and_return(1)

    { x => 1 }.send(@method, { y => 1 }).should be_false
  end

  it "computes equality for recursive hashes" do
    h = {}
    h[:a] = h
    h.send(@method, h[:a]).should be_true
    (h == h[:a]).should be_true
  end

  it "doesn't call to_hash on objects" do
    mock_hash = mock("fake hash")
    def mock_hash.to_hash() {} end
    {}.send(@method, mock_hash).should be_false
  end

  it "computes equality for complex recursive hashes" do
    a, b = {}, {}
    a.merge! self: a, other: b
    b.merge! self: b, other: a
    a.send(@method, b).should be_true # they both have the same structure!

    c = {}
    c.merge! other: c, self: c
    c.send(@method, a).should be_true # subtle, but they both have the same structure!
    a[:delta] = c[:delta] = a
    c.send(@method, a).should be_false # not quite the same structure, as a[:other][:delta] = nil
    c[:delta] = 42
    c.send(@method, a).should be_false
    a[:delta] = 42
    c.send(@method, a).should be_false
    b[:delta] = 42
    c.send(@method, a).should be_true
  end

  it "computes equality for recursive hashes & arrays" do
    x, y, z = [], [], []
    a, b, c = {foo: x, bar: 42}, {foo: y, bar: 42}, {foo: z, bar: 42}
    x << a
    y << c
    z << b
    b.send(@method, c).should be_true # they clearly have the same structure!
    y.send(@method, z).should be_true
    a.send(@method, b).should be_true # subtle, but they both have the same structure!
    x.send(@method, y).should be_true
    y << x
    y.send(@method, z).should be_false
    z << x
    y.send(@method, z).should be_true

    a[:foo], a[:bar] = a[:bar], a[:foo]
    a.send(@method, b).should be_false
    b[:bar] = b[:foo]
    b.send(@method, c).should be_false
  end
end

describe :hash_eql_additional, shared: true do
  it "compares values when keys match" do
    x = mock('x')
    y = mock('y')
    def x.==(o) false end
    def y.==(o) false end
    def x.eql?(o) false end
    def y.eql?(o) false end
    { 1 => x }.send(@method, { 1 => y }).should be_false

    x = mock('x')
    y = mock('y')
    def x.==(o) true end
    def y.==(o) true end
    def x.eql?(o) true end
    def y.eql?(o) true end
    { 1 => x }.send(@method, { 1 => y }).should be_true
  end

  it "compares keys with eql? semantics" do
    { 1.0 => "x" }.send(@method, { 1.0 => "x" }).should be_true
    { 1.0 => "x" }.send(@method, { 1.0 => "x" }).should be_true
    { 1 => "x" }.send(@method, { 1.0 => "x" }).should be_false
    { 1.0 => "x" }.send(@method, { 1 => "x" }).should be_false
  end

  it "returns true iff other Hash has the same number of keys and each key-value pair matches" do
    a = { a: 5 }
    b = {}
    a.send(@method, b).should be_false

    b[:a] = 5
    a.send(@method, b).should be_true

    not_supported_on :opal do
      c = { "a" => 5 }
      a.send(@method, c).should be_false
    end

    c = { "A" => 5 }
    a.send(@method, c).should be_false

    c = { a: 6 }
    a.send(@method, c).should be_false
  end

  it "does not call to_hash on hash subclasses" do
    { 5 => 6 }.send(@method, HashSpecs::ToHashHash[5 => 6]).should be_true
  end

  it "ignores hash class differences" do
    h = { 1 => 2, 3 => 4 }
    HashSpecs::MyHash[h].send(@method, h).should be_true
    HashSpecs::MyHash[h].send(@method, HashSpecs::MyHash[h]).should be_true
    h.send(@method, HashSpecs::MyHash[h]).should be_true
  end

  # Why isn't this true of eql? too ?
  it "compares keys with matching hash codes via eql?" do
    a = Array.new(2) do
      obj = mock('0')
      obj.should_receive(:hash).at_least(1).and_return(0)

      # It's undefined whether the impl does a[0].eql?(a[1]) or
      # a[1].eql?(a[0]) so we taint both.
      def obj.eql?(o)
        return true if self.equal?(o)
        taint
        o.taint
        false
      end

      obj
    end

    { a[0] => 1 }.send(@method, { a[1] => 1 }).should be_false
    a[0].tainted?.should be_true
    a[1].tainted?.should be_true

    a = Array.new(2) do
      obj = mock('0')
      obj.should_receive(:hash).at_least(1).and_return(0)

      def obj.eql?(o)
        # It's undefined whether the impl does a[0].send(@method, a[1]) or
        # a[1].send(@method, a[0]) so we taint both.
        taint
        o.taint
        true
      end

      obj
    end

    { a[0] => 1 }.send(@method, { a[1] => 1 }).should be_true
    a[0].tainted?.should be_true
    a[1].tainted?.should be_true
  end

  it "compares the values in self to values in other hash" do
    l_val = mock("left")
    r_val = mock("right")

    l_val.should_receive(:eql?).with(r_val).and_return(true)

    { 1 => l_val }.eql?({ 1 => r_val }).should be_true
  end
end

describe :hash_eql_additional_more, shared: true do
  it "returns true if other Hash has the same number of keys and each key-value pair matches, even though the default-value are not same" do
    Hash.new(5).send(@method, Hash.new(1)).should be_true
    Hash.new {|h, k| 1}.send(@method, Hash.new {}).should be_true
    Hash.new {|h, k| 1}.send(@method, Hash.new(2)).should be_true

    d = Hash.new {|h, k| 1}
    e = Hash.new {}
    d[1] = 2
    e[1] = 2
    d.send(@method, e).should be_true
  end
end
