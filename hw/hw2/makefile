Course: main.o Course.o Student.o
	g++ -o Course main.o Course.o Student.o

main.o: main.cpp Course.h Student.h
	g++ -c main.cpp

Course.o: Course.cpp Course.h Student.h
	g++ -c Course.cpp

Student.o: Student.cpp Student.h
	g++ -c Student.cpp

clean:
	rm *.o Course
