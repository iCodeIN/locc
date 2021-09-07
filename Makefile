include config.mk
BIN=locc


all:
	$(CC) src/main.c -o $(BIN)


install:
	@cp $(BIN) $(DESTDIR)$(PREFIX)/bin/$(BIN)
	@chmod 755 $(DESTDIR)$(PREFIX)/bin/$(BIN)


uninstall:
	@rm -f $(DESTDIR)$(PREFIX)/bin/$(BIN)

hash:
	cc src/exthash/main.c -o hasher
	./hasher
	mv hash.h src
