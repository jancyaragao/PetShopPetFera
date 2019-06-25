PROG = PetFera
CC = g++
CPPFLAGS = -O0 -g -Wall -std=c++11 -l/./include
LDFLAGS = -L/.src -lmylib
OBJS = anfibio.o anfibioexotico.o anfibionativo.o animal.o animalexotico.o animalnativo.o animalsilvestre.o ave.o aveexcotico.o avenativo.o funcionario.o main.o mamifero.o mamiferoexotico.o mamiferonativo.o reptil.o reptilexotico.o reptilnativo.o sistema.o tratador.o veterinario.o

$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) -o $(PROG) $(OBJS)

anfibio.o : anfibio.h
	$(CC) $(CPPFLAGS) -c anfibio.cpp

anfibioexotico.o : anfibioexotico.h
	$(CC) $(CPPFLAGS) -c anfibioexotico.cpp

anfibionativo.o : anfibionativo.h
	$(CC) $(CPPFLAGS) -c anfibionativo.cpp

animal.o : animal.h
	$(CC) $(CPPFLAGS) -c animal.cpp

animalexotico.o : animalexotico.h
	$(CC) $(CPPFLAGS) -c animalexotico.cpp

animalnativo.o : animalnativo.h
	$(CC) $(CPPFLAGS) -c animalnativo.cpp

animalsilvestre.o : animalsilvestre.h
	$(CC) $(CPPFLAGS) -c animalsilvestre.cpp

ave.o : ave.h
	$(CC) $(CPPFLAGS) -c ave.cpp

aveexcotico.o : aveexcotico.h
	$(CC) $(CPPFLAGS) -c aveexcotico.cpp

avenativo.o : avenativo.h
	$(CC) $(CPPFLAGS) -c avenativo.cpp

funcionario.o : funcionario.h
	$(CC) $(CPPFLAGS) -c funcionario.cpp

main.o :
	$(CC) $(CPPFLAGS) -c main.cpp

mamifero.o : mamifero.h
	$(CC) $(CPPFLAGS) -c mamifero.cpp

mamiferoexotico.o : mamiferoexotico.h
	$(CC) $(CPPFLAGS) -c mamiferoexotico.cpp

mamiferonativo.o : mamiferonativo.h
	$(CC) $(CPPFLAGS) -c mamiferonativo.cpp

reptil.o : reptil.h
	$(CC) $(CPPFLAGS) -c reptil.cpp

reptilexotico.o : reptilexotico.h
	$(CC) $(CPPFLAGS) -c reptilexotico.cpp

reptilnativo.o : reptilnativo.h
	$(CC) $(CPPFLAGS) -c reptilnativo.cpp

sistema.o : sistema.h
	$(CC) $(CPPFLAGS) -c sistema.cpp

tratador.o : tratador.h
	$(CC) $(CPPFLAGS) -c tratador.cpp

veterinario.o : veterinario.h
	$(CC) $(CPPFLAGS) -c veterinario.cpp

clean :
	rm -f core $(PROG) $(OBJS)

# incdir=./include
# srcdir=./src
# all:
# 	g++ -std=c++11 -Wall -I ${incdir} ${srcdir}/*.cpp -o petfera