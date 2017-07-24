# -*- encoding: binary -*-
require File.expand_path('../../fixtures/marshal_data', __FILE__)
require 'stringio'

describe :marshal_load, shared: true do
  before :all do
    @num_self_class = 1
  end

  it "raises an ArgumentError when the dumped data is truncated" do
    obj = {first: 1, second: 2, third: 3}
    lambda { Marshal.send(@method, Marshal.dump(obj)[0, 5]) }.should raise_error(ArgumentError)
  end

  it "raises an ArgumentError when the dumped class is missing" do
    Object.send(:const_set, :KaBoom, Class.new)
    kaboom = Marshal.dump(KaBoom.new)
    Object.send(:remove_const, :KaBoom)

    lambda { Marshal.send(@method, kaboom) }.should raise_error(ArgumentError)
  end

  describe "when called with a proc" do
    it "returns the value of the proc" do
      Marshal.send(@method, Marshal.dump([1,2]), proc { [3,4] }).should ==  [3,4]
    end

    it "calls the proc for recursively visited data" do
      a = [1]
      a << a
      ret = []
      Marshal.send(@method, Marshal.dump(a), proc { |arg| ret << arg; arg })
      ret.first.should == 1
      ret[1].should == [1,a]
      ret[2].should == a
      ret.size.should == 3
    end

    it "loads an Array with proc" do
      arr = []
      s = 'hi'
      s.instance_variable_set(:@foo, 5)
      st = Struct.new("Brittle", :a).new
      st.instance_variable_set(:@clue, 'none')
      st.a = 0.0
      h = Hash.new('def')
      h['nine'] = 9
      a = [:a, :b, :c]
      a.instance_variable_set(:@two, 2)
      obj = [s, 10, s, s, st, a]
      obj.instance_variable_set(:@zoo, 'ant')
      proc = Proc.new { |o| arr << o; o}

      Marshal.send(@method, "\x04\bI[\vI\"\ahi\a:\x06EF:\t@fooi\ni\x0F@\x06@\x06IS:\x14Struct::Brittle\x06:\x06af\x060\x06:\n@clueI\"\tnone\x06;\x00FI[\b;\b:\x06b:\x06c\x06:\t@twoi\a\x06:\t@zooI\"\bant\x06;\x00F", proc)

      arr.should == ["hi", false, 5, 10, "hi", "hi", 0.0, st, "none", false,
                     :b, :c, a, 2, ["hi", 10, "hi", "hi", st, [:a, :b, :c]], "ant", false]

      Struct.send(:remove_const, :Brittle)
    end
  end

  describe "when called with nil for the proc argument" do
    it "behaves as if no proc argument was passed" do
      a = [1]
      a << a
      b = Marshal.send(@method, Marshal.dump(a), nil)
      b.should == a
    end
  end

  describe "when called on objects with custom _dump methods" do
    it "does not set instance variables of an object with user-defined _dump/_load" do
      # this string represents: <#UserPreviouslyDefinedWithInitializedIvar @field2=7 @field1=6>
      dump_str = "\004\bu:-UserPreviouslyDefinedWithInitializedIvar\a:\f@field2i\f:\f@field1i\v"

      UserPreviouslyDefinedWithInitializedIvar.should_receive(:_load).and_return(UserPreviouslyDefinedWithInitializedIvar.new)
      marshaled_obj = Marshal.send(@method, dump_str)

      marshaled_obj.should be_an_instance_of(UserPreviouslyDefinedWithInitializedIvar)
      marshaled_obj.field1.should be_nil
      marshaled_obj.field2.should be_nil
    end

    describe "that return an immediate value" do
      it "loads an array containing an instance of the object, followed by multiple instances of another object" do
        str = "string"

        # this string represents: [<#UserDefinedImmediate A>, <#String "string">, <#String "string">]
        marshaled_obj = Marshal.send(@method, "\004\b[\bu:\031UserDefinedImmediate\000\"\vstring@\a")

        marshaled_obj.should == [nil, str, str]
      end

      it "loads any structure with multiple references to the same object, followed by multiple instances of another object" do
        str = "string"

        # this string represents: {a: <#UserDefinedImmediate A>, b: <#UserDefinedImmediate A>, c: <#String "string">, d: <#String "string">}
        hash_dump = "\x04\b{\t:\x06aIu:\x19UserDefinedImmediate\x00\x06:\x06ET:\x06b@\x06:\x06cI\"\vstring\x06;\aT:\x06d@\a"

        marshaled_obj = Marshal.send(@method, hash_dump)
        marshaled_obj.should == {a: nil, b: nil, c: str, d: str}

        # this string represents: [<#UserDefinedImmediate A>, <#UserDefinedImmediate A>, <#String "string">, <#String "string">]
        array_dump = "\x04\b[\tIu:\x19UserDefinedImmediate\x00\x06:\x06ET@\x06I\"\vstring\x06;\x06T@\a"

        marshaled_obj = Marshal.send(@method, array_dump)
        marshaled_obj.should == [nil, nil, str, str]
      end

      it "loads an array containing references to multiple instances of the object, followed by multiple instances of another object" do
        str = "string"

        # this string represents: [<#UserDefinedImmediate A>, <#UserDefinedImmediate B>, <#String "string">, <#String "string">]
        array_dump = "\x04\b[\tIu:\x19UserDefinedImmediate\x00\x06:\x06ETIu;\x00\x00\x06;\x06TI\"\vstring\x06;\x06T@\b"

        marshaled_obj = Marshal.send(@method, array_dump)
        marshaled_obj.should == [nil, nil, str, str]
      end
    end
  end

  it "loads an array containing objects having _dump method, and with proc" do
    arr = []
    myproc = Proc.new { |o| arr << o; o }
    o1 = UserDefined.new;
    o2 = UserDefinedWithIvar.new
    obj = [o1, o2, o1, o2]

    Marshal.send(@method, "\x04\b[\tu:\x10UserDefined\x18\x04\b[\aI\"\nstuff\x06:\x06EF@\x06u:\x18UserDefinedWithIvar>\x04\b[\bI\"\nstuff\a:\x06EF:\t@foo:\x18UserDefinedWithIvarI\"\tmore\x06;\x00F@\a@\x06@\a", myproc)

    arr.should == [o1, o2, o1, o2, obj]
  end

  it "loads an array containing objects having marshal_dump method, and with proc" do
    arr = []
    proc = Proc.new { |o| arr << o; o }
    o1 = UserMarshal.new
    o2 = UserMarshalWithIvar.new
    obj = [o1, o2, o1, o2]

    Marshal.send(@method, "\004\b[\tU:\020UserMarshal\"\nstuffU:\030UserMarshalWithIvar[\006\"\fmy data@\006@\b", proc)

    arr.should == ['stuff', o1, 'my data', ['my data'], o2, o1, o2, obj]
  end

  it "assigns classes to nested subclasses of Array correctly" do
    arr = ArraySub.new(ArraySub.new)
    arr_dump = Marshal.dump(arr)
    Marshal.send(@method, arr_dump).class.should == ArraySub
  end

  it "loads subclasses of Array with overridden << and push correctly" do
    arr = ArraySubPush.new
    arr[0] = '1'
    arr_dump = Marshal.dump(arr)
    Marshal.send(@method, arr_dump).should == arr
  end

  it "raises a TypeError with bad Marshal version" do
    marshal_data = '\xff\xff'
    marshal_data[0] = (Marshal::MAJOR_VERSION).chr
    marshal_data[1] = (Marshal::MINOR_VERSION + 1).chr

    lambda { Marshal.send(@method, marshal_data) }.should raise_error(TypeError)

    marshal_data = '\xff\xff'
    marshal_data[0] = (Marshal::MAJOR_VERSION - 1).chr
    marshal_data[1] = (Marshal::MINOR_VERSION).chr

    lambda { Marshal.send(@method, marshal_data) }.should raise_error(TypeError)
  end

  it "raises EOFError on loading an empty file" do
    temp_file = tmp("marshal.rubyspec.tmp.#{Process.pid}")
    file = File.new(temp_file, "w+")
    begin
      lambda { Marshal.send(@method, file) }.should raise_error(EOFError)
    ensure
      file.close
      rm_r temp_file
    end
  end

  it "returns an untainted object if source is untainted" do
    x = Object.new
    y = Marshal.send(@method, Marshal.dump(x))
    y.tainted?.should be_false
  end

  describe "when source is tainted" do
    it "returns a tainted object" do
      x = Object.new
      x.taint
      s = Marshal.dump(x)
      y = Marshal.send(@method, s)
      y.tainted?.should be_true

      # note that round-trip via Marshal does not preserve
      # the taintedness at each level of the nested structure
      y = Marshal.send(@method, Marshal.dump([[x]]))
      y.tainted?.should be_true
      y.first.tainted?.should be_true
      y.first.first.tainted?.should be_true
    end

    it "does not taint Symbols" do
      x = [:x]
      y = Marshal.send(@method, Marshal.dump(x).taint)
      y.tainted?.should be_true
      y.first.tainted?.should be_false
    end

    it "does not taint Fixnums" do
      x = [1]
      y = Marshal.send(@method, Marshal.dump(x).taint)
      y.tainted?.should be_true
      y.first.tainted?.should be_false
    end

    it "does not taint Bignums" do
      x = [bignum_value]
      y = Marshal.send(@method, Marshal.dump(x).taint)
      y.tainted?.should be_true
      y.first.tainted?.should be_false
    end

    it "does not taint Floats" do
      x = [1.2]
      y = Marshal.send(@method, Marshal.dump(x).taint)
      y.tainted?.should be_true
      y.first.tainted?.should be_false
    end
  end

  it "preserves taintedness of nested structure" do
    x = Object.new
    a = [[x]]
    x.taint
    y = Marshal.send(@method, Marshal.dump(a))
    y.tainted?.should be_true
    y.first.tainted?.should be_true
    y.first.first.tainted?.should be_true
  end

  it "returns a trusted object if source is trusted" do
    x = Object.new
    y = Marshal.send(@method, Marshal.dump(x))
    y.untrusted?.should be_false
  end

  it "returns an untrusted object if source is untrusted" do
    x = Object.new
    x.untrust
    y = Marshal.send(@method, Marshal.dump(x))
    y.untrusted?.should be_true

    # note that round-trip via Marshal does not preserve
    # the untrustedness at each level of the nested structure
    y = Marshal.send(@method, Marshal.dump([[x]]))
    y.untrusted?.should be_true
    y.first.untrusted?.should be_true
    y.first.first.untrusted?.should be_true
  end

  # Note: Ruby 1.9 should be compatible with older marshal format
  MarshalSpec::DATA.each do |description, (object, marshal, attributes)|
    it "loads a #{description}" do
      Marshal.send(@method, marshal).should == object
    end
  end

  MarshalSpec::DATA_19.each do |description, (object, marshal, attributes)|
    it "loads a #{description}" do
      Marshal.send(@method, marshal).should == object
    end
  end

  describe "for an Array" do
    it "loads an array containing the same objects" do
      s = 'oh'
      b = 'hi'
      r = //
      d = [b, :no, s, :go]
      c = String
      f = 1.0

      o1 = UserMarshalWithIvar.new; o2 = UserMarshal.new

      obj = [:so, 'hello', 100, :so, :so, d, :so, o2, :so, :no, o2,
             :go, c, nil, Struct::Pyramid.new, f, :go, :no, s, b, r,
             :so, 'huh', o1, true, b, b, 99, r, b, s, :so, f, c, :no, o1, d]

      Marshal.send(@method, "\004\b[*:\aso\"\nhelloii;\000;\000[\t\"\ahi:\ano\"\aoh:\ago;\000U:\020UserMarshal\"\nstuff;\000;\006@\n;\ac\vString0S:\024Struct::Pyramid\000f\0061;\a;\006@\t@\b/\000\000;\000\"\bhuhU:\030UserMarshalWithIvar[\006\"\fmy dataT@\b@\bih@\017@\b@\t;\000@\016@\f;\006@\021@\a").should ==
        obj
    end

    it "loads an array having ivar" do
      s = 'well'
      s.instance_variable_set(:@foo, 10)
      obj = ['5', s, 'hi'].extend(Meths, MethsMore)
      obj.instance_variable_set(:@mix, s)
      new_obj = Marshal.send(@method, "\004\bI[\b\"\0065I\"\twell\006:\t@fooi\017\"\ahi\006:\t@mix@\a")
      new_obj.should == obj
      new_obj.instance_variable_get(:@mix).should equal new_obj[1]
      new_obj[1].instance_variable_get(:@foo).should == 10
    end

    it "loads an extended Array object containing a user-marshaled object" do
      obj = [UserMarshal.new, UserMarshal.new].extend(Meths)
      new_obj = Marshal.send(@method, "\x04\be:\nMeths[\ao:\x10UserMarshal\x06:\n@dataI\"\nstuff\x06:\x06ETo;\x06\x06;\aI\"\nstuff\x06;\bT")

      new_obj.should == obj
      obj_ancestors = class << obj; ancestors[1..-1]; end
      new_obj_ancestors = class << new_obj; ancestors[1..-1]; end
      obj_ancestors.should == new_obj_ancestors
    end
  end

  describe "for a Hash" do
    it "loads an extended_user_hash with a parameter to initialize" do
      obj = UserHashInitParams.new(:abc).extend(Meths)

      new_obj = Marshal.send(@method, "\004\bIe:\nMethsC:\027UserHashInitParams{\000\006:\a@a:\babc")

      new_obj.should == obj
      new_obj_metaclass_ancestors = class << new_obj; ancestors; end
      new_obj_metaclass_ancestors[@num_self_class].should == Meths
      new_obj_metaclass_ancestors[@num_self_class+1].should == UserHashInitParams
    end

    it "loads an extended hash object containing a user-marshaled object" do
      obj = {a: UserMarshal.new}.extend(Meths)

      new_obj = Marshal.send(@method, "\004\be:\nMeths{\006:\006aU:\020UserMarshal\"\nstuff")

      new_obj.should == obj
      new_obj_metaclass_ancestors = class << new_obj; ancestors; end
      new_obj_metaclass_ancestors[@num_self_class].should == Meths
      new_obj_metaclass_ancestors[@num_self_class+1].should == Hash
    end

    it "preserves hash ivars when hash contains a string having ivar" do
      s = 'string'
      s.instance_variable_set :@string_ivar, 'string ivar'
      h = { key: s }
      h.instance_variable_set :@hash_ivar, 'hash ivar'

      unmarshalled = Marshal.send(@method, Marshal.dump(h))
      unmarshalled.instance_variable_get(:@hash_ivar).should == 'hash ivar'
      unmarshalled[:key].instance_variable_get(:@string_ivar).should == 'string ivar'
    end
  end

  describe "for a String" do
    it "loads a string having ivar with ref to self" do
      obj = 'hi'
      obj.instance_variable_set(:@self, obj)
      Marshal.send(@method, "\004\bI\"\ahi\006:\n@self@\000").should == obj
    end

    it "loads a string through StringIO stream" do
        obj = "This is a string which should be unmarshalled through StringIO stream!"
        Marshal.send(@method, StringIO.new(Marshal.dump(obj))).should == obj
    end

    it "loads a string with an ivar" do
      str = Marshal.send(@method, "\x04\bI\"\x00\x06:\t@fooI\"\bbar\x06:\x06EF")
      str.instance_variable_get("@foo").should == "bar"
    end

    it "loads a String subclass with custom constructor" do
      str = Marshal.send(@method, "\x04\bC: UserCustomConstructorString\"\x00")
      str.should be_an_instance_of(UserCustomConstructorString)
    end

    with_feature :encoding do
      it "loads a US-ASCII String" do
        str = "abc".force_encoding("us-ascii")
        data = "\x04\bI\"\babc\x06:\x06EF"
        result = Marshal.send(@method, data)
        result.should == str
        result.encoding.should equal(Encoding::US_ASCII)
      end

      it "loads a UTF-8 String" do
        str = "\x6d\xc3\xb6\x68\x72\x65".force_encoding("utf-8")
        data = "\x04\bI\"\vm\xC3\xB6hre\x06:\x06ET"
        result = Marshal.send(@method, data)
        result.should == str
        result.encoding.should equal(Encoding::UTF_8)
      end

      it "loads a String in another encoding" do
        str = "\x6d\x00\xf6\x00\x68\x00\x72\x00\x65\x00".force_encoding("utf-16le")
        data = "\x04\bI\"\x0Fm\x00\xF6\x00h\x00r\x00e\x00\x06:\rencoding\"\rUTF-16LE"
        result = Marshal.send(@method, data)
        result.should == str
        result.encoding.should equal(Encoding::UTF_16LE)
      end

      it "loads a String as ASCII-8BIT if no encoding is specified at the end" do
        str = "\xC3\xB8".force_encoding("ASCII-8BIT")
        data = "\x04\b\"\a\xC3\xB8".force_encoding("UTF-8")
        result = Marshal.send(@method, data)
        result.encoding.should == Encoding::ASCII_8BIT
        result.should == str
      end
    end
  end

  describe "for a Struct" do
    it "loads a extended_struct having fields with same objects" do
      s = 'hi'
      obj = Struct.new("Ure2", :a, :b).new.extend(Meths)
      obj.a = [:a, s]
      obj.b = [:Meths, s]

      Marshal.send(@method,
        "\004\be:\nMethsS:\021Struct::Ure2\a:\006a[\a;\a\"\ahi:\006b[\a;\000@\a"
        ).should == obj
      Struct.send(:remove_const, :Ure2)
    end

    it "loads a struct having ivar" do
      obj = Struct.new("Thick").new
      obj.instance_variable_set(:@foo, 5)
      Marshal.send(@method, "\004\bIS:\022Struct::Thick\000\006:\t@fooi\n").should == obj
      Struct.send(:remove_const, :Thick)
    end

    it "loads a struct having fields" do
      obj = Struct.new("Ure1", :a, :b).new
      Marshal.send(@method, "\004\bS:\021Struct::Ure1\a:\006a0:\006b0").should == obj
      Struct.send(:remove_const, :Ure1)
    end

    it "does not call initialize on the unmarshaled struct" do
      threadlocal_key = MarshalSpec::StructWithUserInitialize::THREADLOCAL_KEY

      s = MarshalSpec::StructWithUserInitialize.new('foo')
      Thread.current[threadlocal_key].should == ['foo']
      s.a.should == 'foo'

      Thread.current[threadlocal_key] = nil

      dumped = Marshal.dump(s)
      loaded = Marshal.send(@method, dumped)

      Thread.current[threadlocal_key].should == nil
      loaded.a.should == 'foo'
    end
  end

  describe "for an Exception" do
    it "loads a marshalled exception with no message" do
      obj = Exception.new
      loaded = Marshal.send(@method, "\004\bo:\016Exception\a:\abt0:\tmesg0")
      loaded.message.should == obj.message
      loaded.backtrace.should == obj.backtrace
      loaded = Marshal.send(@method, "\x04\bo:\x0EException\a:\tmesg0:\abt0")
      loaded.message.should == obj.message
      loaded.backtrace.should == obj.backtrace
    end

    it "loads a marshalled exception with a message" do
      obj = Exception.new("foo")
      loaded = Marshal.send(@method, "\004\bo:\016Exception\a:\abt0:\tmesg\"\bfoo")
      loaded.message.should == obj.message
      loaded.backtrace.should == obj.backtrace
      loaded = Marshal.send(@method, "\x04\bo:\x0EException\a:\tmesgI\"\bfoo\x06:\x06EF:\abt0")
      loaded.message.should == obj.message
      loaded.backtrace.should == obj.backtrace
    end

    it "loads a marshalled exception with a backtrace" do
      obj = Exception.new("foo")
      obj.set_backtrace(["foo/bar.rb:10"])
      loaded = Marshal.send(@method, "\004\bo:\016Exception\a:\abt[\006\"\022foo/bar.rb:10:\tmesg\"\bfoo")
      loaded.message.should == obj.message
      loaded.backtrace.should == obj.backtrace
      loaded = Marshal.send(@method, "\x04\bo:\x0EException\a:\tmesgI\"\bfoo\x06:\x06EF:\abt[\x06I\"\x12foo/bar.rb:10\x06;\aF")
      loaded.message.should == obj.message
      loaded.backtrace.should == obj.backtrace
    end
  end

  describe "for a user Class" do
    it "loads a user-marshaled extended object" do
      obj = UserMarshal.new.extend(Meths)

      new_obj = Marshal.send(@method, "\004\bU:\020UserMarshal\"\nstuff")

      new_obj.should == obj
      new_obj_metaclass_ancestors = class << new_obj; ancestors; end
      new_obj_metaclass_ancestors[@num_self_class].should == UserMarshal
    end

    it "loads a user_object" do
      UserObject.new
      Marshal.send(@method, "\004\bo:\017UserObject\000").should be_kind_of(UserObject)
    end

    it "loads an object" do
      Marshal.send(@method, "\004\bo:\vObject\000").should be_kind_of(Object)
    end

    it "raises ArgumentError if the object from an 'o' stream is not dumpable as 'o' type user class" do
      lambda do
        Marshal.send(@method, "\x04\bo:\tFile\001\001:\001\005@path\"\x10/etc/passwd")
      end.should raise_error(ArgumentError)
    end

    it "loads an extended Object" do
      obj = Object.new.extend(Meths)

      new_obj = Marshal.send(@method, "\004\be:\nMethso:\vObject\000")

      new_obj.class.should == obj.class
      new_obj_metaclass_ancestors = class << new_obj; ancestors; end
      new_obj_metaclass_ancestors[@num_self_class, 2].should == [Meths, Object]
    end

    describe "that extends a core type other than Object or BasicObject" do
      after :each do
        MarshalSpec.reset_swapped_class
      end

      it "raises ArgumentError if the resulting class does not extend the same type" do
        MarshalSpec.set_swapped_class(Class.new(Hash))
        data = Marshal.dump(MarshalSpec::SwappedClass.new)

        MarshalSpec.set_swapped_class(Class.new(Array))
        lambda { Marshal.send(@method, data) }.should raise_error(ArgumentError)

        MarshalSpec.set_swapped_class(Class.new)
        lambda { Marshal.send(@method, data) }.should raise_error(ArgumentError)
      end
    end

    it "loads an object having ivar" do
      s = 'hi'
      arr = [:so, :so, s, s]
      obj = Object.new
      obj.instance_variable_set :@str, arr

      new_obj = Marshal.send(@method, "\004\bo:\vObject\006:\t@str[\t:\aso;\a\"\ahi@\a")
      new_str = new_obj.instance_variable_get :@str

      new_str.should == arr
    end
  end

  describe "for a Regexp" do
    it "loads an extended Regexp" do
      obj = /[a-z]/.extend(Meths, MethsMore)
      new_obj = Marshal.send(@method, "\004\be:\nMethse:\016MethsMore/\n[a-z]\000")

      new_obj.should == obj
      new_obj_metaclass_ancestors = class << new_obj; ancestors; end
      new_obj_metaclass_ancestors[@num_self_class, 3].should ==
        [Meths, MethsMore, Regexp]
    end

    it "loads a extended_user_regexp having ivar" do
      obj = UserRegexp.new('').extend(Meths)
      obj.instance_variable_set(:@noise, 'much')

      new_obj = Marshal.send(@method, "\004\bIe:\nMethsC:\017UserRegexp/\000\000\006:\v@noise\"\tmuch")

      new_obj.should == obj
      new_obj.instance_variable_get(:@noise).should == 'much'
      new_obj_metaclass_ancestors = class << new_obj; ancestors; end
      new_obj_metaclass_ancestors[@num_self_class, 3].should ==
        [Meths, UserRegexp, Regexp]
    end
  end

  describe "for a Float" do
    it "loads a Float NaN" do
      obj = 0.0 / 0.0
      Marshal.send(@method, "\004\bf\bnan").to_s.should == obj.to_s
    end

    it "loads a Float 1.3" do
      Marshal.send(@method, "\004\bf\v1.3\000\314\315").should == 1.3
    end

    it "loads a Float -5.1867345e-22" do
      obj = -5.1867345e-22
      Marshal.send(@method, "\004\bf\037-5.1867345000000008e-22\000\203_").should be_close(obj, 1e-30)
    end

    it "loads a Float 1.1867345e+22" do
      obj = 1.1867345e+22
      Marshal.send(@method, "\004\bf\0361.1867344999999999e+22\000\344@").should == obj
    end
  end

  describe "for a Integer" do
    it "loads 0" do
      Marshal.send(@method, "\004\bi\000").should == 0
      Marshal.send(@method, "\004\bi\005").should == 0
    end

    it "loads an Integer 8" do
      Marshal.send(@method, "\004\bi\r" ).should == 8
    end

    it "loads and Integer -8" do
      Marshal.send(@method, "\004\bi\363" ).should == -8
    end

    it "loads an Integer 1234" do
      Marshal.send(@method, "\004\bi\002\322\004").should == 1234
    end

    it "loads an Integer -1234" do
      Marshal.send(@method, "\004\bi\376.\373").should == -1234
    end

    it "loads an Integer 4611686018427387903" do
      Marshal.send(@method, "\004\bl+\t\377\377\377\377\377\377\377?").should == 4611686018427387903
    end

    it "loads an Integer -4611686018427387903" do
      Marshal.send(@method, "\004\bl-\t\377\377\377\377\377\377\377?").should == -4611686018427387903
    end

    it "loads an Integer 2361183241434822606847" do
      Marshal.send(@method, "\004\bl+\n\377\377\377\377\377\377\377\377\177\000").should == 2361183241434822606847
    end

    it "loads an Integer -2361183241434822606847" do
      Marshal.send(@method, "\004\bl-\n\377\377\377\377\377\377\377\377\177\000").should == -2361183241434822606847
    end

    it "raises ArgumentError if the input is too short" do
      ["\004\bi",
       "\004\bi\001",
       "\004\bi\002",
       "\004\bi\002\0",
       "\004\bi\003",
       "\004\bi\003\0",
       "\004\bi\003\0\0",
       "\004\bi\004",
       "\004\bi\004\0",
       "\004\bi\004\0\0",
       "\004\bi\004\0\0\0"].each do |invalid|
        lambda { Marshal.send(@method, invalid) }.should raise_error(ArgumentError)
      end
    end

    if 0.size == 8 # for platforms like x86_64
      it "roundtrips 4611686018427387903 from dump/load correctly" do
        Marshal.send(@method, Marshal.dump(4611686018427387903)).should == 4611686018427387903
      end
    end
  end

  describe "for a Rational" do
    it "loads" do
      Marshal.send(@method, Marshal.dump(Rational(1, 3))).should == Rational(1, 3)
    end
  end

  describe "for a Complex" do
    it "loads" do
      Marshal.send(@method, Marshal.dump(Complex(4, 3))).should == Complex(4, 3)
    end
  end

  describe "for a Bignum" do
    platform_is wordsize: 64 do
      context "that is Bignum on 32-bit platforms but Fixnum on 64-bit" do
        it "dumps a Fixnum" do
          val = Marshal.send(@method, "\004\bl+\ab:wU")
          val.should == 1433877090
          val.class.should == Fixnum
        end

        it "dumps an array containing multiple references to the Bignum as an array of Fixnum" do
          arr = Marshal.send(@method, "\004\b[\al+\a\223BwU@\006")
          arr.should == [1433879187, 1433879187]
          arr.each { |v| v.class.should == Fixnum }
        end
      end
    end
  end

  describe "for a Time" do
    it "loads" do
      Marshal.send(@method, Marshal.dump(Time.at(1))).should == Time.at(1)
    end

    it "loads serialized instance variables" do
      t = Time.new
      t.instance_variable_set(:@foo, 'bar')

      Marshal.send(@method, Marshal.dump(t)).instance_variable_get(:@foo).should == 'bar'
    end

    it "loads Time objects stored as links" do
      t = Time.new

      t1, t2 = Marshal.send(@method, Marshal.dump([t, t]))
      t1.should equal t2
    end

    it "loads the zone" do
      with_timezone 'AST', 3 do
        t = Time.local(2012, 1, 1)
        Marshal.send(@method, Marshal.dump(t)).zone.should == t.zone
      end
    end

    it "loads nanoseconds" do
      t = Time.now
      Marshal.send(@method, Marshal.dump(t)).nsec.should == t.nsec
    end
  end

  describe "for nil" do
    it "loads" do
      Marshal.send(@method, "\x04\b0").should be_nil
    end
  end

  describe "for true" do
    it "loads" do
      Marshal.send(@method, "\x04\bT").should be_true
    end
  end

  describe "for false" do
    it "loads" do
      Marshal.send(@method, "\x04\bF").should be_false
    end
  end

  describe "for a Class" do
    it "loads" do
      Marshal.send(@method, "\x04\bc\vString").should == String
    end

    it "raises ArgumentError if given the name of a non-Module" do
      lambda { Marshal.send(@method, "\x04\bc\vKernel") }.should raise_error(ArgumentError)
    end

    it "raises ArgumentError if given a nonexistent class" do
      lambda { Marshal.send(@method, "\x04\bc\vStrung") }.should raise_error(ArgumentError)
    end
  end

  describe "for a Module" do
    it "loads a module" do
      Marshal.send(@method, "\x04\bm\vKernel").should == Kernel
    end

    it "raises ArgumentError if given the name of a non-Class" do
      lambda { Marshal.send(@method, "\x04\bm\vString") }.should raise_error(ArgumentError)
    end

    it "loads an old module" do
      Marshal.send(@method, "\x04\bM\vKernel").should == Kernel
    end
  end

  describe "for a wrapped C pointer" do
    it "loads" do
      class DumpableDir < Dir
        def _dump_data
          path
        end
        def _load_data path
          initialize(path)
        end
      end

      data = "\x04\bd:\x10DumpableDirI\"\x06.\x06:\x06ET"

      dir = Marshal.send(@method, data)
      begin
        dir.path.should == '.'
      ensure
        dir.close
      end
    end

    it "raises TypeError when the local class is missing _load_data" do
      class UnloadableDumpableDir < Dir
        def _dump_data
          path
        end
        # no _load_data
      end

      data = "\x04\bd:\x1AUnloadableDumpableDirI\"\x06.\x06:\x06ET"

      lambda { Marshal.send(@method, data) }.should raise_error(TypeError)
    end

    it "raises ArgumentError when the local class is a regular object" do
      data = "\004\bd:\020UserDefined\0"

      lambda { Marshal.send(@method, data) }.should raise_error(ArgumentError)
    end
  end

  describe "when a class does not exist in the namespace" do
    before :each do
      NamespaceTest.send(:const_set, :SameName, Class.new)
      @data = Marshal.dump(NamespaceTest::SameName.new)
      NamespaceTest.send(:remove_const, :SameName)
    end

    it "raises an ArgumentError" do
      message = "undefined class/module NamespaceTest::SameName"
      lambda { Marshal.send(@method, @data) }.should raise_error(ArgumentError, message)
    end
  end

  it "raises an ArgumentError with full constant name when the dumped constant is missing" do
    NamespaceTest.send(:const_set, :KaBoom, Class.new)
    @data = Marshal.dump(NamespaceTest::KaBoom.new)
    NamespaceTest.send(:remove_const, :KaBoom)

    lambda { Marshal.send(@method, @data) }.should raise_error(ArgumentError, /NamespaceTest::KaBoom/)
  end
end
