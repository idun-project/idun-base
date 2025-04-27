BIN=..
PRGS=$(BIN)/ansitest\
$(BIN)/alive40\
$(BIN)/alive80\
$(BIN)/draw80\
$(BIN)/dstar

all: $(PRGS)

$(PRGS): $(BIN)/%: %.c a4bit.raw
	zcc +c128 -o $@ $<

clean:
	rm $(PRGS)
