require File.expand_path('../../../../spec_helper', __FILE__)

["APPEND", "CREAT", "EXCL", "FNM_CASEFOLD",
  "FNM_DOTMATCH", "FNM_EXTGLOB", "FNM_NOESCAPE", "FNM_PATHNAME",
  "FNM_SYSCASE", "LOCK_EX", "LOCK_NB", "LOCK_SH",
  "LOCK_UN", "NONBLOCK", "RDONLY",
  "RDWR", "TRUNC", "WRONLY"].each do |const|
  describe "File::Constants::#{const}" do
    it "is defined" do
      File::Constants.const_defined?(const).should be_true
    end
  end
end

platform_is :windows do
  describe "File::Constants::BINARY" do
    it "is defined" do
      File::Constants.const_defined?(:BINARY).should be_true
    end
  end
end

platform_is_not :windows do
  ["NOCTTY", "SYNC"].each do |const|
    describe "File::Constants::#{const}" do
      it "is defined" do
        File::Constants.const_defined?(const).should be_true
      end
    end
  end
end
