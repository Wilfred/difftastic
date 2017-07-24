require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe "String#valid_encoding?" do
    it "returns true if the String's encoding is valid" do
      "a".valid_encoding?.should be_true
      "\u{8365}\u{221}".valid_encoding?.should be_true
    end

    it "returns true if self is valid in the current encoding and other encodings" do
      str = "\x77"
      str.force_encoding('utf-8').valid_encoding?.should be_true
      str.force_encoding('ascii-8bit').valid_encoding?.should be_true
    end

    it "returns true for all encodings self is valid in" do
      str = "\u{6754}"
      str.force_encoding('ASCII-8BIT').valid_encoding?.should be_true
      str.force_encoding('UTF-8').valid_encoding?.should be_true
      str.force_encoding('US-ASCII').valid_encoding?.should be_false
      str.force_encoding('Big5').valid_encoding?.should be_false
      str.force_encoding('CP949').valid_encoding?.should be_false
      str.force_encoding('Emacs-Mule').valid_encoding?.should be_false
      str.force_encoding('EUC-JP').valid_encoding?.should be_false
      str.force_encoding('EUC-KR').valid_encoding?.should be_false
      str.force_encoding('EUC-TW').valid_encoding?.should be_false
      str.force_encoding('GB18030').valid_encoding?.should be_false
      str.force_encoding('GBK').valid_encoding?.should be_false
      str.force_encoding('ISO-8859-1').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-2').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-3').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-4').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-5').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-6').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-7').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-8').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-9').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-10').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-11').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-13').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-14').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-15').valid_encoding?.should be_true
      str.force_encoding('ISO-8859-16').valid_encoding?.should be_true
      str.force_encoding('KOI8-R').valid_encoding?.should be_true
      str.force_encoding('KOI8-U').valid_encoding?.should be_true
      str.force_encoding('Shift_JIS').valid_encoding?.should be_false
      str.force_encoding('UTF-16BE').valid_encoding?.should be_false
      str.force_encoding('UTF-16LE').valid_encoding?.should be_false
      str.force_encoding('UTF-32BE').valid_encoding?.should be_false
      str.force_encoding('UTF-32LE').valid_encoding?.should be_false
      str.force_encoding('Windows-1251').valid_encoding?.should be_true
      str.force_encoding('IBM437').valid_encoding?.should be_true
      str.force_encoding('IBM737').valid_encoding?.should be_true
      str.force_encoding('IBM775').valid_encoding?.should be_true
      str.force_encoding('CP850').valid_encoding?.should be_true
      str.force_encoding('IBM852').valid_encoding?.should be_true
      str.force_encoding('CP852').valid_encoding?.should be_true
      str.force_encoding('IBM855').valid_encoding?.should be_true
      str.force_encoding('CP855').valid_encoding?.should be_true
      str.force_encoding('IBM857').valid_encoding?.should be_true
      str.force_encoding('IBM860').valid_encoding?.should be_true
      str.force_encoding('IBM861').valid_encoding?.should be_true
      str.force_encoding('IBM862').valid_encoding?.should be_true
      str.force_encoding('IBM863').valid_encoding?.should be_true
      str.force_encoding('IBM864').valid_encoding?.should be_true
      str.force_encoding('IBM865').valid_encoding?.should be_true
      str.force_encoding('IBM866').valid_encoding?.should be_true
      str.force_encoding('IBM869').valid_encoding?.should be_true
      str.force_encoding('Windows-1258').valid_encoding?.should be_true
      str.force_encoding('GB1988').valid_encoding?.should be_true
      str.force_encoding('macCentEuro').valid_encoding?.should be_true
      str.force_encoding('macCroatian').valid_encoding?.should be_true
      str.force_encoding('macCyrillic').valid_encoding?.should be_true
      str.force_encoding('macGreek').valid_encoding?.should be_true
      str.force_encoding('macIceland').valid_encoding?.should be_true
      str.force_encoding('macRoman').valid_encoding?.should be_true
      str.force_encoding('macRomania').valid_encoding?.should be_true
      str.force_encoding('macThai').valid_encoding?.should be_true
      str.force_encoding('macTurkish').valid_encoding?.should be_true
      str.force_encoding('macUkraine').valid_encoding?.should be_true
      str.force_encoding('stateless-ISO-2022-JP').valid_encoding?.should be_false
      str.force_encoding('eucJP-ms').valid_encoding?.should be_false
      str.force_encoding('CP51932').valid_encoding?.should be_false
      str.force_encoding('GB2312').valid_encoding?.should be_false
      str.force_encoding('GB12345').valid_encoding?.should be_false
      str.force_encoding('ISO-2022-JP').valid_encoding?.should be_true
      str.force_encoding('ISO-2022-JP-2').valid_encoding?.should be_true
      str.force_encoding('CP50221').valid_encoding?.should be_true
      str.force_encoding('Windows-1252').valid_encoding?.should be_true
      str.force_encoding('Windows-1250').valid_encoding?.should be_true
      str.force_encoding('Windows-1256').valid_encoding?.should be_true
      str.force_encoding('Windows-1253').valid_encoding?.should be_true
      str.force_encoding('Windows-1255').valid_encoding?.should be_true
      str.force_encoding('Windows-1254').valid_encoding?.should be_true
      str.force_encoding('TIS-620').valid_encoding?.should be_true
      str.force_encoding('Windows-874').valid_encoding?.should be_true
      str.force_encoding('Windows-1257').valid_encoding?.should be_true
      str.force_encoding('Windows-31J').valid_encoding?.should be_false
      str.force_encoding('MacJapanese').valid_encoding?.should be_false
      str.force_encoding('UTF-7').valid_encoding?.should be_true
      str.force_encoding('UTF8-MAC').valid_encoding?.should be_true
    end

    it "returns false if self is valid in one encoding, but invalid in the one it's tagged with" do
      str = "\u{8765}"
      str.valid_encoding?.should be_true
      str = str.force_encoding('ascii')
      str.valid_encoding?.should be_false
    end

    it "returns false if self contains a character invalid in the associated encoding" do
      "abc#{[0x80].pack('C')}".force_encoding('ascii').valid_encoding?.should be_false
    end

    it "returns false if a valid String had an invalid character appended to it" do
      str = "a"
      str.valid_encoding?.should be_true
      str << [0xDD].pack('C').force_encoding('utf-8')
      str.valid_encoding?.should be_false
    end

    it "returns true if an invalid string is appended another invalid one but both make a valid string" do
      str = [0xD0].pack('C').force_encoding('utf-8')
      str.valid_encoding?.should be_false
      str << [0xBF].pack('C').force_encoding('utf-8')
      str.valid_encoding?.should be_true
    end
  end
end
