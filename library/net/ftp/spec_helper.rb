require "net/ftp"

if defined?(Net::FTP.default_passive)
  Net::FTP.default_passive = false
end
