main: main.o Student.o
	g++ -o main main.o Student.o

main.o: main.cpp Student.h
	g++ -c main.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp

clean:
	rm *.o main
