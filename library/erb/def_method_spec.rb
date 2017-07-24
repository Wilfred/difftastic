require 'erb'
require File.expand_path('../../../spec_helper', __FILE__)

describe "ERB#def_method" do

  it "define module's instance method to render eRuby file" do
    input = <<'END'
arg1=<%= arg1.inspect %>
arg2=<%= arg2.inspect %>
END
    expected = <<'END'
arg1="foo"
arg2=123
END
    #
    filename = 'example.rhtml'   # 'arg1' and 'arg2' are used in example.rhtml
    #erb = ERB.new(File.read(filename))
    erb = ERB.new(input)
    class MyClass0ForErb
    end
    erb.def_method(MyClass0ForErb, 'render(arg1, arg2)', filename)
    MyClass0ForErb.method_defined?(:render)
    MyClass0ForErb.new.render('foo', 123).should == expected
  end

end
