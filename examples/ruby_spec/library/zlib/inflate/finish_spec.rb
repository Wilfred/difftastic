require 'zlib'

describe "Zlib::Inflate#finish" do

  before do
    @zeros    = Zlib::Deflate.deflate("0" * 100_000)
    @inflator = Zlib::Inflate.new
    @chunks   = []

    @inflator.inflate(@zeros) do |chunk|
      @chunks << chunk
      break
    end

    @inflator.finish do |chunk|
      @chunks << chunk
    end
  end

  it "inflates chunked data" do
    @chunks.map { |chunk| chunk.length }.should == [16384, 16384, 16384, 16384, 16384, 16384, 1696]
  end

  it "each chunk should have the same prefix" do
    @chunks.all? { |chunk| chunk =~ /\A0+\z/ }.should be_true
  end

end
