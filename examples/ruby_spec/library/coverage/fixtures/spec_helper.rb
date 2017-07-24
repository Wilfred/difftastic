module CoverageSpecs
  # Clear old results from the result hash
  # https://bugs.ruby-lang.org/issues/12220
  def self.filtered_result
    result = Coverage.result
    ruby_version_is ""..."2.4" do
      result = result.reject { |_k, v| v.empty? }
    end
    result
  end
end
