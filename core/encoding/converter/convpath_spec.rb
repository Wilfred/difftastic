require File.expand_path('../../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "Encoding::Converter#convpath" do
    before :all do
      @perms = Encoding.name_list.permutation(2).map do |pair|
        Encoding::Converter.new(pair.first, pair.last) rescue nil
      end.compact.map{|ec| ec.convpath}
    end

    it "returns an Array" do
      ec = Encoding::Converter.new('ASCII', 'EUC-JP')
      ec.convpath.should be_an_instance_of(Array)
    end

    it "returns each encoding pair as a sub-Array" do
      ec = Encoding::Converter.new('ASCII', 'EUC-JP')
      ec.convpath.first.should be_an_instance_of(Array)
      ec.convpath.first.size.should == 2
    end

    it "returns each encoding as an Encoding object" do
      ec = Encoding::Converter.new('ASCII', 'EUC-JP')
      ec.convpath.first.first.should be_an_instance_of(Encoding)
      ec.convpath.first.last.should be_an_instance_of(Encoding)
    end

    it "returns multiple encoding pairs when direct conversion is impossible" do
      ec = Encoding::Converter.new('ascii','Big5')
      ec.convpath.size.should == 2
      ec.convpath.first.first.should == Encoding::US_ASCII
      ec.convpath.first.last.should == ec.convpath.last.first
      ec.convpath.last.last.should == Encoding::Big5
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
      ec = Encoding::Converter.new("ISo-8859-1", "EUC-JP", {crlf_newline: true})
      ec.convpath.last.should == "crlf_newline"

      ec = Encoding::Converter.new("ASCII", "UTF-8", {crlf_newline: false})
      ec.convpath.last.should_not == "crlf_newline"
    end
  end
end
