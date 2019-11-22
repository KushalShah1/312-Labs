final: UtPodDriver.o UTPod.o Song.o
	g++ -std=c++11 -o test UtPodDriver.o UTPod.o Song.o
UtPodDriver.o: UtPodDriver.cpp UTPod.h Song.h
	g++ -std=c++11 -c UtPodDriver.cpp
UTPod.o: UTPod.cpp UTPod.h Song.h
	g++ -std=c++11 -c UTPod.cpp
Song.o: Song.cpp Song.h
	g++ -std=c++11 -c Song.cpp
