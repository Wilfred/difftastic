require File.expand_path('../../../../spec_helper', __FILE__)

describe :symbol_succ, shared: true do
  it "returns a successor" do
    :abcd.send(@method).should == :abce
    :THX1138.send(@method).should == :THX1139
  end

  it "propagates a 'carry'" do
    :"1999zzz".send(@method).should == :"2000aaa"
    :ZZZ9999.send(@method).should == :AAAA0000
  end

  it "increments non-alphanumeric characters when no alphanumeric characters are present" do
    :"<<koala>>".send(@method).should == :"<<koalb>>"
    :"***".send(@method).should == :"**+"
  end
end
