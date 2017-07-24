require File.expand_path('../shared/chars', __FILE__)
require File.expand_path('../shared/each_char_without_block', __FILE__)

describe "String#chars" do
  it_behaves_like(:string_chars, :chars)

  it "returns an array when no block given" do
    ary = "hello".send(@method)
    ary.should == ['h', 'e', 'l', 'l', 'o']
  end
end
