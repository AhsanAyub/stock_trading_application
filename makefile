compile:
	g++ -std=c++17 main.cpp ./SourceFiles/*.cpp -o main

run:
	./main input.csv

clean:
	rm main