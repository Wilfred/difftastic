# -*- encoding: utf-8 -*-
require File.expand_path('../../../../spec_helper', __FILE__)
require File.expand_path('../../fixtures/classes', __FILE__)

describe :string_each_char_without_block, shared: true do
  describe "when no block is given" do
    it "returns an enumerator" do
      enum = "hello".send(@method)
      enum.should be_an_instance_of(Enumerator)
      enum.to_a.should == ['h', 'e', 'l', 'l', 'o']
    end

    describe "returned enumerator" do
      describe "size" do
        it "should return the size of the string" do
          str = "hello"
          str.send(@method).size.should == str.size
          str = "ola"
          str.send(@method).size.should == str.size
          str = "\303\207\342\210\202\303\251\306\222g"
          str.send(@method).size.should == str.size
        end
      end
    end
  end
end
