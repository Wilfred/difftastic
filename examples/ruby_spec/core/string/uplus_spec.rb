require File.expand_path('../../../spec_helper', __FILE__)

ruby_version_is "2.3" do
  describe 'String#+@' do
    it 'returns an unfrozen copy of a frozen String' do
      input  = 'foo'.freeze
      output = +input

      output.frozen?.should == false
      output.should == 'foo'
    end

    it 'returns self if the String is not frozen' do
      input  = 'foo'
      output = +input

      output.equal?(input).should == true
    end

    it 'returns mutable copy despite freeze-magic-comment in file' do
      ruby_exe(fixture(__FILE__, "freeze_magic_comment.rb")).should == 'mutable'
    end
  end
end
