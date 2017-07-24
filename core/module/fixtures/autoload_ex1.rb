
class ModuleSpecs::Autoload::EX1 < Exception
  def self.trample1
    1.times { return }
  end

  def self.trample2
    begin
      raise "hello"
    rescue
    end
  end

  trample1
  trample2
end
