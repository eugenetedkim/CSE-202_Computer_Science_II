staff: main.o Employee.o Staff.o
	g++ -o staff main.o Employee.o Staff.o

main.o: main.cpp Employee.h Staff.h
	g++ -c main.cpp

Employee.o: Employee.cpp Employee.h
	g++ -c Employee.cpp

Staff.o: Staff.cpp Staff.h Employee.h
	g++ -c Staff.cpp

clean: 
	rm *.o staff
