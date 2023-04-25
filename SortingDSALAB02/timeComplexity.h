#pragma once
#include<iostream>
#include "sorting.h"
#include<chrono>
#include<thread>

using namespace std;


void timeComplexityInsertionSort(int arr[], int size) {

	// Record the start time
	auto start_time = std::chrono::high_resolution_clock::now();

	insertionSort(arr, size);

	// Record the end time
	auto end_time = std::chrono::high_resolution_clock::now();

	// Calculate the elapsed time
	auto elapsed_time = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

	// Print the elapsed time in milliseconds
	cout << "Elapsed time for: Array Size: " << size << " = " << elapsed_time.count() << " microseconds\n";

}

void timeComplexityMergeSort(int arr[], int size) {

	// Record the start time
	auto start_time = std::chrono::high_resolution_clock::now();

	mergeSort(arr, 0, size - 1);

	// Record the end time
	auto end_time = std::chrono::high_resolution_clock::now();

	// Calculate the elapsed time
	auto elapsed_time = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time);

	// Print the elapsed time in milliseconds
	cout << "Elapsed time for: Array Size: " << size << " = " << elapsed_time.count() << " microseconds\n";

}

