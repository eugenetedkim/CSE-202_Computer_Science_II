clocks1: clocks1.o Clock.o ccc_time.o
	g++ -o clocks1 clocks1.o Clock.o ccc_time.o

clocks1.o: clocks1.cpp Clock.h ccc_time.h
	g++ -c clocks1.cpp

Clock.o: Clock.cpp Clock.h ccc_time.h
	g++ -oc Clock.cpp

ccc_time.o: ccc_time.cpp ccc_time.h
	g++ -c ccc_time.cpp

clean:
	rm *.o clocks1
