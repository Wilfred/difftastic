require File.expand_path('../../../spec_helper', __FILE__)

describe :file_world_readable, shared: true do

  before :each do
    @file = tmp('world-readable')
    touch @file
  end

  after :each do
    rm_r @file
  end

  platform_is_not :windows do
    it "returns nil if the file is chmod 600" do
      File.chmod(0600, @file)
      @object.world_readable?(@file).should be_nil
    end

    it "returns nil if the file is chmod 000" do
      File.chmod(0000, @file)
      @object.world_readable?(@file).should be_nil
    end

    it "returns nil if the file is chmod 700" do
      File.chmod(0700, @file)
      @object.world_readable?(@file).should be_nil
    end
  end

  # We don't specify what the Fixnum is because it's system dependent
  it "returns a Fixnum if the file is chmod 644" do
    File.chmod(0644, @file)
    @object.world_readable?(@file).should be_an_instance_of(Fixnum)
  end

  it "returns a Fixnum if the file is a directory and chmod 644" do
    dir = rand().to_s + '-ww'
    Dir.mkdir(dir)
    Dir.exist?(dir).should be_true
    File.chmod(0644, dir)
    @object.world_readable?(dir).should be_an_instance_of(Fixnum)
    Dir.rmdir(dir)
  end

  it "coerces the argument with #to_path" do
    @object.world_readable?(mock_to_path(@file))
  end
end
