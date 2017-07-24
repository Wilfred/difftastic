module SquigglyHeredocSpecs
  def self.message
    <<~HEREDOC
      character density, n.:
        The number of very weird people in the office.
    HEREDOC
  end

  def self.blank
    <<~HERE
    HERE
  end

  def self.unquoted
    <<~HERE
      unquoted #{"interpolated"}
    HERE
  end

  def self.doublequoted
    <<~"HERE"
      doublequoted #{"interpolated"}
    HERE
  end

  def self.singlequoted
    <<~'HERE'
      singlequoted #{"interpolated"}
    HERE
  end

  def self.least_indented_on_the_last_line
    <<~HERE
          a
        b
      c
    HERE
  end
end
