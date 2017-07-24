require File.expand_path('../../../spec_helper', __FILE__)
require 'ostruct'
require File.expand_path('../fixtures/classes', __FILE__)
require File.expand_path('../shared/inspect', __FILE__)

describe "OpenStruct#inspect" do
  it_behaves_like :ostruct_inspect, :inspect
end
