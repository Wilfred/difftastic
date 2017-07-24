require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../fixtures/classes', __FILE__)

describe "Class#to_s" do
  it 'regular class returns same name as Module#to_s' do
    String.to_s.should == 'String'
  end

  describe 'singleton class' do
    it 'for modules includes module name' do
      CoreClassSpecs.singleton_class.to_s.should == '#<Class:CoreClassSpecs>'
    end

    it 'for classes includes class name' do
      CoreClassSpecs::Record.singleton_class.to_s.should == '#<Class:CoreClassSpecs::Record>'
    end

    it 'for objects includes class name and object ID' do
      obj = CoreClassSpecs::Record.new
      obj.singleton_class.to_s.should =~ /#<Class:#<CoreClassSpecs::Record:0x[0-9a-f]+>>/
    end
  end
end
