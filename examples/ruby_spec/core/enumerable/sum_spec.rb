require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

ruby_version_is '2.4' do
  describe 'Enumerable#sum' do
    before :each do
      @enum = Object.new.to_enum
      class << @enum
        def each
          yield 0
          yield(-1)
          yield 2
          yield 2/3r
        end
      end
    end

    it 'returns amount of the elements with taking an argument as the initial value' do
      @enum.sum(10).should == 35/3r
    end

    it 'gives 0 as a default argument' do
      @enum.sum.should == 5/3r
    end

    it 'takes a block to transform the elements' do
      @enum.sum { |element| element * 2 }.should == 10/3r
    end
  end
end
