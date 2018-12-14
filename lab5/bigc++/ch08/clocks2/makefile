clocks2: clocks2.o TravelClock.o Clock.o ccc_time.o
	g++ -o clocks2 clocks2.o TravelClock.o Clock.o ccc_time.o

clocks2.o: clocks2.cpp TravelClock.h Clock.h ccc_time.h
	g++ -c clocks2.cpp

TravelClock.o: TravelClock.cpp TravelClock.h Clock.h ccc_time.h
	g++ -c TravelClock.cpp

Clock.o: Clock.cpp Clock.h ccc_time.h
	g++ -c Clock.cpp

ccc_time.o: ccc_time.cpp ccc_time.h
	g++ -c ccc_time.cpp

clean:
	rm*.o clocks2
