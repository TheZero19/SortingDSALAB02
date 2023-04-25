#pragma once

#include<iostream>
#include<algorithm>

//function prototype:
void insertionSort(int arr[], int size);
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int mid, int r);

//---------------------------------INSERTION-SORT-----------------------------------------

void insertionSort(int arr[], int size) {
    int key, j;
    for (int i = 1; i < size; i++) {
        key = arr[i];
        j = i - 1;
        //Inserting into the sorted sequence: from 0 to j:
        while (j > 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            arr[j + 1] = key;
        }
    }
}

 //------------------------------------------MERGE-SORT-------------------------------------
 //Merge Function:
 void merge(int arr[], int l, int mid, int r){
     int n1 = mid - l + 1;
     int n2 = r - mid;

     int *left = new int[n1];
     int *right = new int [n2];

     for(int i = 0; i < n1; i++){
         left[i] = arr[l + i];
     }

     for(int j = 0; j < n2; j++){
         right[j] = arr[mid + j + 1];
     }

     //not setting the last elements of each sub array to max element or infinity with this implementation.

     int i = 0;
     int j = 0;
     int k = l;

     while (i < n1 && j < n2) {
         if (left[i] <= right[j]) {
             arr[k] = left[i];
             i++;
         } else {
             arr[k] = right[j];
             j++;
         }
         k++;
     }

     // if we run out of elements in either left or right sub array,
     // pick up all the remaining elements and put in arr[l..r]
     while (i < n1) {
         arr[k] = left[i];
         i++;
         k++;
     }

     while (j < n2) {
         arr[k] = right[j];
         j++;
         k++;
     }

 }

 //Divide the arrays into sub-arrays and merge:

 void mergeSort(int arr[], int l, int r){
     if(l < r){
         int mid = (l + r)/2;
         mergeSort(arr, l, mid);
         mergeSort(arr, mid + 1, r);
         merge(arr, l, mid, r);
     }
 }
