all: Vtest Itest Ttest Stest Dtest DtestGiven

Vtest: Vtest.o  # test program for Weiss' Vector class.
	g++ -Wall -o Vtest Vtest.o  

Itest: Itest.o  # test program for Int Minimal Vector class.
	g++ -Wall -o Itest Itest.o  

Ttest: Ttest.o  # test program for Templated Minimal Vector class
	g++ -Wall -o Ttest Ttest.o  

Stest: Stest.o  # test program for Stack class 
	g++ -Wall -o Stest Stest.o  

##g++ -Wall -o Qtest Qtest.o  

Dtest: Dtest.o  # test program for Deque class
	g++ -Wall -o Dtest Dtest.o  

DtestGiven: DtestGiven.o
	g++ -Wall -o DtestGiven DtestGiven.o


Vtest.o: Vtest.cpp Vector.h dsexceptions.h
	g++ -Wall -o Vtest.o -c Vtest.cpp 

Itest.o: Itest.cpp Ivector.h dsexceptions.h
	g++ -Wall -o Itest.o -c Itest.cpp 

Ttest.o: Ttest.cpp TVector.h dsexceptions.h
	g++ -Wall -o Ttest.o -c Ttest.cpp 

Stest.o: Stest.cpp Stack.h dsexceptions.h
	g++ -Wall -o Stest.o -c Stest.cpp 

#Qtest.o: Qtest.cpp Queue.h dsexceptions.h
#	g++ -Wall -o Qtest.o -c Qtest.cpp 

Dtest.o: Dtest.cpp Deque.h dsexceptions.h
	g++ -Wall -o Dtest.o -c Dtest.cpp 

DtestGiven.o: Dtest.cpp Deque.h dsexceptions.h
	g++ -Wall -o DtestGiven.o -c DtestGiven.cpp

clean:
	rm -f Vtest Itest Ttest Stest Dtest DtestGiven *.o
