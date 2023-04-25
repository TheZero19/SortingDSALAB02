#include "pch.h"

#include<iostream>
#include "sorting.h"
#include <gtest/gtest.h>
#include "randomArray.h"
#include "timeComplexity.h"

using namespace std;

//Tests for INSERTION SORT:
TEST(test_forSortedArray, test1_InsertionSort) {

    int arr[] = { 1, 2, 3, 4, 5 };
    int expected[] = { 1, 2, 3, 4, 5 };

    insertionSort(arr, 5);

    ASSERT_TRUE(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
}

TEST(test_forUnsortedArray, test2_InsertionSort) {

    int arr[] = { 1, 2, 5, 3, 4 };
    int expected[] = { 1, 2, 3, 4, 5 };

    insertionSort(arr, 5);

    ASSERT_TRUE(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
}



//Tests for MERGE-SORT:
TEST(test_forSortedArray, test1_MergeSort) {

    int arr[] = { 1, 2, 3, 4, 5 };
    int expected[] = { 1, 2, 3, 4, 5 };

    mergeSort(arr, 0, 4);

    ASSERT_TRUE(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
}

TEST(test_forUnSortedArray, test2_MergeSort) {

    int arr[] = { 1, 2, 4, 5, 3 };
    int expected[] = { 1, 2, 3, 4, 5 };

    mergeSort(arr, 0, 4);

    ASSERT_TRUE(std::equal(std::begin(arr), std::end(arr), std::begin(expected)));
}




int main(int argc, char** argv) {


    testing::InitGoogleTest(&argc, argv);

    int size[] = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000};

    cout << "INSERTION SORT: " << endl;

    for (int i = 0; i < 10; i++) {
        int *arr = randomArrayGenerator(size[i]);
        timeComplexityInsertionSort(arr, size[i]);
        delete[] arr;
    }

    cout << "MERGE-SORT: " << endl;
    for (int i = 0; i < 10; i++) {
        int* arr = randomArrayGenerator(size[i]);
        timeComplexityMergeSort(arr, size[i]);
        delete[] arr;
    }

    return RUN_ALL_TESTS();

    return 0;
}