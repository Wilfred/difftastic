require 'erb'
require File.expand_path('../../../spec_helper', __FILE__)

describe "ERB#def_module" do

  it "return unnamed module which has instance method to render eRuby" do
    input = <<'END'
arg1=<%= arg1.inspect %>
arg2=<%= arg2.inspect %>
END
    expected = <<'END'
arg1="foo"
arg2=123
END
    filename = 'example.rhtml'
    #erb = ERB.new(File.read(filename))
    erb = ERB.new(input)
    erb.filename = filename
    MyModule2ForErb = erb.def_module('render(arg1, arg2)')
    MyModule2ForErb.method_defined?(':render')
    class MyClass2ForErb
      include MyModule2ForErb
    end
    MyClass2ForErb.new.render('foo', 123).should == expected
  end

end
