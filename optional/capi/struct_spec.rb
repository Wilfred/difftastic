require File.expand_path('../spec_helper', __FILE__)

load_extension("struct")

describe "C-API Struct function" do
  before :each do
    @s = CApiStructSpecs.new
    @struct = @s.rb_struct_define("CAPIStruct", "a", "b", "c")
  end

  after :each do
    Struct.send(:remove_const, :CAPIStruct)
  end

  describe "rb_struct_define" do
    it "creates accessors for the struct members" do
      instance = @struct.new
      instance.a = 1
      instance.b = 2
      instance.c = 3
      instance.a.should == 1
      instance.b.should == 2
      instance.c.should == 3
    end

    it "has a value of nil for the member of a newly created instance" do
      # Verify that attributes are on an instance basis
      Struct::CAPIStruct.new.b.should be_nil
    end

    it "creates a constant scoped under Struct for the named Struct" do
      Struct.should have_constant(:CAPIStruct)
    end

    it "returns the member names as Symbols" do
      @struct.members.should == [:a, :b, :c]
    end
  end
end

describe "C-API Struct function" do
  before :each do
    @s = CApiStructSpecs.new
    @struct = @s.rb_struct_define(nil, "a", "b", "c")
  end

  describe "rb_struct_define for an anonymous struct" do
    it "creates accessors for the struct members" do
      instance = @struct.new
      instance.a = 1
      instance.b = 2
      instance.c = 3
      instance.a.should == 1
      instance.b.should == 2
      instance.c.should == 3
    end

    it "returns the member names as Symbols" do
      @struct.members.should == [:a, :b, :c]
    end
  end
end

describe "C-API Struct function" do
  before :each do
    @s = CApiStructSpecs.new
    @struct = @s.rb_struct_define_under(CApiStructSpecs, "CAPIStruct", "a", "b", "c")
  end

  describe "rb_struct_define_under" do
    it "creates accessors for the struct members" do
      instance = @struct.new
      instance.a = 1
      instance.b = 2
      instance.c = 3
      instance.a.should == 1
      instance.b.should == 2
      instance.c.should == 3
    end

    it "has a value of nil for the member of a newly created instance" do
      # Verify that attributes are on an instance basis
      CApiStructSpecs::CAPIStruct.new.b.should be_nil
    end

    it "creates a constant scoped under the namespace of the given class" do
      CApiStructSpecs.should have_constant(:CAPIStruct)
    end

    it "returns the member names as Symbols" do
      @struct.members.should == [:a, :b, :c]
    end
  end
end

describe "C-API Struct function" do
  before :each do
    @s = CApiStructSpecs.new
    @klass = Struct.new(:a, :b, :c)
    @struct = @klass.new
  end

  describe "rb_struct_define" do
    it "raises an ArgumentError if arguments contain duplicate member name" do
      lambda { @s.rb_struct_define(nil, "a", "b", "a") }.should raise_error(ArgumentError)
    end

    it "raises a NameError if an invalid constant name is given" do
      lambda { @s.rb_struct_define("foo", "a", "b", "c") }.should raise_error(NameError)
    end
  end

  describe "rb_struct_aref" do
    it "returns the value of a struct member with a symbol key" do
      @struct[:a] = 2
      @s.rb_struct_aref(@struct, :a).should == 2
    end

    it "returns the value of a struct member with a string key" do
      @struct[:b] = 2
      @s.rb_struct_aref(@struct, "b").should == 2
    end

    it "returns the value of a struct member by index" do
      @struct[:c] = 3
      @s.rb_struct_aref(@struct, 2).should == 3
    end

    it "raises a NameError if the struct member does not exist" do
      lambda { @s.rb_struct_aref(@struct, :d) }.should raise_error(NameError)
    end

    it "raises an IndexError if the given index is out of range" do
      lambda { @s.rb_struct_aref(@struct, -4) }.should raise_error(IndexError)
      lambda { @s.rb_struct_aref(@struct, 3) }.should raise_error(IndexError)
    end
  end

  describe "rb_struct_getmember" do
    it "returns the value of a struct member" do
      @struct[:a] = 2
      @s.rb_struct_getmember(@struct, :a).should == 2
    end

    it "raises a NameError if the struct member does not exist" do
      lambda { @s.rb_struct_getmember(@struct, :d) }.should raise_error(NameError)
    end
  end

  describe "rb_struct_s_members" do
    it "returns the struct members as an array of symbols" do
      @s.rb_struct_s_members(@klass).should == [:a, :b, :c]
    end
  end

  describe "rb_struct_members" do
    it "returns the struct members as an array of symbols" do
      @s.rb_struct_members(@struct).should == [:a, :b, :c]
    end
  end

  describe "rb_struct_aset" do
    it "sets the value of a struct member with a symbol key" do
      @s.rb_struct_aset(@struct, :a, 1)
      @struct[:a].should == 1
    end

    it "sets the value of a struct member with a string key" do
      @s.rb_struct_aset(@struct, "b", 1)
      @struct[:b].should == 1
    end

    it "sets the value of a struct member by index" do
      @s.rb_struct_aset(@struct, 2, 1)
      @struct[:c].should == 1
    end

    it "raises a NameError if the struct member does not exist" do
      lambda { @s.rb_struct_aset(@struct, :d, 1) }.should raise_error(NameError)
    end

    it "raises an IndexError if the given index is out of range" do
      lambda { @s.rb_struct_aset(@struct, -4, 1) }.should raise_error(IndexError)
      lambda { @s.rb_struct_aset(@struct, 3, 1) }.should raise_error(IndexError)
    end

    it "raises a RuntimeError if the struct is frozen" do
      @struct.freeze
      lambda { @s.rb_struct_aset(@struct, :a, 1) }.should raise_error(RuntimeError)
    end
  end

  describe "rb_struct_new" do
    it "creates a new instance of a struct" do
      i = @s.rb_struct_new(@klass, 1, 2, 3)
      i.a.should == 1
      i.b.should == 2
      i.c.should == 3
    end
  end

  ruby_version_is "2.4" do
    describe "rb_struct_size" do
      it "returns the number of struct members" do
        @s.rb_struct_size(@struct).should == 3
      end
    end
  end
end
