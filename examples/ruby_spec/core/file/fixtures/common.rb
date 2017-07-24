module FileSpecs
  class SubString < String; end

  def self.make_closer(obj, exc=nil)
    ScratchPad << :file_opened

    class << obj
      attr_accessor :close_exception

      alias_method :original_close, :close

      def close
        original_close
        ScratchPad << :file_closed

        raise @close_exception if @close_exception
      end
    end

    obj.close_exception = exc
  end
end
