AS = nasm	# assembler
CC = gcc	# compiler
ASFLAGS = -f elf32	# assembler flag
CFLAGS = -m32		#compiler flag

#	targets
all: loader.o

#	Obj files
loader.o: loader.asm
	$(AS) $(ASFLAGS) loader.asm -o loader.o

clean:
	rm -f *.o *.elf