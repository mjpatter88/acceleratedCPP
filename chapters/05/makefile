all: gradeMain
	
gradeMain: gradeMain.o grade.o Student_info.o
	g++ -o gradeMain gradeMain.o  grade.o Student_info.o

grade.o: grade.h grade.cpp
	g++ -c grade.cpp

Student_info.o: Student_info.h Student_info.cpp
	g++ -c Student_info.cpp

clean:
	rm -f *.o
	rm -f gradeMain
