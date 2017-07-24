require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe :io_internal_encoding, shared: true do
    describe "when Encoding.default_internal is not set" do
      before :each do
        Encoding.default_internal = nil
      end

      it "returns nil if the internal encoding is not set" do
        @io = new_io @name, @object
        @io.internal_encoding.should be_nil
      end

      it "returns nil if Encoding.default_internal is changed after the instance is created" do
        @io = new_io @name, @object
        Encoding.default_internal = Encoding::IBM437
        @io.internal_encoding.should be_nil
      end

      it "returns the value set when the instance was created" do
        @io = new_io @name, "#{@object}:utf-8:euc-jp"
        Encoding.default_internal = Encoding::IBM437
        @io.internal_encoding.should equal(Encoding::EUC_JP)
      end

      it "returns the value set by #set_encoding" do
        @io = new_io @name, @object
        @io.set_encoding(Encoding::US_ASCII, Encoding::IBM437)
        @io.internal_encoding.should equal(Encoding::IBM437)
      end
    end

    describe "when Encoding.default_internal == Encoding.default_external" do
      before :each do
        Encoding.default_external = Encoding::IBM866
        Encoding.default_internal = Encoding::IBM866
      end

      it "returns nil" do
        @io = new_io @name, @object
        @io.internal_encoding.should be_nil
      end

      it "returns nil regardless of Encoding.default_internal changes" do
        @io = new_io @name, @object
        Encoding.default_internal = Encoding::IBM437
        @io.internal_encoding.should be_nil
      end
    end

    describe "when Encoding.default_internal != Encoding.default_external" do
      before :each do
        Encoding.default_external = Encoding::IBM437
        Encoding.default_internal = Encoding::IBM866
      end

      it "returns the value of Encoding.default_internal when the instance was created if the internal encoding is not set" do
        @io = new_io @name, @object
        @io.internal_encoding.should equal(Encoding::IBM866)
      end

      it "does not change when Encoding.default_internal is changed" do
        @io = new_io @name, @object
        Encoding.default_internal = Encoding::IBM437
        @io.internal_encoding.should equal(Encoding::IBM866)
      end

      it "returns the internal encoding set when the instance was created" do
        @io = new_io @name, "#{@object}:utf-8:euc-jp"
        @io.internal_encoding.should equal(Encoding::EUC_JP)
      end

      it "does not change when set and Encoding.default_internal is changed" do
        @io = new_io @name, "#{@object}:utf-8:euc-jp"
        Encoding.default_internal = Encoding::IBM437
        @io.internal_encoding.should equal(Encoding::EUC_JP)
      end

      it "returns the value set by #set_encoding" do
        @io = new_io @name, @object
        @io.set_encoding(Encoding::US_ASCII, Encoding::IBM437)
        @io.internal_encoding.should equal(Encoding::IBM437)
      end

      it "returns nil when Encoding.default_external is ASCII-8BIT and the internal encoding is not set" do
        Encoding.default_external = Encoding::ASCII_8BIT
        @io = new_io @name, @object
        @io.internal_encoding.should be_nil
      end

      it "returns nil when the external encoding is ASCII-8BIT and the internal encoding is not set" do
        @io = new_io @name, "#{@object}:ascii-8bit"
        @io.internal_encoding.should be_nil
      end
    end
  end

  describe "IO#internal_encoding" do
    before :each do
      @external = Encoding.default_external
      @internal = Encoding.default_internal

      @name = tmp("io_internal_encoding")
      touch(@name)
    end

    after :each do
      @io.close if @io
      rm_r @name

      Encoding.default_external = @external
      Encoding.default_internal = @internal
    end

    describe "with 'r' mode" do
      it_behaves_like :io_internal_encoding, nil, "r"
    end

    describe "with 'r+' mode" do
      it_behaves_like :io_internal_encoding, nil, "r+"
    end

    describe "with 'w' mode" do
      it_behaves_like :io_internal_encoding, nil, "w"
    end

    describe "with 'w+' mode" do
      it_behaves_like :io_internal_encoding, nil, "w+"
    end

    describe "with 'a' mode" do
      it_behaves_like :io_internal_encoding, nil, "a"
    end

    describe "with 'a+' mode" do
      it_behaves_like :io_internal_encoding, nil, "a+"
    end
  end
end
