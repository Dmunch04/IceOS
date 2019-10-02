SOURCES = Boot.o Kernel.o Console.o Helper.o Colors.o

NAME = IceOS
VERSION = 0.1b1
BUILDNAME = $(NAME)-$(VERSION)

CFLAGS = nostdlib -nostdinc -fno-builtin -fno-stack-protector # we dont actually use this lol
LDFLAGS = -T Linker.ld -melf_i386
ASFLAGS = felf # or this lmao

all: $(SOURCES) link convert clean

link:
	ld $(LDFLAGS) -o IceOS.bin $(SOURCES)

convert:
	grub-mkrescue --output=../Builds/$(BUILDNAME).iso

clean:
	-rm *.o IceOS.bin
