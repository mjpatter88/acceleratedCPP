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

clean:
	rm -f *.o
	rm -f gradeStructures
