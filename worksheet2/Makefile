ASM=nasm
ASM_FLAGS=-f elf
LD=ld
LD_FLAGS=-T ./source/link.ld -melf_i386

all: os.iso

loader.o: loader.asm
	$(ASM) $(ASM_FLAGS) loader.asm -o loader.o

kernel.elf: loader.o
	$(LD) $(LD_FLAGS) loader.o -o kernel.elf


move: kernel.elf iso/boot
	mv kernel.elf iso/boot/


os.iso: move
	genisoimage -R \
	-b boot/grub/stage2_eltorito \
	-no-emul-boot \
	-boot-load-size 4 \
	-A os \
	-input-charset utf8 \
	-quiet \
	-boot-info-table \
	-o os.iso \
	iso

clean:
	rm -f loader.o kernel.elf iso/boot/kernel.elf os.iso
