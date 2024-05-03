EXE=ce

$(EXE): main.o UciInterpreter.o
	g++ -Wall -o $(EXE) main.o UciInterpreter.o

main.o: main.cpp UciCommand.h UciCommandType.h
	g++ -c main.cpp

UciInterpreter.o: UciInterpreter.cpp UciInterpreter.h
	g++ -c UciInterpreter.cpp

clean:
	rm -rf *.o $(EXE)
