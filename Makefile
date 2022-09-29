all: Dtest DtestGiven

#Itest: Itest.o  # test program for Int Minimal Vector class.
#//	g++ -Wall -o Itest Itest.o  

##g++ -Wall -o Qtest Qtest.o  

Dtest: Dtest.o  # test program for Deque class
	g++ -Wall -o Dtest Dtest.o  

DtestGiven: DtestGiven.o
	g++ -Wall -o DtestGiven DtestGiven.o


Dtest.o: Dtest.cpp Deque.h dsexceptions.h
	g++ -Wall -o Dtest.o -c Dtest.cpp 

DtestGiven.o: Dtest.cpp Deque.h dsexceptions.h
	g++ -Wall -o DtestGiven.o -c DtestGiven.cpp

clean:
	rm -f Dtest DtestGiven *.o
