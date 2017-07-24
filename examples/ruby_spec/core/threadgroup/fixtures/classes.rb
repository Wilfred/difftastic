unless defined? Channel
  require 'thread'
  class Channel < Queue
    alias receive shift
  end
end
