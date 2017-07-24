require 'erb'
require File.expand_path('../../../spec_helper', __FILE__)

describe "ERB#def_class" do

  it "return an unnamed class which has instance method to render eRuby script" do
    input = <<'END'
@arg1=<%=@arg1.inspect%>
@arg2=<%=@arg2.inspect%>
END
    expected = <<'END'
@arg1="foo"
@arg2=123
END
    class MyClass1ForErb_
      def initialize(arg1, arg2)
        @arg1 = arg1;  @arg2 = arg2
      end
    end
    filename = 'example.rhtml'
    #erb = ERB.new(File.read(filename))
    erb = ERB.new(input)
    erb.filename = filename
    MyClass1ForErb = erb.def_class(MyClass1ForErb_, 'render()')
    MyClass1ForErb.method_defined?(:render).should == true
    MyClass1ForErb.new('foo', 123).render().should == expected
  end

end
