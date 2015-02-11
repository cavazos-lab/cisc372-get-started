
all: vectadd

check: check-vectadd

clean: clean-vectadd

%.o: %.c
	gcc -c $< -o $@

vectadd: vectadd.o
	gcc vectadd.o -o vectadd

check-vectadd: vectadd
	./vectadd 100

clean-vectadd:
	rm -rf vectadd 

