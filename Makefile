cc = gcc

CFLAGS = -Iinclude -Wall         #compiler flags

OBJ = src/main.o src/maze.o src/player.o src/game.o   #objects

all: dungeon.exe

dungeon.exe: $(OBJ)                       # linking step
	$(cc) $(OBJ) -o dungeon.exe

src/%.o: src/%.c                          #compilation step  
	$(cc) $(CFLAGS) -c $< -o $@

clean:
	rm -f src/*.o dungeon.exeS