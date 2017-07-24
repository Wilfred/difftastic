class FileStat
  def self.method_missing(meth, file)
    File.lstat(file).send(meth)
  end
end
