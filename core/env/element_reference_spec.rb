# -*- encoding: ascii-8bit -*-
require File.expand_path('../../../spec_helper', __FILE__)

describe "ENV.[]" do
  before :each do
    @variable = "returns_only_frozen_values"
  end

  after :each do
    ENV.delete @variable
  end

  it "returns nil if the variable isn't found" do
    ENV["this_var_is_never_set"].should == nil
  end

  it "returns only frozen values" do
    ENV[@variable] = "a non-frozen string"
    ENV[@variable].frozen?.should == true
  end

  platform_is :windows do
    it "looks up values case-insensitively" do
      ENV[@variable] = "bar"
      ENV[@variable.upcase].should == "bar"
    end
  end
end

with_feature :encoding do
  describe "ENV.[]" do
    before :each do
      @variable = "env_element_reference_encoding_specs"

      @external = Encoding.default_external
      @internal = Encoding.default_internal

      Encoding.default_external = Encoding::ASCII_8BIT
    end

    after :each do
      Encoding.default_external = @external
      Encoding.default_internal = @internal

      ENV.delete @variable
    end

    it "uses the locale encoding if Encoding.default_internal is nil" do
      Encoding.default_internal = nil

      locale = Encoding.find('locale')
      locale = Encoding::ASCII_8BIT if locale == Encoding::US_ASCII
      ENV[@variable] = "\xC3\xB8"
      ENV[@variable].encoding.should == locale
    end

    it "transcodes from the locale encoding to Encoding.default_internal if set" do
      # We cannot reliably know the locale encoding, so we merely check that
      # the result string has the expected encoding.
      ENV[@variable] = ""
      Encoding.default_internal = Encoding::IBM437

      ENV[@variable].encoding.should equal(Encoding::IBM437)
    end
  end
end
