build:
	@g++ -std=c++17 ./solution.cpp -o execSolution.o 
run_test50:
	@ g++ -std=c++17 ./solution.cpp -o execSolution.o && ./execSolution.o output_50.txt sum < input_50.txt
run_test100:
	@ g++ -std=c++17 ./solution.cpp -o execSolution.o && ./execSolution.o output_100.txt sum < input_100.txt
run_test10000:
	@ g++ -std=c++17 ./solution.cpp -o execSolution.o && ./execSolution.o  output_10000.txt sum < input_10000.txt
