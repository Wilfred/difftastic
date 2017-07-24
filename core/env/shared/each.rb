require File.expand_path('../../../enumerable/shared/enumeratorized', __FILE__)

describe :env_each, shared: true do
  it "returns each pair" do
    orig = ENV.to_hash
    e = []
    begin
      ENV.clear
      ENV["foo"] = "bar"
      ENV["baz"] = "boo"
      ENV.send(@method) { |k, v| e << [k, v] }
      e.should include(["foo", "bar"])
      e.should include(["baz", "boo"])
    ensure
      ENV.replace orig
    end
  end

  it "returns an Enumerator if called without a block" do
    ENV.send(@method).should be_an_instance_of(Enumerator)
  end

  before :all do
    @object = ENV
  end
  it_should_behave_like :enumeratorized_with_origin_size

  with_feature :encoding do
    describe "with encoding" do
      before :each do
        @external = Encoding.default_external
        @internal = Encoding.default_internal

        Encoding.default_external = Encoding::ASCII_8BIT

        @locale_encoding = Encoding.find "locale"
      end

      after :each do
        Encoding.default_external = @external
        Encoding.default_internal = @internal
      end

      it "uses the locale encoding when Encoding.default_internal is nil" do
        Encoding.default_internal = nil

        ENV.send(@method) do |key, value|
          key.encoding.should equal(@locale_encoding)
          value.encoding.should equal(@locale_encoding)
        end
      end

      it "transcodes from the locale encoding to Encoding.default_internal if set" do
        Encoding.default_internal = internal = Encoding::IBM437

        ENV.send(@method) do |key, value|
          key.encoding.should equal(internal)
          if value.ascii_only?
            value.encoding.should equal(internal)
          end
        end
      end
    end
  end
end
