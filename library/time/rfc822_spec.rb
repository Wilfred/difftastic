require File.expand_path('../../../spec_helper', __FILE__)
require File.expand_path('../shared/rfc2822', __FILE__)
require 'time'

describe "Time.rfc822" do
  it_behaves_like :time_rfc2822, :rfc822
end
