require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#birthtime" do
  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.write "rubinius" }
  end

  after :each do
    rm_r @file
  end

  platform_is :windows, :darwin, :freebsd, :netbsd do
    it "returns the birthtime of a File::Stat object" do
      st = File.stat(@file)
      st.birthtime.should be_kind_of(Time)
      st.birthtime.should <= Time.now
    end
  end

  platform_is :linux, :openbsd do
    it "raises an NotImplementedError" do
      st = File.stat(@file)
      lambda { st.birthtime }.should raise_error(NotImplementedError)
    end
  end
end
