all: run

run: c_exercises
	./c_exercises

c_exercises: c_exercises.cpp
	g++ -lgtest_main -lgtest c_exercises.cpp -o c_exercises -std=c++11

clean:
	rm -f c_exercises