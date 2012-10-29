OBJS = src/main.cpp
CC = g++
FLAGS = -o

PROGRAM: $(OBJS)
	$(CC) $(OBJS) $(FLAGS) bin/PROGRAM
