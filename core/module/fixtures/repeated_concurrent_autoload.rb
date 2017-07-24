prev_value = ScratchPad.recorded.increment_and_get
eval <<-RUBY_EVAL
  module Mod#{prev_value}
    sleep(0.05)
    def self.foo
    end
  end
RUBY_EVAL
