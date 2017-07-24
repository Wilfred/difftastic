describe :string_unpack_string, shared: true do
  it "returns an empty string if the input is empty" do
    "".unpack(unpack_format).should == [""]
  end

  it "returns empty strings for repeated formats if the input is empty" do
    "".unpack(unpack_format(nil, 3)).should == ["", "", ""]
  end

  it "returns an empty string and does not decode any bytes when the count modifier is zero" do
    "abc".unpack(unpack_format(0)+unpack_format).should == ["", "a"]
  end

  it "implicitly has a count of one when no count is specified" do
    "abc".unpack(unpack_format).should == ["a"]
  end

  it "decodes the number of bytes specified by the count modifier" do
    "abc".unpack(unpack_format(3)).should == ["abc"]
  end

  it "decodes the number of bytes specified by the count modifier including whitespace bytes" do
    [ ["a bc",  ["a b", "c"]],
      ["a\fbc", ["a\fb", "c"]],
      ["a\nbc", ["a\nb", "c"]],
      ["a\rbc", ["a\rb", "c"]],
      ["a\tbc", ["a\tb", "c"]],
      ["a\vbc", ["a\vb", "c"]]
    ].should be_computed_by(:unpack, unpack_format(3)+unpack_format)
  end

  it "decodes past whitespace bytes when passed the '*' modifier" do
    [ ["a b c",    ["a b c"]],
      ["a\fb c",   ["a\fb c"]],
      ["a\nb c",   ["a\nb c"]],
      ["a\rb c",   ["a\rb c"]],
      ["a\tb c",   ["a\tb c"]],
      ["a\vb c",   ["a\vb c"]],
    ].should be_computed_by(:unpack, unpack_format("*"))
  end
end

describe :string_unpack_Aa, shared: true do
  it "decodes the number of bytes specified by the count modifier including NULL bytes" do
    "a\x00bc".unpack(unpack_format(3)+unpack_format).should == ["a\x00b", "c"]
  end

  it "decodes past NULL bytes when passed the '*' modifier" do
    "a\x00b c".unpack(unpack_format("*")).should == ["a\x00b c"]
  end
end
