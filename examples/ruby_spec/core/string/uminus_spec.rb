require File.expand_path('../../../spec_helper', __FILE__)

ruby_version_is "2.3" do
  describe 'String#-@' do
    it 'returns self if the String is frozen' do
      input  = 'foo'.freeze
      output = -input

      output.equal?(input).should == true
      output.frozen?.should == true
    end

    it 'returns a frozen copy if the String is not frozen' do
      input  = 'foo'
      output = -input

      output.frozen?.should == true
      output.should == 'foo'
    end
  end
end
