#include <iostream>
using namespace std;
#define MAXSIZE 100
#defind DELETE -1

// Global variables
int arr[MAXSIZE];
int n=0;    // to store the number of elements in arr []

// Function DECLARATION
void insert_at_the_begining(int x);
void insert_at_the_end(int x);
void insert_at_position(int x,int pos);
void print_arr();

// homework
void delete_from_begining();
void delete_from_end();
void delete_from_position();


int main() {
	//1 read input
	int total;
	cin >> total;
	//2 insert into the array
	int temp;
	for(int i=0; i<total;i++) {
		cin >> temp;
		insert_at_the_begining(temp);
	}
	
	//3 print the array out
	print_arr();
	
    return 0;
}

// Function DEFINITION
void insert_at_the_begining(int x) {
	// make room at [0] by moving arr[0] to the last element
	// to the last element arr[n]
	arr[n] = arr[0];
	arr[0] = x;
	n++;
}

void insert_at_the_end(int x) {
	// put x at [n]
	arr[n] = x;
	n++ ;
}

void insert_at_position(int x,int pos) {
	// make room at [pos] by moving arr[pos] to the last element
	// to the last element arr[n]
	arr[n] = arr[pos];
	arr[pos] = x;
	n++;
	
}

void print_arr() {
	for (int i=0; i<n ; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
