calendar: main.o Month.o Day.o  Print.o
	g++ -g -Wall --std=c++11 -o calendar main.o Month.o Day.o Print.o

main.o : main.cpp Month.h Day.h Print.h
	g++ -g -Wall -c main.cpp --std=c++11

Month.o : Month.h Month.cpp
	g++ -g -Wall -c Month.cpp --std=c++11

Day.o : Day.h Day.cpp
	g++ -g -Wall -c --std=c++11 Day.cpp

Print.o : Print.h Print.cpp Day.h Month.h
	g++ -g -Wall -c --std=c++11 Print.cpp


clean : 
	rm *o calendar
