main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o
	g++ -o main main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o;
	
main.o: main.cpp box.h checkerboard.h
	g++ -c main.cpp;
	
checkerboard3x3.o: checkerboard3x3.cpp checkerboard3x3.h
	g++ -c checkerboard3x3.cpp;
	
trapezoid.o: trapezoid.cpp trapezoid.h
	g++ -c trapezoid.cpp;
	
upper.o: upper.cpp upper.h
	g++ -c upper.cpp;
	
lower.o: lower.cpp lower.h
	g++ -c lower.cpp;
	
cross.o: cross.cpp cross.h
	g++ -c cross.cpp;
	
checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp;
	
box.o: box.cpp box.h
	g++ -c box.cpp;
	
clean:
	rm -f box.o main main.o checkerboard.o cross.o lower.o upper.o trapezoid.o checkerboard3x3.o;
