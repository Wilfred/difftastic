require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/windows', __FILE__)
require 'etc'

describe "Etc.getpwent" do
  it_behaves_like(:etc_on_windows, :getpwent)
end
