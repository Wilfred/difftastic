require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe "Zlib::GzipWriter#<<" do
  before :each do
    @io = StringIO.new
  end

  it "returns self" do
    Zlib::GzipWriter.wrap @io do |gzio|
      (gzio << "test").should equal(gzio)
    end
  end

  it "needs to be reviewed for spec completeness"
end
