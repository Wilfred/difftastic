VERSION := 0.19.1

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
	LINKSHARED += -dynamiclib -Wl,$(ADDITIONALLIBS),-install_name,$(LIBDIR)/libtree-sitter-go.$(SONAME_MAJOR).dylib
else
	SOEXT = so
	SOEXTVER_MAJOR = so.$(SONAME_MAJOR)
	SOEXTVER = so.$(SONAME_MAJOR).$(SONAME_MINOR)
	LINKSHARED += -shared -Wl,$(ADDITIONALLIBS),-soname,libtree-sitter-go.so.$(SONAME_MAJOR)
endif
ifneq (,$(filter $(shell uname),FreeBSD NetBSD DragonFly))
	PCLIBDIR := $(PREFIX)/libdata/pkgconfig
endif
				
all: libtree-sitter-go.a libtree-sitter-go.$(SOEXTVER)

libtree-sitter-go.a: $(OBJ)
	$(AR) rcs $@ $^

libtree-sitter-go.$(SOEXTVER): $(OBJ)
	$(CC) $(LDFLAGS) $(LINKSHARED) $^ $(LDLIBS) -o $@
	ln -sf $@ libtree-sitter-go.$(SOEXT)
	ln -sf $@ libtree-sitter-go.$(SOEXTVER_MAJOR)

install: all
	install -d '$(DESTDIR)$(LIBDIR)'
	install -m755 libtree-sitter-go.a '$(DESTDIR)$(LIBDIR)'/libtree-sitter-go.a
	install -m755 libtree-sitter-go.$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-go.$(SOEXTVER)
	ln -sf libtree-sitter-go.$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-go.$(SOEXTVER_MAJOR)
	ln -sf libtree-sitter-go.$(SOEXTVER) '$(DESTDIR)$(LIBDIR)'/libtree-sitter-go.$(SOEXT)
	install -d '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter
	install -m644 bindings/c/go.h '$(DESTDIR)$(INCLUDEDIR)'/tree_sitter/
	install -d '$(DESTDIR)$(PCLIBDIR)'
	sed -e 's|@LIBDIR@|$(LIBDIR)|;s|@INCLUDEDIR@|$(INCLUDEDIR)|;s|@VERSION@|$(VERSION)|' \
	    -e 's|=$(PREFIX)|=$${prefix}|' \
	    -e 's|@PREFIX@|$(PREFIX)|' \
	    -e 's|@ADDITIONALLIBS@|$(ADDITIONALLIBS)|' \
	    bindings/c/tree-sitter-go.pc.in > '$(DESTDIR)$(PCLIBDIR)'/tree-sitter-go.pc

clean:
	rm -f $(OBJ) libtree-sitter-go.a libtree-sitter-go.$(SOEXT) libtree-sitter-go.$(SOEXTVER_MAJOR) libtree-sitter-go.$(SOEXTVER)

.PHONY: all install clean
