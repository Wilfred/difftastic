require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Method#to_proc" do
  before :each do
    ScratchPad.record []

    @m = MethodSpecs::Methods.new
    @meth = @m.method(:foo)
  end

  it "returns a Proc object corresponding to the method" do
    @meth.to_proc.kind_of?(Proc).should == true
  end

  it "returns a Proc which does not depends on the value of self" do
    3.instance_exec(4, &5.method(:+)).should == 9
  end


  it "returns a Proc object with the correct arity" do
    # This may seem redundant but this bug has cropped up in jruby, mri and yarv.
    # http://jira.codehaus.org/browse/JRUBY-124
    [ :zero, :one_req, :two_req,
      :zero_with_block, :one_req_with_block, :two_req_with_block,
      :one_opt, :one_req_one_opt, :one_req_two_opt, :two_req_one_opt,
      :one_opt_with_block, :one_req_one_opt_with_block, :one_req_two_opt_with_block, :two_req_one_opt_with_block,
      :zero_with_splat, :one_req_with_splat, :two_req_with_splat,
      :one_req_one_opt_with_splat, :one_req_two_opt_with_splat, :two_req_one_opt_with_splat,
      :zero_with_splat_and_block, :one_req_with_splat_and_block, :two_req_with_splat_and_block,
      :one_req_one_opt_with_splat_and_block, :one_req_two_opt_with_splat_and_block, :two_req_one_opt_with_splat_and_block
    ].each do |m|
      @m.method(m).to_proc.arity.should == @m.method(m).arity
    end
  end

  it "returns a proc that can be used by define_method" do
    x = 'test'
    to_s = class << x
      define_method :foo, method(:to_s).to_proc
      to_s
    end

    x.foo.should == to_s
  end

  it "returns a proc that can be yielded to" do
    x = Object.new
    def x.foo(*a); a; end
    def x.bar; yield; end
    def x.baz(*a); yield(*a); end

    m = x.method :foo
    x.bar(&m).should == []
    x.baz(1,2,3,&m).should == [1,2,3]
  end

  # #5926
  it "returns a proc that can receive a block" do
    x = Object.new
    def x.foo; yield 'bar'; end

    m = x.method :foo
    result = nil
    m.to_proc.call {|val| result = val}
    result.should == 'bar'
  end

  it "can be called directly and not unwrap arguments like a block" do
    obj = MethodSpecs::ToProcBeta.new
    obj.to_proc.call([1]).should == [1]
  end

  it "should correct handle arguments (unwrap)" do
    obj = MethodSpecs::ToProcBeta.new

    array = [[1]]
    array.each(&obj)
    ScratchPad.recorded.should == [[1]]
  end

  it "executes method with whole array (one argument)" do
    obj = MethodSpecs::ToProcBeta.new

    array = [[1, 2]]
    array.each(&obj)
    ScratchPad.recorded.should == [[1, 2]]
  end
end
