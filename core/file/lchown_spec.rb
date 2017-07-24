require File.expand_path('../../../spec_helper', __FILE__)

as_superuser do
  describe "File.lchown" do
    platform_is_not :windows do
      before :each do
        @fname = tmp('file_chown_test')
        @lname = @fname + '.lnk'

        touch(@fname) { |f| f.chown 501, 501 }

        rm_r @lname
        File.symlink @fname, @lname
      end

      after :each do
        rm_r @lname, @fname
      end

      it "changes the owner id of the file" do
        File.lchown 502, nil, @lname
        File.stat(@fname).uid.should == 501
        File.lstat(@lname).uid.should == 502
        File.lchown 0, nil, @lname
        File.stat(@fname).uid.should == 501
        File.lstat(@lname).uid.should == 0
      end

      it "changes the group id of the file" do
        File.lchown nil, 502, @lname
        File.stat(@fname).gid.should == 501
        File.lstat(@lname).gid.should == 502
        File.lchown nil, 0, @lname
        File.stat(@fname).uid.should == 501
        File.lstat(@lname).uid.should == 0
      end

      it "does not modify the owner id of the file if passed nil or -1" do
        File.lchown 502, nil, @lname
        File.lchown nil, nil, @lname
        File.lstat(@lname).uid.should == 502
        File.lchown nil, -1, @lname
        File.lstat(@lname).uid.should == 502
      end

      it "does not modify the group id of the file if passed nil or -1" do
        File.lchown nil, 502, @lname
        File.lchown nil, nil, @lname
        File.lstat(@lname).gid.should == 502
        File.lchown nil, -1, @lname
        File.lstat(@lname).gid.should == 502
      end

      it "returns the number of files processed" do
        File.lchown(nil, nil, @lname, @lname).should == 2
      end
    end
  end
end

describe "File.lchown" do
  it "needs to be reviewed for spec completeness"
end
