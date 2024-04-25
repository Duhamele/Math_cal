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
	rm -f Tool/*.o
	rm -f Tool/MC_G_tool_test
test:Tool/MC_G_tool_test
	./Tool/MC_G_tool_test
Tool/MC_G_tool_test:Tool/MC_G_tool_test.o Tool/MC_G_tool.o
	g++ -Wall Tool/MC_G_tool.o Tool/MC_G_tool_test.o -o Tool/MC_G_tool_test
Tool/MC_G_tool.o:
	g++ -Wall -c Tool/MC_G_tool.cpp -o Tool/MC_G_tool.o
Tool/MC_G_tool_test.o:
	g++ -Wall -c Tool/MC_G_tool_test.cpp -o Tool/MC_G_tool_test.o