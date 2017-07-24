require File.expand_path('../../../spec_helper', __FILE__)

describe "Range.new" do
  it "constructs a range using the given start and end" do
    range = Range.new('a', 'c')
    range.should == ('a'..'c')

    range.first.should == 'a'
    range.last.should == 'c'
  end

  it "includes the end object when the third parameter is omitted or false" do
    Range.new('a', 'c').to_a.should == ['a', 'b', 'c']
    Range.new(1, 3).to_a.should == [1, 2, 3]

    Range.new('a', 'c', false).to_a.should == ['a', 'b', 'c']
    Range.new(1, 3, false).to_a.should == [1, 2, 3]

    Range.new('a', 'c', true).to_a.should == ['a', 'b']
    Range.new(1, 3, 1).to_a.should == [1, 2]

    Range.new(1, 3, mock('[1,2]')).to_a.should == [1, 2]
    Range.new(1, 3, :test).to_a.should == [1, 2]
  end

  it "raises an ArgumentError when the given start and end can't be compared by using #<=>" do
    lambda { Range.new(1, mock('x'))         }.should raise_error(ArgumentError)
    lambda { Range.new(mock('x'), mock('y')) }.should raise_error(ArgumentError)

    b = mock('x')
    (a = mock('nil')).should_receive(:<=>).with(b).and_return(nil)
    lambda { Range.new(a, b) }.should raise_error(ArgumentError)
  end
end
