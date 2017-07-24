require File.expand_path('../../../../spec_helper', __FILE__)
require 'zlib'
require 'stringio'

describe 'GzipReader#gets' do
  describe 'with "" separator' do
    it 'reads paragraphs skipping newlines' do
      # gz contains "\n\n\n\n\n123\n45\n\n\n\n\nabc\nde\n\n\n\n\n"
      gz = Zlib::GzipReader.new(
        StringIO.new(
          [31, 139, 8, 0, 223, 152, 48, 89, 0, 3, 227, 226, 2, 2, 67, 35,
           99, 46, 19, 83, 16, 139, 43, 49, 41, 153, 43, 37, 21, 204, 4, 0,
           32, 119, 45, 184, 27, 0, 0, 0].pack('C*')
        )
      )

      gz.gets('').should == "123\n45\n\n"
      gz.gets('').should == "abc\nde\n\n"
      gz.eof?.should be_true
    end
  end
end
