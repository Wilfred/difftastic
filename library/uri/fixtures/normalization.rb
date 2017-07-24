module URISpec
  # Not an exhaustive list. Refer to rfc3986
  NORMALIZED_FORMS = [
    { normalized:     "http://example.com/",
      equivalent:  %w{ hTTp://example.com/
                          http://exaMple.com/
                          http://exa%4dple.com/
                          http://exa%4Dple.com/
                          http://exa%6dple.com/
                          http://exa%6Dple.com/
                          http://@example.com/
                          http://example.com:/
                          http://example.com:80/
                          http://example.com
                        },
      different:   %w{ http://example.com/#
                          http://example.com/?
                          http://example.com:8888/
                          http:///example.com
                          http:example.com
                          https://example.com/
                        },
    },
    { normalized:     "http://example.com/index.html",
      equivalent:  %w{ http://example.com/index.ht%6dl
                          http://example.com/index.ht%6Dl
                        },
     different:    %w{ http://example.com/index.hTMl
                          http://example.com/index.ht%4dl
                          http://example.com/index
                          http://example.com/
                          http://example.com/
                        },
    },
    { normalized:     "http://example.com/x?y#z",
      equivalent:  %w{ http://example.com/x?y#%7a
                          http://example.com/x?y#%7A
                          http://example.com/x?%79#z
                        },
     different:    %w{ http://example.com/x?Y#z
                          http://example.com/x?y#Z
                          http://example.com/x?y=#z
                          http://example.com/x?y
                          http://example.com/x#z
                        },
    },
    { normalized:     "http://example.com/x?q=a%20b",
      equivalent:  %w{
                        },
      different:   %w{ http://example.com/x?q=a+b
                        },
    },
  ]
end
