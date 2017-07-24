require File.expand_path('../../../../spec_helper', __FILE__)
require 'stringio'
require 'zlib'

describe 'GzipReader#readpartial' do
  before :each do
    @data = '12345abcde'
    @zip = [31, 139, 8, 0, 44, 220, 209, 71, 0, 3, 51, 52, 50, 54, 49, 77,
            76, 74, 78, 73, 5, 0, 157, 5, 0, 36, 10, 0, 0, 0].pack('C*')
    @io = StringIO.new(@zip)
  end

  it 'accepts nil buffer' do
    gz = Zlib::GzipReader.new(@io)
    gz.readpartial(5, nil).should == '12345'
  end
end
