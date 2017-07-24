require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

ruby_version_is '2.4' do
  describe 'Enumerable#uniq' do
    it 'returns an array that contains only unique elements' do
      [0, 1, 2, 3].to_enum.uniq { |n| n.even? }.should == [0, 1]
    end

    context 'when yielded with multiple arguments' do
      before :each do
        @enum = Object.new.to_enum
        class << @enum
          def each
            yield 0, 'foo'
            yield 1, 'FOO'
            yield 2, 'bar'
          end
        end
      end

      ruby_bug '#13669', ''...'2.5' do
        it 'returns all yield arguments as an array' do
          @enum.uniq { |_, label| label.downcase }.should == [[0, 'foo'], [2, 'bar']]
        end
      end
    end
  end
end
