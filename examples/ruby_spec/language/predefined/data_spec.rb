require File.expand_path('../../../spec_helper', __FILE__)

describe "The DATA constant" do
  it "exists when the main script contains __END__" do
    ruby_exe(fixture(__FILE__, "data1.rb")).chomp.should == "true"
  end

  it "does not exist when the main script contains no __END__" do
    ruby_exe("puts Object.const_defined?(:DATA)").chomp.should == 'false'
  end

  it "does not exist when an included file has a __END__" do
    ruby_exe(fixture(__FILE__, "data2.rb")).chomp.should == "false"
  end

  it "does not change when an included files also has a __END__" do
    ruby_exe(fixture(__FILE__, "data3.rb")).chomp.should == "data 3"
  end

  it "is included in an otherwise empty file" do
    ap = fixture(__FILE__, "print_data.rb")
    str = ruby_exe(fixture(__FILE__, "data_only.rb"), options: "-r#{ap}")
    str.chomp.should == "data only"
  end

  it "rewinds to the head of the main script" do
    ruby_exe(fixture(__FILE__, "data5.rb")).chomp.should == "DATA.rewind"
  end
end
