require File.expand_path('../../../spec_helper', __FILE__)

describe "RUBY_VERSION" do
  it "is a String" do
    RUBY_VERSION.should be_kind_of(String)
  end
end

describe "RUBY_PATCHLEVEL" do
  it "is a Fixnum" do
    RUBY_PATCHLEVEL.should be_kind_of(Fixnum)
  end
end

describe "RUBY_COPYRIGHT" do
  it "is a String" do
    RUBY_COPYRIGHT.should be_kind_of(String)
  end
end

describe "RUBY_DESCRIPTION" do
  it "is a String" do
    RUBY_DESCRIPTION.should be_kind_of(String)
  end
end

describe "RUBY_ENGINE" do
  it "is a String" do
    RUBY_ENGINE.should be_kind_of(String)
  end
end

describe "RUBY_PLATFORM" do
  it "is a String" do
    RUBY_PLATFORM.should be_kind_of(String)
  end
end

describe "RUBY_RELEASE_DATE" do
  it "is a String" do
    RUBY_RELEASE_DATE.should be_kind_of(String)
  end
end

describe "RUBY_REVISION" do
  it "is a Fixnum" do
    RUBY_REVISION.should be_kind_of(Fixnum)
  end
end
