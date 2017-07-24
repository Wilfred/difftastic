require 'logger'

module LoggerSpecs

  def self.strip_date(str)
    str.gsub(/[A-Z].*\[.*\]/, "").lstrip
  end

end
