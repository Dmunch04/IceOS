# Go to the source folder
cd src

# Build the Bootloader file
nasm -f elf boot.asm -o boot.o

# Build all the C++ OS files
g++ -c kernel.cpp -o kernel.o -ffreestanding -fno-exceptions -fno-rtti -m32
g++ -c console.cpp -o console.o -ffreestanding -fno-exceptions -fno-rtti -m32
g++ -c helper.cpp -o helper.o -ffreestanding -fno-exceptions -fno-rtti -m32
g++ -c colors.cpp -o colors.o -ffreestanding -fno-exceptions -fno-rtti -m32

# Run the makefile, which will finish things up, make the iso file and clean up
make
