require File.expand_path('../../../spec_helper', __FILE__)
require 'csv'

describe "CSV.parse" do

  it "parses '' into []" do
    result = CSV.parse ''
    result.should be_kind_of(Array)
    result.should == []
  end

  it "parses '\n' into [[]]" do
    result = CSV.parse "\n"
    result.should == [[]]
  end

  it "parses 'foo' into [['foo']]" do
    result = CSV.parse 'foo'
    result.should == [['foo']]
  end

  it "parses 'foo,bar,baz' into [['foo','bar','baz']]" do
    result = CSV.parse 'foo,bar,baz'
    result.should == [['foo','bar','baz']]
  end

  it "parses 'foo,baz' into [[foo,nil,baz]]" do
    result = CSV.parse 'foo,,baz'
    result.should == [['foo',nil,'baz']]
  end

  it "parses '\nfoo' into [[],['foo']]" do
    result = CSV.parse "\nfoo"
    result.should == [[],['foo']]
  end

  it "parses 'foo\n' into [['foo']]" do
    result = CSV.parse "foo\n"
    result.should == [['foo']]
  end

  it "parses 'foo\nbar' into [['foo'],['bar']]" do
    result = CSV.parse "foo\nbar"
    result.should == [['foo'],['bar']]
  end

  it "parses 'foo,bar\nbaz,quz' into [['foo','bar'],['baz','quz']]" do
    result = CSV.parse "foo,bar\nbaz,quz"
    result.should == [['foo','bar'],['baz','quz']]
  end

  it "parses 'foo,bar'\nbaz' into [['foo','bar'],['baz']]" do
    result = CSV.parse "foo,bar\nbaz"
    result.should == [['foo','bar'],['baz']]
  end

  it "parses 'foo\nbar,baz' into [['foo'],['bar','baz']]" do
    result = CSV.parse "foo\nbar,baz"
    result.should == [['foo'],['bar','baz']]
  end

  it "parses '\n\nbar' into [[],[],'bar']]" do
    result = CSV.parse "\n\nbar"
    result.should == [[],[],['bar']]
  end

  it "parses 'foo' into [['foo']] with a separator of ;" do
    result = CSV.parse "foo", col_sep: ?;
    result.should == [['foo']]
  end

  it "parses 'foo;bar' into [['foo','bar']] with a separator of ;" do
    result = CSV.parse "foo;bar", col_sep: ?;
    result.should == [['foo','bar']]
  end

  it "parses 'foo;bar\nbaz;quz' into [['foo','bar'],['baz','quz']] with a separator of ;" do
    result = CSV.parse "foo;bar\nbaz;quz", col_sep: ?;
    result.should == [['foo','bar'],['baz','quz']]
  end
end
