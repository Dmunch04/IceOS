# Go to the source folder
cd Source

# Build the Bootloader file
nasm -f elf Boot.asm -o Boot.o

# Build all the C++ OS files
g++ -c Kernel.cpp -o Kernel.o -ffreestanding -fno-exceptions -fno-rtti -m32
g++ -c Console.cpp -o Console.o -ffreestanding -fno-exceptions -fno-rtti -m32
g++ -c Helper.cpp -o Helper.o -ffreestanding -fno-exceptions -fno-rtti -m32
g++ -c Colors.cpp -o Colors.o -ffreestanding -fno-exceptions -fno-rtti -m32

# Run the makefile, which will finish things up, make the iso file and clean up
make
