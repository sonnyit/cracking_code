CC = g++
CFLAGS = -std=c++11 -Wall

SRCS = main.cpp

OBJS = $(SRCS:.c=.o)

MAIN = exec

all: $(MAIN)
	@echo compile completed!

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) -o $(MAIN) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) *.o *~ $(MAIN)
