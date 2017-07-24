describe :enumerable_include, shared: true do
  it "returns true if any element == argument for numbers" do
    class EnumerableSpecIncludeP; def ==(obj) obj == 5; end; end

    elements = (0..5).to_a
    EnumerableSpecs::Numerous.new(*elements).send(@method,5).should == true
    EnumerableSpecs::Numerous.new(*elements).send(@method,10).should == false
    EnumerableSpecs::Numerous.new(*elements).send(@method,EnumerableSpecIncludeP.new).should == true
  end

  it "returns true if any element == argument for other objects" do
    class EnumerableSpecIncludeP11; def ==(obj); obj == '11'; end; end

    elements = ('0'..'5').to_a + [EnumerableSpecIncludeP11.new]
    EnumerableSpecs::Numerous.new(*elements).send(@method,'5').should == true
    EnumerableSpecs::Numerous.new(*elements).send(@method,'10').should == false
    EnumerableSpecs::Numerous.new(*elements).send(@method,EnumerableSpecIncludeP11.new).should == true
    EnumerableSpecs::Numerous.new(*elements).send(@method,'11').should == true
  end


  it "returns true if any member of enum equals obj when == compare different classes (legacy rubycon)" do
    # equality is tested with ==
    EnumerableSpecs::Numerous.new(2,4,6,8,10).send(@method, 2.0).should == true
    EnumerableSpecs::Numerous.new(2,4,[6,8],10).send(@method, [6, 8]).should == true
    EnumerableSpecs::Numerous.new(2,4,[6,8],10).send(@method, [6.0, 8.0]).should == true
  end

  it "gathers whole arrays as elements when each yields multiple" do
    multi = EnumerableSpecs::YieldsMulti.new
    multi.send(@method, [1,2]).should be_true
  end

end
