CC = g++ # Le compilateur
CFLAGS = -std=c++11 -Wall # Options du compilateur

# Les fichiers source
SRC = image.cpp filtre.cpp filtreaddition.cpp  filtremoyenne.cpp suitedefiltre.cpp main.cpp

# Les fichiers objets
OBJ = $(SRC:.cpp=.o)

# Le nom de l'exécutable
EXEC = ex2

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)