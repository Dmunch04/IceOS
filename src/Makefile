SOURCES = boot.o kernel.o console.o helper.o colors.o

NAME = IceOS
VERSION = 0.1b2
BUILDNAME = $(NAME)-$(VERSION)

CFLAGS = nostdlib -nostdinc -fno-builtin -fno-stack-protector # we dont actually use this lol
LDFLAGS = -T linker.ld -melf_i386
ASFLAGS = felf # or this lmao

all: $(SOURCES) link convert clean

link:
	ld $(LDFLAGS) -o IceOS.bin $(SOURCES)

convert:
	grub-mkrescue --output=../dist/$(BUILDNAME).iso

clean:
	-rm *.o #IceOS.bin
