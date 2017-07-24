require 'erb'
require File.expand_path('../../../spec_helper', __FILE__)

describe "ERB.new" do
  before :all do
    @eruby_str = <<'END'
<ul>
<% list = [1,2,3] %>
<% for item in list %>
<% if item %>
<li><%= item %></li>
<% end %>
<% end %>
</ul>
END

    @eruby_str2 = <<'END'
<ul>
% list = [1,2,3]
%for item in list
%  if item
  <li><%= item %>
  <% end %>
<% end %>
</ul>
%%%
END

  end

  it "compiles eRuby script into ruby code when trim mode is 0 or not specified" do
    expected = "<ul>\n\n\n\n<li>1</li>\n\n\n\n<li>2</li>\n\n\n\n<li>3</li>\n\n\n</ul>\n"
    [0, '', nil].each do |trim_mode|
      ERB.new(@eruby_str, nil, trim_mode).result.should == expected
    end
  end

  it "removes '\n' when trim_mode is 1 or '>'" do
    expected = "<ul>\n<li>1</li>\n<li>2</li>\n<li>3</li>\n</ul>\n"
    [1, '>'].each do |trim_mode|
      ERB.new(@eruby_str, nil, trim_mode).result.should == expected
    end
  end

  it "removes spaces at beginning of line and '\n' when trim_mode is 2 or '<>'" do
    expected = "<ul>\n<li>1</li>\n<li>2</li>\n<li>3</li>\n</ul>\n"
    [2, '<>'].each do |trim_mode|
      ERB.new(@eruby_str, nil, trim_mode).result.should == expected
    end
  end

  it "removes spaces around '<%- -%>' when trim_mode is '-'" do
    expected = "<ul>\n  <li>1  <li>2  <li>3</ul>\n"
    input = <<'END'
<ul>
<%- for item in [1,2,3] -%>
  <%- if item -%>
  <li><%= item -%>
  <%- end -%>
<%- end -%>
</ul>
END

    ERB.new(input, nil, '-').result.should == expected
  end


  it "not support '<%-= expr %> even when trim_mode is '-'" do

    input = <<'END'
<p>
  <%= expr -%>
  <%-= expr -%>
</p>
END

    lambda { ERB.new(input, nil, '-').result }.should raise_error
  end

  it "regards lines starting with '%' as '<% ... %>' when trim_mode is '%'" do
    expected = "<ul>\n  <li>1\n  \n  <li>2\n  \n  <li>3\n  \n\n</ul>\n%%\n"
    ERB.new(@eruby_str2, nil, "%").result.should == expected
  end
  it "regards lines starting with '%' as '<% ... %>' and remove \"\\n\" when trim_mode is '%>'" do
    expected = "<ul>\n  <li>1    <li>2    <li>3  </ul>\n%%\n"
    ERB.new(@eruby_str2, nil, '%>').result.should == expected
  end


  it "regard lines starting with '%' as '<% ... %>' and remove \"\\n\" when trim_mode is '%<>'" do
    expected = "<ul>\n  <li>1\n  \n  <li>2\n  \n  <li>3\n  \n</ul>\n%%\n"
    ERB.new(@eruby_str2, nil, '%<>').result.should == expected
  end


  it "regard lines starting with '%' as '<% ... %>' and spaces around '<%- -%>' when trim_mode is '%-'" do
    expected = "<ul>\n<li>1</li>\n<li>2</li>\n</ul>\n%%\n"
    input = <<'END'
<ul>
%list = [1,2]
%for item in list
<li><%= item %></li>
<% end %></ul>
%%%
END

    ERB.new(input, nil, '%-').result.should == expected
  end

  it "changes '_erbout' variable name in the produced source" do
    input = @eruby_str
    match_erbout = ERB.new(input, nil, nil).src
    match_buf = ERB.new(input, nil, nil, 'buf').src
    match_erbout.gsub("_erbout", "buf").should == match_buf
  end


  it "ignores '<%# ... %>'" do
    input = <<'END'
<%# for item in list %>
<b><%#= item %></b>
<%# end %>
END
    ERB.new(input).result.should == "\n<b></b>\n\n"
    ERB.new(input, nil, '<>').result.should == "<b></b>\n"
  end

  it "forget local variables defined previous one" do
    ERB.new(@eruby_str).result
    lambda{ ERB.new("<%= list %>").result }.should raise_error(NameError)
  end
end
