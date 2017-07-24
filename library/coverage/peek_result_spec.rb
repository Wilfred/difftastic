require File.expand_path('../../../spec_helper', __FILE__)
require fixture __FILE__, 'spec_helper'
require 'coverage'

ruby_version_is '2.3' do
  describe 'Coverage.peek_result' do
    before :all do
      @class_file = fixture __FILE__, 'some_class.rb'
      @second_class_file = fixture __FILE__, 'second_class.rb'
    end

    after :each do
      $LOADED_FEATURES.delete(@class_file)
      $LOADED_FEATURES.delete(@second_class_file)
    end

    it 'returns the result so far' do
      Coverage.start
      require @class_file.chomp('.rb')
      result = Coverage.peek_result
      Coverage.result

      result.should == {
        @class_file => [
          nil, nil, 1, nil, nil, 1, nil, nil, 0, nil, nil, nil, nil, nil, nil, nil
        ]
      }
    end

    it 'immediate second call returns same result' do
      Coverage.start
      require @class_file.chomp('.rb')
      result1 = Coverage.peek_result
      result2 = Coverage.peek_result
      Coverage.result

      result2.should == result1
    end

    it 'second call after require returns accumulated result' do
      Coverage.start
      require @class_file.chomp('.rb')
      Coverage.peek_result
      require @second_class_file.chomp('.rb')
      result = Coverage.peek_result
      Coverage.result

      result.should == {
        @class_file => [
          nil, nil, 1, nil, nil, 1, nil, nil, 0, nil, nil, nil, nil, nil, nil, nil
        ],
        @second_class_file => [
          1, 1, 0, nil, nil
        ]
      }
    end

    it 'call right before Coverage.result should give equal result' do
      Coverage.start
      require @class_file.chomp('.rb')
      result1 = Coverage.peek_result
      result2 = Coverage.result

      result1.should == result2
    end
  end
end
