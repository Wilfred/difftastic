CCFLAGS+=-std=c99 -D_DEFAULT_SOURCE -DVERSION=\"$(VERS)\" -O2 -Wall -Werror -D_FORTIFY_SOURCE=2 -fstack-protector-all $(CFLAGS) -g
