main: main.o Instructor.o Student.o Person.o
	g++ -o main main.o Instructor.o Student.o Person.o

main.o: main.cpp Instructor.h Student.h Person.h
	g++ -c main.cpp

Instructor.o: Instructor.cpp Instructor.h Student.h Person.h
	g++ -c Instructor.cpp

Student.o: Student.cpp Student.h Person.h
	g++ -c Student.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

clean:
	rm*.o main
