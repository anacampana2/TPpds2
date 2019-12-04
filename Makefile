all: personagem.o demonio.o lobo.o rei_demonio.o roladados.o
	g++ -o main personagem.o demonio.o lobo.o rei_demonio.o roladados.o

personagem.o: peronagem.cpp personagem.h demonio.cpp demonio.h lobo.cpp lobo.h rei_demonio.cpp rei_demonio.h
	g++ -c personagem.cpp

demonio.o: demonio.cpp demonio.h
	g++ -c demonio.cpp

lobo.o: lobo.cpp lobo.h
	g++ -c loboo.cpp

rei_demonio.o: rei_demonio.cpp rei_demonio.h
	g++ -c rei_demonio.cpp

main.o: main.cpp pessoa.h rei_demonio.h demonio.h lobo.h
	g++ -c main.cpp

clean:
	rm -rf *.o

vai:
	./main