module WIN32OLESpecs
  def self.new_ole(name)
    retried = false
    begin
      WIN32OLE.new(name)
    rescue WIN32OLERuntimeError => e
      unless retried
        retried = true
        retry
      end
      raise e
    end
  end
end
