PROG = PetFera
CC = g++
CPPFLAGS = -O0 -g -Wall -std=c++11 -I./include
SRC = ./src
INC = ./include
# LDFLAGS = -Lsrc -lmylib
OBJS = anfibio.o anfibioexotico.o anfibionativo.o animal.o animalexotico.o animalnativo.o animalsilvestre.o ave.o aveexotico.o avenativo.o funcionario.o main.o mamifero.o mamiferoexotico.o mamiferonativo.o reptil.o reptilexotico.o reptilnativo.o sistema.o tratador.o veterinario.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

anfibio.o : $(SRC)/anfibio.cpp $(INC)/anfibio.h
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibio.cpp

anfibioexotico.o : $(SRC)/anfibioexotico.cpp $(INC)/anfibioexotico.h
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibioexotico.cpp

anfibionativo.o : $(SRC)/anfibionativo.cpp $(INC)/anfibionativo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/anfibionativo.cpp

animal.o : $(SRC)/animal.cpp $(INC)/animal.h
	$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp

animalexotico.o : $(SRC)/animalexotico.cpp $(INC)/animalexotico.h
	$(CC) $(CPPFLAGS) -c $(SRC)/animalexotico.cpp

animalnativo.o : $(SRC)/animalnativo.cpp $(INC)/animalnativo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/animalnativo.cpp

animalsilvestre.o : $(SRC)/animalsilvestre.cpp $(INC)/animalsilvestre.h
	$(CC) $(CPPFLAGS) -c $(SRC)/animalsilvestre.cpp

ave.o : $(SRC)/ave.cpp $(INC)/ave.h
	$(CC) $(CPPFLAGS) -c $(SRC)/ave.cpp

aveexotico.o : $(SRC)/aveexotico.cpp $(INC)/aveexotico.h
	$(CC) $(CPPFLAGS) -c $(SRC)/aveexotico.cpp

avenativo.o : $(SRC)/avenativo.cpp $(INC)/avenativo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/avenativo.cpp

funcionario.o : $(SRC)/funcionario.cpp $(INC)/funcionario.h
	$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp

main.o : $(SRC)/main.cpp
	$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp

mamifero.o : $(SRC)/mamifero.cpp $(INC)/mamifero.h
	$(CC) $(CPPFLAGS) -c $(SRC)/mamifero.cpp

mamiferoexotico.o : $(SRC)/mamiferoexotico.cpp $(INC)/mamiferoexotico.h
	$(CC) $(CPPFLAGS) -c $(SRC)/mamiferoexotico.cpp

mamiferonativo.o : $(SRC)/mamiferonativo.cpp $(INC)/mamiferonativo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/mamiferonativo.cpp

reptil.o : $(SRC)/reptil.cpp $(INC)/reptil.h
	$(CC) $(CPPFLAGS) -c $(SRC)/reptil.cpp

reptilexotico.o : $(SRC)/reptilexotico.cpp $(INC)/reptilexotico.h
	$(CC) $(CPPFLAGS) -c $(SRC)/reptilexotico.cpp

reptilnativo.o : $(SRC)/reptilnativo.cpp $(INC)/reptilnativo.h
	$(CC) $(CPPFLAGS) -c $(SRC)/reptilnativo.cpp

sistema.o : $(SRC)/sistema.cpp $(INC)/sistema.h
	$(CC) $(CPPFLAGS) -c $(SRC)/sistema.cpp

tratador.o : $(SRC)/tratador.cpp $(INC)/tratador.h
	$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp

veterinario.o : $(SRC)/veterinario.cpp $(INC)/veterinario.h
	$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp

clean :
	rm -f core $(PROG) $(OBJS)

# incdir=./include
# srcdir=./src
# all:
# 	g++ -std=c++11 -Wall -I ${incdir} ${srcdir}/*.cpp -o petfera