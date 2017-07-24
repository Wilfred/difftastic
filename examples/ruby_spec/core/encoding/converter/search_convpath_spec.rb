require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter.search_convpath" do
    before :all do
      @perms = Encoding.name_list.permutation(2).map do |pair|
        Encoding::Converter.search_convpath(pair.first, pair.last) rescue []
      end
    end

    it "returns an Array" do
      Encoding::Converter.search_convpath('ASCII', 'EUC-JP').\
        should be_an_instance_of(Array)
    end

    it "returns each encoding pair as a sub-Array" do
      cp = Encoding::Converter.search_convpath('ASCII', 'EUC-JP')
      cp.first.should be_an_instance_of(Array)
      cp.first.size.should == 2
    end

    it "returns each encoding as an Encoding object" do
      cp = Encoding::Converter.search_convpath('ASCII', 'EUC-JP')
      cp.first.first.should be_an_instance_of(Encoding)
      cp.first.last.should be_an_instance_of(Encoding)
    end

    it "returns multiple encoding pairs when direct conversion is impossible" do
      cp = Encoding::Converter.search_convpath('ascii','Big5')
      cp.size.should == 2
      cp.first.should == [Encoding::US_ASCII, Encoding::UTF_8]
      cp.last.should == [Encoding::UTF_8, Encoding::Big5]
    end

    it "sets the last element of each pair to the first element of the next" do
      @perms.each do |convpath|
        next if convpath.size == 1
        convpath.each_with_index do |pair, idx|
          break if idx == convpath.size - 1
          pair.last.should == convpath[idx+1].first
        end
      end
    end

    it "only lists a source encoding once" do
      @perms.each do |convpath|
        next if convpath.size < 2
        seen = Hash.new(false)
        convpath.each_with_index do |pair, idx|
          seen.key?(pair.first).should be_false if idx > 0
          seen[pair.first] = true
        end
      end
    end

    it "indicates if crlf_newline conversion would occur" do
      cp = Encoding::Converter.search_convpath(
        "ISo-8859-1", "EUC-JP", {crlf_newline: true})
      cp.last.should == "crlf_newline"

      cp = Encoding::Converter.search_convpath(
        "ASCII", "UTF-8", {crlf_newline: false})
      cp.last.should_not == "crlf_newline"
    end

    it "raises an Encoding::ConverterNotFoundError if no conversion path exists" do
      lambda do
        Encoding::Converter.search_convpath(
          Encoding::ASCII_8BIT, Encoding::Emacs_Mule)
      end.should raise_error(Encoding::ConverterNotFoundError)
    end
  end
end
