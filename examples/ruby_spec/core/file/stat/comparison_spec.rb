require File.expand_path('../../../../spec_helper', __FILE__)

describe "File::Stat#<=>" do
  before :each do
    @name1 = tmp("i_exist")
    @name2 = tmp("i_exist_too")
    touch @name1
    touch @name2
  end

  after :each do
    rm_r @name1, @name2
  end

  it "is able to compare files by the same modification times" do
    now = Time.now - 1 # 1 second ago to avoid NFS cache issue
    File.utime(now, now, @name1)
    File.utime(now, now, @name2)

    File.open(@name1) { |file1|
      File.open(@name2) { |file2|
        (file1.stat <=> file2.stat).should == 0
      }
    }
  end

  it "is able to compare files by different modification times" do
    now = Time.now
    File.utime(now, now + 100, @name2)

    File.open(@name1) { |file1|
      File.open(@name2) { |file2|
        (file1.stat <=> file2.stat).should == -1
      }
    }

    File.utime(now, now - 100, @name2)

    File.open(@name1) { |file1|
      File.open(@name2) { |file2|
        (file1.stat <=> file2.stat).should == 1
      }
    }
  end

  # TODO: Fix
  it "includes Comparable and #== shows mtime equality between two File::Stat objects" do
    File.open(@name1) { |file1|
      File.open(@name2) { |file2|
        (file1.stat == file1.stat).should == true
        (file2.stat == file2.stat).should == true
      }
    }

    now = Time.now
    File.utime(now, now + 100, @name2)

    File.open(@name1) { |file1|
      File.open(@name2) { |file2|
        (file1.stat == file2.stat).should == false
        (file1.stat == file1.stat).should == true
        (file2.stat == file2.stat).should == true
      }
    }
  end
end
