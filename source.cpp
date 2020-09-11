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
		void insertsort(long _arr[], long n); //Insertion Sort declared
		void selsort(long _arr[], long n); //Selection Sort declared
		void bubblesort(long _arr [] , long n); //Bubble Sort declared
};

//Insertion Sort defined
void sort::insertsort(long arr[ ], long n) {
	long arr[n];

	for (long i = 0; i < n; i++) {
		arr[i]= _arr[i];
	}

	long i, j, temp;
	for (i = 1; i < n; i++) { 
		temp = arr[i] ;
		j = i − 1;
		while((temp < arr[j]) && (j >= 0)) { 
			arr[j+1] = arr[j];
			j -= 1; 
		}
		arr[j+1] = temp;
	}

	cout << "Insertion Sort complete";
}

//Selection Sort defined
void sort :: selsort(long _arr[] , long n) {
	long arr[n];

	for (long i = 0; i < n; i++) {
		arr[i] = _arr[i];
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

//Bubble Sort defined
void sort :: bubblesort(long _arr[], long n) {
	long arr[n];

	for (long i = 0; i < n; i++) {
		arr[i] = _arr[i];
	}

	for (long i = 0; i < (n - 1); i++) {
		for (long j = 0; j < (n - i - 1 ); j++) {
			if (arr[j] > arr[j+1]) {
				long temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	cout << "Bubble Sort complete";
}

// ------main function------
void main() {
	const long count = 1000;
	long a[count];
	clock_t time_req, time_req1, time_req2;
	//sort object declared
	sort obj;

	//array initialized with random data
	for (long i = 0; i < count, i++) {
		a[i] = random();
	}

	time_req = clock();
	obj.bubblesort(a, count);
	time_req = clock() - time_req;
	cout << "Bubble Sort: time taken - " << (double)time_req/CLOCKSPERSEC
	<< "seconds" << endl;

	time_req1 = clock();
	obj.selsort(a, count);
	time_req1 = clock() - time_req1;
	cout << "Selection Sort: time taken - " << (double)time_req1/CLOCKSPERSEC
	<< "seconds" << endl;

	time_req2 = clock();
	obj.insertsort(a, count);
	time_req2 = clock() - time_req2;
	cout << "Insertion Sort: time taken - " << (double)time_req2/CLOCKSPERSEC
	<< "seconds" << endl;
}







