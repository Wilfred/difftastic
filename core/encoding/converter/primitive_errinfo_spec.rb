# -*- encoding: binary -*-
require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter#primitive_errinfo" do
    it "returns [:source_buffer_empty,nil,nil,nil,nil] when no conversion has been attempted" do
      ec = Encoding::Converter.new('ascii','utf-8')
      ec.primitive_errinfo.should == [:source_buffer_empty, nil, nil, nil, nil]
    end

    it "returns [:finished,nil,nil,nil,nil] when #primitive_convert last returned :finished" do
      ec = Encoding::Converter.new('ascii','utf-8')
      ec.primitive_convert("a","").should == :finished
      ec.primitive_errinfo.should == [:finished, nil, nil, nil, nil]
    end

    it "returns [:source_buffer_empty,nil,nil,nil, nil] when #convert last succeeded" do
      ec = Encoding::Converter.new('ascii','utf-8')
      ec.convert("a".force_encoding('ascii')).should == "a".\
        force_encoding('utf-8')
      ec.primitive_errinfo.should == [:source_buffer_empty, nil, nil, nil, nil]
    end

    it "returns [:destination_buffer_full,nil,nil,nil,nil] when #primitive_convert last returned :destination_buffer_full" do
      ec = Encoding::Converter.new("utf-8", "iso-2022-jp")
      ec.primitive_convert("\u{9999}", "", 0, 0, partial_input: false) \
        .should == :destination_buffer_full
      ec.primitive_errinfo.should == [:destination_buffer_full, nil, nil, nil, nil]
    end

    it "returns the status of the last primitive conversion, even if it was successful and the previous one wasn't" do
      ec = Encoding::Converter.new("utf-8", "iso-8859-1")
      ec.primitive_convert("\xf1abcd","").should == :invalid_byte_sequence
      ec.primitive_convert("glark".force_encoding('utf-8'),"").should == :finished
      ec.primitive_errinfo.should == [:finished, nil, nil, nil, nil]
    end

    it "returns the state, source encoding, target encoding, and the erroneous bytes when #primitive_convert last returned :undefined_conversion" do
      ec = Encoding::Converter.new("utf-8", "iso-8859-1")
      ec.primitive_convert("\u{9876}","").should == :undefined_conversion
      ec.primitive_errinfo.should ==
        [:undefined_conversion, "UTF-8", "ISO-8859-1", "\xE9\xA1\xB6", ""]
    end

    it "returns the state, source encoding, target encoding, and erroneous bytes when #primitive_convert last returned :incomplete_input" do
      ec = Encoding::Converter.new("EUC-JP", "ISO-8859-1")
      ec.primitive_convert("\xa4", "", nil, 10).should == :incomplete_input
      ec.primitive_errinfo.should == [:incomplete_input, "EUC-JP", "UTF-8", "\xA4", ""]
    end

    it "returns the state, source encoding, target encoding, erroneous bytes, and the read-again bytes when #primitive_convert last returned :invalid_byte_sequence" do
      ec = Encoding::Converter.new("utf-8", "iso-8859-1")
      ec.primitive_convert("\xf1abcd","").should == :invalid_byte_sequence
      ec.primitive_errinfo.should ==
        [:invalid_byte_sequence, "UTF-8", "ISO-8859-1", "\xF1", "a"]
    end

    it "returns the state, source encoding, target encoding, erroneous bytes, and the read-again bytes when #convert last raised InvalidByteSequenceError" do
      ec = Encoding::Converter.new("utf-8", "iso-8859-1")
      lambda { ec.convert("\xf1abcd") }.should raise_error(Encoding::InvalidByteSequenceError)
      ec.primitive_errinfo.should ==
        [:invalid_byte_sequence, "UTF-8", "ISO-8859-1", "\xF1", "a"]
    end

    it "returns the state, source encoding, target encoding, erroneous bytes, and the read-again bytes when #finish last raised InvalidByteSequenceError" do
      ec = Encoding::Converter.new("EUC-JP", "ISO-8859-1")
      ec.convert("\xa4")
      lambda { ec.finish }.should raise_error(Encoding::InvalidByteSequenceError)
      ec.primitive_errinfo.should == [:incomplete_input, "EUC-JP", "UTF-8", "\xA4", ""]
    end
  end
end
