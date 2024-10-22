CC=gcc
CFLAGS=-O0 -std=c99 -Wall -Werror -Wextra -pedantic
BUILD=build
BINS=main calc calc_adv

all: $(BINS)

%: $(BUILD)/%.o
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD)/%.o: src/%.c | $(BUILD)
	$(CC) $(CFLAGS) -c -o $@ $^

$(BUILD):
	mkdir -p build

clean:
	rm $(BINS)
