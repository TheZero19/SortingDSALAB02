#pragma once
#include<iostream>
#include<stdlib.h>

int *randomArrayGenerator(int size) {
	int* array = new int[size];

	for (int i = 0; i < size; i++) {
		array[i] = rand() % size;
	}

	return array;
}