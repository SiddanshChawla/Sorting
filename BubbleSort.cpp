/*
 * BubbleSort.cpp
 *
 *  Created on: 25-Feb-2022
 *      Author: siddanshchawla
 */

#include "BubbleSort.h"
#include <iostream>
using namespace std;

void sort(int array[], int size){
	//loop 1
	for(int i = 0; i<size; i++){
		//loop 2
		for(int j = 0; j<size - i; j++){
			//comparing the numbers
			if (array[j] > array[j + 1]) {
			        int temp = array[j];
			        array[j] = array[j + 1];
			        array[j + 1] = temp;
			}
		}
	}
};

int main(){

	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i<n; i++){
		cin >> arr[i];
	}

	sort(arr, n);

	for(int i  = 0; i<n; i++){
		cout << arr[i];
	};
	return 0;
}
