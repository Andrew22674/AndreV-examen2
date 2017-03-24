Examen: main.o Seres.o Marina.o Pirata.o Revolucionario.o FrutaDD.o Paramecia.o Zoan.o Logia.o
	g++ main.o Seres.o Marina.o Pirata.o Revolucionario.o FrutaDD.o Paramecia.o Zoan.o Logia.o -o Examen

main.o: main.cpp Seres.h Marina.h Pirata.h Revolucionario.h FrutaDD.h Paramecia.h Zoan.h Logia.h
	g++ -c main.cpp

Seres.o: Seres.cpp Seres.h
	g++ -c Seres.cpp

Marina.o: Marina.cpp Marina.h Seres.h
	g++ -c Marina.cpp

Pirata.o: Pirata.cpp Pirata.h Seres.h
	g++ -c Pirata.cpp

Revolucionario.o: Revolucionario.cpp Revolucionario.h Seres.h
	g++ -c Revolucionario.cpp

FrutaDD.o: FrutaDD.cpp FrutaDD.h
	g++ -c FrutaDD.cpp

Paramecia.o: Paramecia.cpp Paramecia.h FrutaDD.h
	g++ -c Paramecia.cpp

Zoan.o: Zoan.cpp Zoan.h FrutaDD.h
	g++ -c Zoan.cpp

Logia.o: Logia.cpp Logia.h FrutaDD.h
	g++ -c Logia.cpp

clean:
	rm *.o Examen
