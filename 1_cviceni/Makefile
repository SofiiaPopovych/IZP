CC      = gcc
CFLAGS  = -Werror -Wextra -Wall -std=c99
RM      = rm -f
FILE	= maximum


default: all

all: compile

run: runPrograme

compile: $(FILE).c
	$(CC) $(CFLAGS) -o $(FILE) $(FILE).c

clean veryclean:
	$(RM) $(FILE)

runPrograme:
	./$(FILE)

zip:
	zip cviceni1.zip $(FILE).c