require File.expand_path('../../../../spec_helper', __FILE__)

ruby_version_is ''...'2.5' do
  require File.expand_path('../shared/sqrt', __FILE__)

  describe "Math#rsqrt" do
    it_behaves_like :mathn_math_sqrt, :_, IncludesMath.new

    it "is a private instance method" do
      IncludesMath.should have_private_instance_method(:sqrt)
    end
  end

  describe "Math.rsqrt" do
    it_behaves_like :mathn_math_sqrt, :_, Math
  end
end
