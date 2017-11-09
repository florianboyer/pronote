CC=g++
CFLAGS = -W -Wall -ansi -pedantic
LDFLAGS=
EXEC = monAppli

all:$(EXEC)
	
monAppli: main.o application.o bulletin.o etudiant.o evaluation.o matiere.o note.o section.o
	$(CC) -o monAppli main.o application.o bulletin.o etudiant.o evaluation.o matiere.o note.o section.o

main.o: main.cpp
	$(CC) -o main.o -c main.cpp $(CFLAGS)

application.o: application.cpp
	$(CC) -o application.o -c application.cpp $(CFLAGS)

bulletin.o: bulletin.cpp
	$(CC) -o bulletin.o -c bulletin.cpp $(CFLAGS)

etudiant.o: etudiant.cpp
	$(CC) -o etudiant.o -c etudiant.cpp $(CFLAGS)

evaluation.o: evaluation.cpp
	$(CC) -o evaluation.o -c evaluation.cpp $(CFLAGS)

matiere.o: matiere.cpp
	$(CC) -o matiere.o -c matiere.cpp $(CFLAGS)

note.o: note.cpp
	$(CC) -o note.o -c note.cpp $(CFLAGS)

section.o: section.cpp
	$(CC) -o section.o -c section.cpp $(CFLAGS)

clean:
	rm *.o



