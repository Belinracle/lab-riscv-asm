.PHONY: clean

DUMP=acLab1.dump
EXECUTABLE=acLab1.elf
MAIN=acLab1.c

all: $(EXECUTABLE) $(DUMP) 

%.elf : %.c
	@riscv64-unknown-elf-gcc -march=rv32i -mabi=ilp32 $(MAIN) -o $(EXECUTABLE)

%.dump: %.elf
	@riscv64-unknown-elf-objdump -D $(EXECUTABLE) > $(DUMP)

clean:
	@rm -f $(DUMP)
	@rm -f $(EXECUTABLE)
