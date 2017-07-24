module KernelSpecs
  class CallerTest
    def self.locations(*args)
      caller(*args)
    end
  end
end
