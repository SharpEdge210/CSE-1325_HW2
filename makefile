# Suggested Makefile for CSE_1325 Homework #2

main: main.cpp student.cpp
	g++ --std=c++11 -o main main.cpp
	./main
clean:
	-rm -f *.o main test_student
