# Riles Terrible makefile
CPPC = g++ -std=c++11 -Wall -Wextra

test_inventory: main.o staff.o sword.o
	${CPPC} main.o staff.o sword.o -o test_inventory
main.o: sources/main.cpp includes/item.h
	${CPPC} -c sources/main.cpp includes/item.h
staff.o: sources/staff.cpp includes/item.h
	${CPPC} -c sources/staff.cpp includes/item.h
sword.o: sources/staff.cpp includes/item.h
	${CPPC} -c sources/sword.cpp includes/item.h
clean:
	rm *.o && rm test_inventory
