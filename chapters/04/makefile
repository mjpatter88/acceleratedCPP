all: gradeStructures squares squaresDouble totalInput wordCounts
	
gradeStructures: gradeStructures.o median.o grade.o Student_info.o
	g++ -o gradeStructures gradeStructures.o median.o grade.o Student_info.o

gradeStructures.o: gradeStructures.cpp
	g++ -c gradeStructures.cpp

median.o: median.h median.cpp
	g++ -c median.cpp

grade.o: grade.h grade.cpp
	g++ -c grade.cpp

Student_info.o: Student_info.h Student_info.cpp
	g++ -c Student_info.cpp

squares: squares.o
	g++ -o squares squares.o

squares.o: squares.cpp
	g++ -c squares.cpp

squaresDouble: squaresDouble.o
	g++ -o squaresDouble squaresDouble.o

squaresDouble.o: squaresDouble.cpp
	g++ -c squaresDouble.cpp

totalInput: totalInput.o readIntoVector.o
	g++ -o totalInput totalInput.o readIntoVector.o

totalInput.o: totalInput.cpp readIntoVector.h
	g++ -c totalInput.cpp

readIntoVector.o: readIntoVector.cpp readIntoVector.h
	g++ -c readIntoVector.cpp

wordCounts: wordCounts.o readIntoVector.o
	g++ -o wordCounts wordCounts.o readIntoVector.o

wordCounts.o: wordCounts.cpp readIntoVector.h
	g++ -c wordCounts.cpp

clean:
	rm -f *.o
	rm -f gradeStructures
	rm -f squares
	rm -f squaresDouble
	rm -f totalInput
	rm -f wordCounts
