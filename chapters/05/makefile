all: gradeMain vecTest
	
gradeMain: gradeMain.o grade.o Student_info.o
	g++ -o gradeMain gradeMain.o grade.o Student_info.o

gradeMain.o: gradeMain.cpp Student_info.h
	g++ -c gradeMain.cpp

grade.o: grade.h grade.cpp
	g++ -c grade.cpp

Student_info.o: Student_info.h Student_info.cpp
	g++ -c Student_info.cpp

vecTest: vecTest.o
	g++ -o vecTest vecTest.o

vecTest.o: vecTest.cpp
	g++ -c vecTest.cpp

clean:
	rm -f *.o
	rm -f gradeMain
	rm -f vecTest
