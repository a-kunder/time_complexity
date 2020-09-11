//−−−−−−−−−− SOURCE CODE −−−−−−−−−−
//−−−−−−−−−− Header Section −−−−−−−−−− 
#include <iostream>
#include <ctime>
#include <cmath>
#include<fstream>
#include <cstdlib>
#include <chrono> //Only in C++ 11
using namespace std;

// This section consists solely of declarations
// Only put prototypes and not the definition.

class sort {
	public:
		void insertsort(long arr[ ], long n); //Insertion Sort declared
		void selsort(long arr[ ], long n); //Selection Sort declared
		void bubblesort(long arr [ ] , long n); //Bubble Sort declared
};

//Insertion Sort defined
void sort::insertsort(long arr[ ], long n) {
	long arr[n];

	for (long i = 0; i < n; i++) {
		arr[i]= arr[i];
	}

	long i, j,temp;
	for (i = 1; i < n; i++) { 
		temp = arr[i] ;
		j = i − 1;
		while((temp < arr[j]) && (j>=0)) { 
			arr[j+1] = arr[j];
			j=j −1; 
		}
		arr [j+1]=temp;
	}

	cout << "Insertion Sort complete";
}

//Selection Sort defined
void sort :: bubblesort(long arr [ ] , long n) {
	long arr[n];
	for (long i = 0; i < n; i++) {
		arr[i]= arr[i];
	}

	long min_idx;
	for (long i = 0; i < n-1; i++) {
		min_idx = i;
		for (long j = i+1; j < n; j++) {
			if (arr[j] < arr[min_idx]) {
				min_idx = j;
			}
		}
		long temp = arr[min_idx];
	arr[min_idx] = arr[i];
	arr[i] = temp;
	}

	cout << "Selection Sort complete";
}








