build:
	@g++ -std=c++17 ./solution.cpp -o execSolution
run_test_sum_50:
	@ g++ -std=c++17 ./solution.cpp -o execSolution.o && ./execSolution.o correct_output_50.txt sum < input_sum_50.txt
run_test_sum_100:
	@ g++ -std=c++17 ./solution.cpp -o execSolution.o && ./execSolution.o correct_output_sum_100.txt sum < input_sum_100.txt
run_test_sum_10000:
	@ g++ -std=c++17 ./solution.cpp -o execSolution.o && ./execSolution.o  correct_output_sum_10000.txt sum < input_sum_10000.txt
run_test_mul:
	@ g++ -std=c++17 ./solution.cpp -o execSolution.o && ./execSolution.o correct_output_mul_10.txt mul < input_mul_10.txt
