1: ajamsr2Proj7.o Island7.o
	g++ -o 1 ajamsr2Proj7.o Island7.o

ajamsr2Proj7.o: ajamsr2Proj7.cpp Island7.h
	g++ -c -std=gnu++11 ajamsr2Proj7.cpp
    
Island7.o: Island7.cpp Island7.h
	g++ -c -std=gnu++11 Island7.cpp