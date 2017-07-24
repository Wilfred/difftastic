describe :file_grpowned, shared: true do
  before :each do
    @file = tmp('i_exist')
    touch(@file) { |f| f.puts "file_content" }
    File.chown(nil, Process.gid, @file) rescue nil
  end

  after :each do
    rm_r @file
  end

  platform_is_not :windows do
    it "returns true if the file exist" do
      @object.send(@method, @file).should be_true
    end

    it "accepts an object that has a #to_path method" do
      @object.send(@method, mock_to_path(@file)).should be_true
    end

    it 'takes non primary groups into account' do
      group = (Process.groups - [Process.egid]).first

      if group
        File.chown(nil, group, @file)

        @object.send(@method, @file).should == true
      else
        # No supplementary groups
        1.should == 1
      end
    end
  end

  platform_is :windows do
    it "returns false if the file exist" do
      @object.send(@method, @file).should be_false
    end
  end
end
