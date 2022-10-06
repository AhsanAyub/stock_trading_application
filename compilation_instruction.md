### Instructions

A step by step instructions to compile the program

```
Step 1. command: make coompile
Step 2. command: make run
Step 3. command: make clean
```

#### Example
```.. code-block:: console
	$ make compile
	g++ -std=c++17 main.cpp ./SourceFiles/*.cpp -o main
	$ make run
	./main input.csv
	The given file has been sucessfully read.
	All the required computations have been successfuly performed.
	The desired output has been sucessfully writen to `output.csv` file. Thank you!
	$ make clean
	rm main
```