describe :hash_equal, shared: true do
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
    x.should_receive(:hash).and_return(0)
    y = mock('y')
    y.should_receive(:hash).and_return(0)

    { x => 1 }.send(@method, { y => 1 }).should be_false
  end

  it "does not compare keys with different hash codes via eql?" do
    x = mock('x')
    y = mock('y')
    x.should_not_receive(:eql?)
    y.should_not_receive(:eql?)

    x.should_receive(:hash).and_return(0)
    y.should_receive(:hash).and_return(1)

    def x.hash() 0 end
    def y.hash() 1 end

    { x => 1 }.send(@method, { y => 1 }).should be_false
  end

  it "computes equality for recursive hashes" do
    h = {}
    h[:a] = h
    h.send(@method, h[:a]).should be_true
    (h == h[:a]).should be_true
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
