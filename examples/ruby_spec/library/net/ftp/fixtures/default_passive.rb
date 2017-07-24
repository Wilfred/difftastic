require "net/ftp"
puts Net::FTP.default_passive
puts Net::FTP.new.passive
