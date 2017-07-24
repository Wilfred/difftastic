require 'erb'
require File.expand_path('../../../spec_helper', __FILE__)

describe "ERB#run" do
  # TODO: what is this? why does it not use
  # lambda { ... }.should output
  def _steal_stdout
    orig = $stdout
    s = ''
    def s.write(arg); self << arg.to_s; end
    $stdout = s
    begin
      yield
    ensure
      $stdout = orig
    end
    return s
  end

  it "print the result of compiled ruby code" do
    input = <<END
<ul>
<% for item in list %>
  <li><%= item %>
<% end %>
</ul>
END
    expected = <<END
<ul>

  <li>AAA

  <li>BBB

  <li>CCC

</ul>
END
    erb = ERB.new(input)
    list = %w[AAA BBB CCC]
    actual = _steal_stdout { erb.run(binding) }
    actual.should == expected
  end

  it "share local variables" do
    input = "<% var = 456 %>"
    expected = 456
    var = 123
    _steal_stdout { ERB.new(input).run(binding) }
    var.should == expected
  end

  it "is not able to h() or u() unless including ERB::Util" do
    input = "<%=h '<>' %>"
    lambda {
      _steal_stdout { ERB.new(input).run() }
    }.should raise_error(NameError)
  end

  it "is able to h() or u() if ERB::Util is included" do
    myerb1 = Class.new do
      include ERB::Util
      def main
        input = "<%=h '<>' %>"
        ERB.new(input).run(binding)
      end
    end
    expected = '&lt;&gt;'
    actual = _steal_stdout { myerb1.new.main() }
    actual.should == expected
  end

  it "use TOPLEVEL_BINDING if binding is not passed" do
    myerb2 = Class.new do
      include ERB::Util
      def main1
        #input = "<%= binding.to_s %>"
        input = "<%= _xxx_var_ %>"
        return ERB.new(input).run()
      end
      def main2
        input = "<%=h '<>' %>"
        return ERB.new(input).run()
      end
    end

    eval '_xxx_var_ = 123', TOPLEVEL_BINDING
    expected = '123'
    actual = _steal_stdout { myerb2.new.main1() }
    actual.should == expected

    lambda {
      _steal_stdout { myerb2.new.main2() }
    }.should raise_error(NameError)
  end
end

