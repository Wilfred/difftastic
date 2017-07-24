module LanguageSpecs
  # Regexp support

  def self.paired_delimiters
    [%w[( )], %w[{ }], %w[< >], ["[", "]"]]
  end

  def self.non_paired_delimiters
    %w[~ ! # $ % ^ & * _ + ` - = " ' , . ? / | \\]
  end

  def self.blanks
    " \t"
  end

  def self.white_spaces
    return blanks + "\f\n\r\v"
  end

  def self.non_alphanum_non_space
    '~!@#$%^&*()+-\|{}[]:";\'<>?,./'
  end

  def self.punctuations
    ",.?" # TODO - Need to fill in the full list
  end

  def self.get_regexp_with_substitution o
    /#{o}/o
  end
end
