CXX=g++
RM=rm

all: ch2
clean: ch2.clean

ch2: area checklimits dividebyzero
ch2.clean: area.clean checklimits.clean dividebyzero.clean

area:
	$(CXX) -o bin/ch2/area src/ch2/area.cpp -lstdc++
area.clean:
	$(RM) bin/ch2/area

checklimits:
	$(CXX) -o bin/ch2/checklimits src/ch2/checklimits.cpp -lstdc++
checklimits.clean:
	$(RM) bin/ch2/checklimits

dividebyzero:
	$(CXX) -o bin/ch2/dividebyzero src/ch2/dividebyzero.cpp -lstdc++
dividebyzero.clean:
	$(RM) bin/ch2/dividebyzero

