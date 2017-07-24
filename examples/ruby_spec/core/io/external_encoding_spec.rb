require File.expand_path('../../../spec_helper', __FILE__)

with_feature :encoding do
  describe :io_external_encoding_write, shared: true do
    describe "when Encoding.default_internal is nil" do
      before :each do
        Encoding.default_internal = nil
      end

      it "returns nil" do
        @io = new_io @name, @object
        Encoding.default_external = Encoding::IBM437
        @io.external_encoding.should be_nil
      end

      it "returns the external encoding specified when the instance was created" do
        @io = new_io @name, "#{@object}:ibm866"
        Encoding.default_external = Encoding::IBM437
        @io.external_encoding.should equal(Encoding::IBM866)
      end

      it "returns the encoding set by #set_encoding" do
        @io = new_io @name, "#{@object}:ibm866"
        @io.set_encoding Encoding::EUC_JP, nil
        @io.external_encoding.should equal(Encoding::EUC_JP)
      end
    end

    describe "when Encoding.default_external != Encoding.default_internal" do
      before :each do
        Encoding.default_external = Encoding::IBM437
        Encoding.default_internal = Encoding::IBM866
      end

      it "returns the value of Encoding.default_external when the instance was created" do
        @io = new_io @name, @object
        Encoding.default_external = Encoding::UTF_8
        @io.external_encoding.should equal(Encoding::IBM437)
      end

      it "returns the external encoding specified when the instance was created" do
        @io = new_io @name, "#{@object}:ibm866"
        Encoding.default_external = Encoding::IBM437
        @io.external_encoding.should equal(Encoding::IBM866)
      end

      it "returns the encoding set by #set_encoding" do
        @io = new_io @name, "#{@object}:ibm866"
        @io.set_encoding Encoding::EUC_JP, nil
        @io.external_encoding.should equal(Encoding::EUC_JP)
      end
    end

    describe "when Encoding.default_external == Encoding.default_internal" do
      before :each do
        Encoding.default_external = Encoding::IBM866
        Encoding.default_internal = Encoding::IBM866
      end

      it "returns the value of Encoding.default_external when the instance was created" do
        @io = new_io @name, @object
        Encoding.default_external = Encoding::UTF_8
        @io.external_encoding.should equal(Encoding::IBM866)
      end

      it "returns the external encoding specified when the instance was created" do
        @io = new_io @name, "#{@object}:ibm866"
        Encoding.default_external = Encoding::IBM437
        @io.external_encoding.should equal(Encoding::IBM866)
      end

      it "returns the encoding set by #set_encoding" do
        @io = new_io @name, "#{@object}:ibm866"
        @io.set_encoding Encoding::EUC_JP, nil
        @io.external_encoding.should equal(Encoding::EUC_JP)
      end
    end
  end

  describe "IO#external_encoding" do
    before :each do
      @external = Encoding.default_external
      @internal = Encoding.default_internal

      @name = tmp("io_external_encoding")
      touch(@name)
    end

    after :each do
      Encoding.default_external = @external
      Encoding.default_internal = @internal

      @io.close if @io
      rm_r @name
    end

    describe "with 'r' mode" do
      describe "when Encoding.default_internal is nil" do
        before :each do
          Encoding.default_internal = nil
          Encoding.default_external = Encoding::IBM866
        end

        it "returns Encoding.default_external if the external encoding is not set" do
          @io = new_io @name, "r"
          @io.external_encoding.should equal(Encoding::IBM866)
        end

        it "returns Encoding.default_external when that encoding is changed after the instance is created" do
          @io = new_io @name, "r"
          Encoding.default_external = Encoding::IBM437
          @io.external_encoding.should equal(Encoding::IBM437)
        end

        it "returns the external encoding specified when the instance was created" do
          @io = new_io @name, "r:utf-8"
          Encoding.default_external = Encoding::IBM437
          @io.external_encoding.should equal(Encoding::UTF_8)
        end

        it "returns the encoding set by #set_encoding" do
          @io = new_io @name, "r:utf-8"
          @io.set_encoding Encoding::EUC_JP, nil
          @io.external_encoding.should equal(Encoding::EUC_JP)
        end
      end

      describe "when Encoding.default_external == Encoding.default_internal" do
        before :each do
          Encoding.default_external = Encoding::IBM866
          Encoding.default_internal = Encoding::IBM866
        end

        it "returns the value of Encoding.default_external when the instance was created" do
          @io = new_io @name, "r"
          Encoding.default_external = Encoding::IBM437
          @io.external_encoding.should equal(Encoding::IBM866)
        end

        it "returns the external encoding specified when the instance was created" do
          @io = new_io @name, "r:utf-8"
          Encoding.default_external = Encoding::IBM437
          @io.external_encoding.should equal(Encoding::UTF_8)
        end

        it "returns the encoding set by #set_encoding" do
          @io = new_io @name, "r:utf-8"
          @io.set_encoding Encoding::EUC_JP, nil
          @io.external_encoding.should equal(Encoding::EUC_JP)
        end
      end

      describe "when Encoding.default_external != Encoding.default_internal" do
        before :each do
          Encoding.default_external = Encoding::IBM437
          Encoding.default_internal = Encoding::IBM866
        end


        it "returns the external encoding specified when the instance was created" do
          @io = new_io @name, "r:utf-8"
          Encoding.default_external = Encoding::IBM437
          @io.external_encoding.should equal(Encoding::UTF_8)
        end

        it "returns the encoding set by #set_encoding" do
          @io = new_io @name, "r:utf-8"
          @io.set_encoding Encoding::EUC_JP, nil
          @io.external_encoding.should equal(Encoding::EUC_JP)
        end
      end
    end

    describe "with 'rb' mode" do
      it "returns Encoding::ASCII_8BIT" do
        @io = new_io @name, "rb"
        @io.external_encoding.should equal(Encoding::ASCII_8BIT)
      end

      it "returns the external encoding specified by the mode argument" do
        @io = new_io @name, "rb:ibm437"
        @io.external_encoding.should equal(Encoding::IBM437)
      end
    end

    describe "with 'r+' mode" do
      it_behaves_like :io_external_encoding_write, nil, "r+"
    end

    describe "with 'w' mode" do
      it_behaves_like :io_external_encoding_write, nil, "w"
    end

    describe "with 'wb' mode" do
      it "returns Encoding::ASCII_8BIT" do
        @io = new_io @name, "wb"
        @io.external_encoding.should equal(Encoding::ASCII_8BIT)
      end

      it "returns the external encoding specified by the mode argument" do
        @io = new_io @name, "wb:ibm437"
        @io.external_encoding.should equal(Encoding::IBM437)
      end
    end

    describe "with 'w+' mode" do
      it_behaves_like :io_external_encoding_write, nil, "w+"
    end

    describe "with 'a' mode" do
      it_behaves_like :io_external_encoding_write, nil, "a"
    end

    describe "with 'a+' mode" do
      it_behaves_like :io_external_encoding_write, nil, "a+"
    end
  end
end
