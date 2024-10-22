CC=gcc
CFLAGS=-O0 -g -std=c99 -Wall -Werror -Wextra -pedantic

all: main calc calc_adv

%: %.o
	$(CC) $(CFLAGS) -o $@ $^

%.o: src/%.c
	$(CC) $(CFLAGS) -c -o $@ $^

