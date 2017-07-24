module ThreadBacktraceLocationSpecs
  MODULE_LOCATION = caller_locations(0) rescue nil

  def self.locations
    caller_locations
  end

  def self.method_location
    caller_locations(0)
  end

  def self.block_location
    1.times do
      return caller_locations(0)
    end
  end
end
