module ObjectSpaceFixtures
  def self.garbage
    blah
  end

  def self.blah
    o = "hello"
    @garbage_objid = o.object_id
    return o
  end

  @last_objid = nil

  def self.last_objid
    @last_objid
  end

  def self.garbage_objid
    @garbage_objid
  end

  def self.make_finalizer
    proc { |obj_id| @last_objid = obj_id }
  end

  def self.define_finalizer
    handler = lambda { |obj| ScratchPad.record :finalized }
    ObjectSpace.define_finalizer "#{rand 5}", handler
  end

  def self.scoped(wr)
    return Proc.new { wr.write "finalized"; wr.close }
  end

  class ObjectToBeFound
    attr_reader :name

    def initialize(name)
      @name = name
    end
  end

  class ObjectWithInstanceVariable
    def initialize
      @instance_variable = ObjectToBeFound.new(:instance_variable)
    end
  end

  def self.to_be_found_symbols
    ObjectSpace.each_object(ObjectToBeFound).map do |o|
      o.name
    end
  end

  o = ObjectToBeFound.new(:captured_by_define_method)
  define_method :capturing_method do
    o
  end

  SECOND_LEVEL_CONSTANT = ObjectToBeFound.new(:second_level_constant)

end

OBJECT_SPACE_TOP_LEVEL_CONSTANT = ObjectSpaceFixtures::ObjectToBeFound.new(:top_level_constant)
