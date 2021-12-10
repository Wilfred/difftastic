VERSION := 0.19.0

# install directory layout
PREFIX ?= /usr/local
INCLUDEDIR ?= $(PREFIX)/include
LIBDIR ?= $(PREFIX)/lib
PCLIBDIR ?= $(LIBDIR)/pkgconfig

# collect C++ sources, and link if necessary
CPPSRC := $(wildcard src/*.cc)

ifeq (, $(CPPSRC))
	ADDITIONALLIBS := 
else
	ADDITIONALLIBS := -lc++
endif

# collect sources
SRC := $(wildcard src/*.c)
SRC += $(CPPSRC)
OBJ := $(addsuffix .o,$(basename $(SRC)))

# ABI versioning
SONAME_MAJOR := 0
SONAME_MINOR := 0

CFLAGS ?= -O3 -Wall -Wextra -Werror
CXXFLAGS ?= -O3 -Wall -Wextra -Werror
override CFLAGS += -std=gnu99 -fPIC
override CXXFLAGS += -fPIC

# OS-specific bits
ifeq ($(shell uname),Darwin)
	SOEXT = dylib
	SOEXTVER_MAJOR = $(SONAME_MAJOR).dylib
	SOEXTVER = $(SONAME_MAJOR).$(SONAME_MINOR).dylib
	LINKSHARED += -dynamiclib -Wl,$(ADDITIONALLIBS),-install_name,$(LIBDIR)/libtree-sitter-ruby.$(SONAME_MAJOR).dylib
else
	SOEXT = so
	SOEXTVER_MAJOR = so.$(SONAME_MAJOR)
	SOEXTVER = so.$(SONAME_MAJOR).$(SONAME_MINOR)
	LINKSHARED += -shared -Wl,$(ADDITIONALLIBS),-soname,libtree-sitter-ruby.so.$(SONAME_MAJOR)
endif
ifneq (,$(filter $(shell uname),FreeBSD NetBSD DragonFly))
	PCLIBDIR := $(PREFIX)/libdata/pkgconfig
endif
				
all: libtree-sitter-ruby.a libtree-sitter-ruby.$(SOEXTVER)

libtree-sitter-ruby.a: $(OBJ)
	$(AR) rcs $@ $^

libtree-sitter-ruby.$(SOEXTVER): $(OBJ)
	$(CC) $(LDFLAGS) $(LINKSHARED) $^ $(LDLIBS) -o $@
	ln -sf $@ libtree-sitter-ruby.$(SOEXT)
	ln -sf $@ libtree-sitter-ruby.$(SOEXTVER_MAJOR)

install: all
	install -d '$(DESTDIR)$(LIBDIR)'
	install -m755 libtree-sitter-ruby.a '$(DESTDIR)$(LIBDIR)'/libtree-sitter-ruby.a
	install -m755 libtree-sitter-ruby.$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-ruby.$(SOEXTVER)
	ln -sf libtree-sitter-ruby.$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-ruby.$(SOEXTVER_MAJOR)
	ln -sf libtree-sitter-ruby.$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-ruby.$(SOEXT)
	install -d '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter
	install -m644 bindings/c/ruby.h '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/
	install -d '$(DESTDIR)$(PCLIBDIR)'
	sed -e 's|@LIBDIR@|$(LIBDIR)|;s|@INCLUDEDIR@|$(INCLUDEDIR)|;s|@VERSION@|$(VERSION)|' \
	    -e 's|=$(PREFIX)|=$${prefix}|' \
	    -e 's|@PREFIX@|$(PREFIX)|' \
	    -e 's|@ADDITIONALLIBS@|$(ADDITIONALLIBS)|' \
	    bindings/c/tree-sitter-ruby.pc.in > '$(DESTDIR)$(PCLIBDIR)'/tree-sitter-ruby.pc

clean:
	rm -f $(OBJ) libtree-sitter-ruby.a libtree-sitter-ruby.$(SOEXT) libtree-sitter-ruby.$(SOEXTVER_MAJOR) libtree-sitter-ruby.$(SOEXTVER)

.PHONY: all install clean
