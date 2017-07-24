require File.expand_path('../../../../spec_helper', __FILE__)

describe "Encoding::Converter#inspect" do
  it "includes the source and destination encodings in the return value" do
    source = Encoding::UTF_8
    destination = Encoding::UTF_16LE

    output = "#<Encoding::Converter: #{source.name} to #{destination.name}>"

    x = Encoding::Converter.new(source, destination)
    x.inspect.should == output
  end
end
