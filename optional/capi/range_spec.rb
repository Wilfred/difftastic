require File.expand_path('../spec_helper', __FILE__)

load_extension("range")

describe "C-API Range function" do
  before :each do
    @s = CApiRangeSpecs.new
  end

  describe "rb_range_new" do
    it "constructs a range using the given start and end" do
      range = @s.rb_range_new('a', 'c')
      range.should == ('a'..'c')

      range.first.should == 'a'
      range.last.should == 'c'
    end

    it "includes the end object when the third parameter is omitted or false" do
      @s.rb_range_new('a', 'c').to_a.should == ['a', 'b', 'c']
      @s.rb_range_new(1, 3).to_a.should == [1, 2, 3]

      @s.rb_range_new('a', 'c', false).to_a.should == ['a', 'b', 'c']
      @s.rb_range_new(1, 3, false).to_a.should == [1, 2, 3]

      @s.rb_range_new('a', 'c', true).to_a.should == ['a', 'b']
      @s.rb_range_new(1, 3, 1).to_a.should == [1, 2]

      @s.rb_range_new(1, 3, mock('[1,2]')).to_a.should == [1, 2]
      @s.rb_range_new(1, 3, :test).to_a.should == [1, 2]
    end

    it "raises an ArgumentError when the given start and end can't be compared by using #<=>" do
      lambda { @s.rb_range_new(1, mock('x'))         }.should raise_error(ArgumentError)
      lambda { @s.rb_range_new(mock('x'), mock('y')) }.should raise_error(ArgumentError)
    end
  end

  describe "rb_range_values" do
    it "stores the range properties" do
      beg, fin, excl = @s.rb_range_values(10..20)
      beg.should == 10
      fin.should == 20
      excl.should be_false
    end

    it "stores the range properties of non-Range object" do
      range_like = mock('range')

      def range_like.begin
        10
      end

      def range_like.end
        20
      end

      def range_like.exclude_end?
        false
      end

      beg, fin, excl = @s.rb_range_values(range_like)
      beg.should == 10
      fin.should == 20
      excl.should be_false
    end
  end
end
