PROG = PetFera
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic -ansi -std=c++11 -I./include
ARCHIVE = ar

LIBDIR = ./lib
SRC = ./src
INC = ./include
BIN = ./bin
OBJ = ./obj
# LDFLAGS = -Lsrc -lmylib
OBJS = $(OBJ)/anfibio.o $(OBJ)/anfibioexotico.o $(OBJ)/anfibionativo.o $(OBJ)/animal.o $(OBJ)/animalexotico.o $(OBJ)/animalnativo.o $(OBJ)/animalsilvestre.o $(OBJ)/ave.o $(OBJ)/aveexotico.o $(OBJ)/avenativo.o $(OBJ)/funcionario.o $(OBJ)/mamifero.o $(OBJ)/mamiferoexotico.o $(OBJ)/mamiferonativo.o $(OBJ)/reptil.o $(OBJ)/reptilexotico.o $(OBJ)/reptilnativo.o $(OBJ)/sistema.o $(OBJ)/tratador.o $(OBJ)/veterinario.o
SRCS = $(SRC)/anfibio.cpp $(SRC)/anfibioexotico.cpp $(SRC)/anfibionativo.cpp $(SRC)/animal.cpp $(SRC)/animalexotico.cpp $(SRC)/animalnativo.cpp $(SRC)/animalsilvestre.cpp $(SRC)/ave.cpp $(SRC)/aveexotico.cpp $(SRC)/avenativo.cpp $(SRC)/funcionario.cpp $(SRC)/main.cpp $(SRC)/mamifero.cpp $(SRC)/mamiferoexotico.cpp $(SRC)/mamiferonativo.cpp $(SRC)/reptil.cpp $(SRC)/reptilexotico.cpp $(SRC)/reptilnativo.cpp $(SRC)/sistema.cpp $(SRC)/tratador.cpp $(SRC)/veterinario.cpp
INCS = $(INC)/anfibio.h $(INC)/anfibioexotico.h $(INC)/anfibionativo.h $(INC)/animal.h $(INC)/animalexotico.h $(INC)/animalnativo.h $(INC)/animalsilvestre.h $(INC)/ave.h $(INC)/aveexotico.h $(INC)/avenativo.h $(INC)/funcionario.h $(INC)/mamifero.h $(INC)/mamiferoexotico.h $(INC)/mamiferonativo.h $(INC)/reptil.h $(INC)/reptilexotico.h $(INC)/reptilnativo.h $(INC)/sistema.h $(INC)/tratador.h $(INC)/veterinario.h

#$(PROG) : $(OBJS)
#	@$(CC) $(OBJS) -o $(BIN)/$(PROG)

janloti.a: $(SRCS) $(INCS)
	@$(CC) $(CPPFLAGS) -c $(SRC)/anfibio.cpp -o $(OBJ)/anfibio.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/anfibioexotico.cpp -o $(OBJ)/anfibioexotico.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/anfibionativo.cpp -o $(OBJ)/anfibionativo.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/animal.cpp -o $(OBJ)/animal.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/animalexotico.cpp -o $(OBJ)/animalexotico.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/animalnativo.cpp -o $(OBJ)/animalnativo.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/animalsilvestre.cpp -o $(OBJ)/animalsilvestre.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/ave.cpp -o $(OBJ)/ave.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/aveexotico.cpp -o $(OBJ)/aveexotico.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/avenativo.cpp -o $(OBJ)/avenativo.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/funcionario.cpp -o $(OBJ)/funcionario.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/mamifero.cpp -o $(OBJ)/mamifero.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/mamiferoexotico.cpp -o $(OBJ)/mamiferoexotico.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/mamiferonativo.cpp -o $(OBJ)/mamiferonativo.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/reptil.cpp -o $(OBJ)/reptil.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/reptilexotico.cpp -o $(OBJ)/reptilexotico.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/reptilnativo.cpp -o $(OBJ)/reptilnativo.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/sistema.cpp -o $(OBJ)/sistema.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/tratador.cpp -o $(OBJ)/tratador.o
	@$(CC) $(CPPFLAGS) -c $(SRC)/veterinario.cpp -o $(OBJ)/veterinario.o
	@$(ARCHIVE) rcs $(LIBDIR)/$@ $(OBJS)
	@echo "+++ Biblioteca criada com sucesso em $(LIBDIR)/$@ +++"

petfera.exe:
	@$(CC) $(CPPFLAGS) $(SRC)/main.cpp $(LIBDIR)/janloti.a -o $(OBJ)/$@
	@echo "+++ Exe criado +++"

clean :
	@echo "+++ Removendo arquivos, objetos e executaveis +++"
	@rm -f core $(PROG) $(OBJS)

# incdir=./include
# srcdir=./src
# all:
# 	g++ -std=c++11 -Wall -I ${incdir} ${srcdir}/*.cpp -o $(OBJ)/petfero
