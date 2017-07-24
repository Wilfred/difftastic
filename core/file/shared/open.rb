require File.expand_path('../../../dir/fixtures/common', __FILE__)

describe :open_directory, shared: true do
  it "opens directories" do
    file = File.send(@method, tmp(""))
    begin
      file.should be_kind_of(File)
    ensure
      file.close
    end
  end
end
