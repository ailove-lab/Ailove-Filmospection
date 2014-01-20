CC=gcc

C=
L=

SRC=filmospector.c options.c
OBJ=$(SRC:.c=.o)
EXE=filmospector

$(EXE):$(OBJ)
	$(CC) $(L) $(OBJ) -o $@

.c.o:
	$(CC) $(C) $< -o $@

clean:
	rm $(OBJ) $(EXE)