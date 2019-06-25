PROG = PetFera
CC = g++
CPPFLAGS = -O0 -g -Wall -std=c++11 -I./include
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./obj
# LDFLAGS = -Lsrc -lmylib
OBJS = $(OBJ)/anfibio.o $(OBJ)/anfibioexotico.o $(OBJ)/anfibionativo.o $(OBJ)/animal.o $(OBJ)/animalexotico.o $(OBJ)/animalnativo.o $(OBJ)/animalsilvestre.o $(OBJ)/ave.o $(OBJ)/aveexotico.o $(OBJ)/avenativo.o $(OBJ)/funcionario.o $(OBJ)/main.o $(OBJ)/mamifero.o $(OBJ)/mamiferoexotico.o $(OBJ)/mamiferonativo.o $(OBJ)/reptil.o $(OBJ)/reptilexotico.o $(OBJ)/reptilnativo.o $(OBJ)/sistema.o $(OBJ)/tratador.o $(OBJ)/veterinario.o

$(PROG) : $(OBJS)
	@$(CC) $(OBJS) -o $(BIN)/$(PROG)

$(OBJ)/anfibio.o : $(SRC)/anfibio.cpp $(INC)/anfibio.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/anfibio.cpp -o $(OBJ)/$@

$(OBJ)/anfibioexotico.o : $(SRC)/anfibioexotico.cpp $(INC)/anfibioexotico.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/anfibioexotico.cpp -o $(OBJ)/$@

$(OBJ)/anfibionativo.o : $(SRC)/anfibionativo.cpp $(INC)/anfibionativo.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/anfibionativo.cpp -o $(OBJ)/$@

$(OBJ)/animal.o : $(SRC)/animal.cpp $(INC)/animal.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $(OBJ)/$@

$(OBJ)/animalexotico.o : $(SRC)/animalexotico.cpp $(INC)/animalexotico.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/animalexotico.cpp -o $(OBJ)/$@

$(OBJ)/animalnativo.o : $(SRC)/animalnativo.cpp $(INC)/animalnativo.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/animalnativo.cpp -o $(OBJ)/$@

$(OBJ)/animalsilvestre.o : $(SRC)/animalsilvestre.cpp $(INC)/animalsilvestre.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/animalsilvestre.cpp -o $(OBJ)/$@

$(OBJ)/ave.o : $(SRC)/ave.cpp $(INC)/ave.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/ave.cpp -o $(OBJ)/$@

$(OBJ)/aveexotico.o : $(SRC)/aveexotico.cpp $(INC)/aveexotico.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/aveexotico.cpp -o $(OBJ)/$@

$(OBJ)/avenativo.o : $(SRC)/avenativo.cpp $(INC)/avenativo.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/avenativo.cpp -o $(OBJ)/$@

$(OBJ)/funcionario.o : $(SRC)/funcionario.cpp $(INC)/funcionario.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $(OBJ)/$@

$(OBJ)/main.o : $(SRC)/main.cpp
	@$(CC) $(CPPFLAGS) -c $(SRC)/main.cpp -o $(OBJ)/$@

$(OBJ)/mamifero.o : $(SRC)/mamifero.cpp $(INC)/mamifero.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/mamifero.cpp -o $(OBJ)/$@

$(OBJ)/mamiferoexotico.o : $(SRC)/mamiferoexotico.cpp $(INC)/mamiferoexotico.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/mamiferoexotico.cpp -o $(OBJ)/$@

$(OBJ)/mamiferonativo.o : $(SRC)/mamiferonativo.cpp $(INC)/mamiferonativo.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/mamiferonativo.cpp -o $(OBJ)/$@

$(OBJ)/reptil.o : $(SRC)/reptil.cpp $(INC)/reptil.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/reptil.cpp -o $(OBJ)/$@

$(OBJ)/reptilexotico.o : $(SRC)/reptilexotico.cpp $(INC)/reptilexotico.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/reptilexotico.cpp -o $(OBJ)/$@

$(OBJ)/reptilnativo.o : $(SRC)/reptilnativo.cpp $(INC)/reptilnativo.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/reptilnativo.cpp -o $(OBJ)/$@

$(OBJ)/sistema.o : $(SRC)/sistema.cpp $(INC)/sistema.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/sistema.cpp -o $(OBJ)/$@

$(OBJ)/tratador.o : $(SRC)/tratador.cpp $(INC)/tratador.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp -o $(OBJ)/$@

$(OBJ)/veterinario.o : $(SRC)/veterinario.cpp $(INC)/veterinario.h
	@$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp -o $(OBJ)/$@

clean :
	rm -f core $(PROG) $(OBJS)

# incdir=./include
# srcdir=./src
# all:
# 	g++ -std=c++11 -Wall -I ${incdir} ${srcdir}/*.cpp -o petfera
