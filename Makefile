# Riles Terrible makefile
CPPC = g++ -std=c++11 -Wall -Wextra

test_inventory: objects/main.o objects/staff.o objects/sword.o
	${CPPC} objects/main.o objects/staff.o objects/sword.o -o test_inventory
objects/main.o: sources/main.cpp includes/item.h
	${CPPC} -c sources/main.cpp includes/item.h
objects/staff.o: sources/staff.cpp includes/item.h
	${CPPC} -c sources/staff.cpp includes/item.h
objects/sword.o: sources/staff.cpp includes/item.h
	${CPPC} -c sources/sword.cpp includes/item.h
