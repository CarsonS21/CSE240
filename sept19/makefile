# arrayfuntion.o dependent on .cc and the .h
arrayfuntions.o : arrayfunctions.cc arrayfunctions.h
	g++ -Wall -std=c++17 -c $<

driver.o : driver.cc arrayfunctions.h
	g++ -Wall -std=c++17 -c $<

driver : driver.o arrayfunctions.o
	g++ -Wall -std=c++17 $^ -o $@
	./@

clean :
	rm*.o driver