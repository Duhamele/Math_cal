main:Calculmentale/main.o
	g++ Calculmentale/main.o -o Obacal


Calculmentale/MC_tool.o:
	g++ -Wall -c Calculmentale/MC_tool.cpp -o Calculmentale/MC_tool.o
Calculmentale/main.o:
	g++ -Wall -c Calculmentale/main.cpp -o Calculmentale/main.o

clean:
	rm -f Calculmentale/*.o
	rm -f *.o
	rm -f Obacal