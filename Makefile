EXE=ce

$(EXE): main.o UciInterpreter.o UciCommand.o
	g++ -Wall -o $(EXE) main.o UciInterpreter.o UciCommand.o

main.o: main.cpp UciCommand.h UciCommandType.h
	g++ -c main.cpp

UciInterpreter.o: UciInterpreter.cpp UciInterpreter.h
	g++ -c UciInterpreter.cpp

UciCommand.o: UciCommand.cpp UciCommand.h
	g++ -c UciCommand.cpp

clean:
	rm -rf *.o $(EXE)
