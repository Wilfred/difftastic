require 'erb'
require File.expand_path('../../../spec_helper', __FILE__)

describe "ERB#src" do

  it "returns the compiled ruby code evaluated to a String" do
    # note that what concrete code is emitted is not guaranteed.

    input = <<'END'
<ul>
<% for item in list %>
  <li><%= item %>
<% end %>
</ul>
END

    expected = <<'END'
<ul>

  <li>AAA

  <li>BBB

  <li>CCC

</ul>
END

    list = %w[AAA BBB CCC]
    eval(ERB.new(input).src).should == expected
  end

end
