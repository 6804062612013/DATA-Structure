#include <iostream>
using namespace std; 
#define MAXSIZE 100

// Global variables
int arr[MAXSIZE];
int n=0; // number of elements   

// function declaration
void insert_at_beginning(int x);
void insert_at_end(int x);
void insert_at_position(int x, int pos);
void delete_from_beginning();
void delete_from_end();
void delete_from_position(int pos);
int main() {
	int n = 5 ; int arr[n] = {1,2,3,4,5} ;
	cout << "array 1 " << endl ;
	
	// print arr out
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
    
	delete_from_beginning();
	
		cout << "array 1 deleted begining " << endl ;
	for (int i=0;i<n;i++) {
		cout << arr[i] << " "; 
	} cout << endl;
	
	delete_from_end();
	
	cout << "array 1 deleted end " << endl ;
	for (int i=0;i<n;i++) {
		cout << arr[i] << " "; 
	} cout << endl;
	
	int pos = 1;
	delete_from_position(pos);
	cout << "array 1 deleted pos " << endl ;
	for (int i=0;i<n;i++) {
		cout << arr[i] << " "; 
	} cout << endl;
	
}


// function DEFINITION
void insert_at_beginning(int x){
	// 1 make room at [0] by 
	//   1.1 moving all elements to the right 
//	for (int i=n-1; i>=0; i--){
//		arr[i+1] = arr[i];
//	}
	//       OR
	//   1.2 move just arr[0] to [n]
	arr[n] = arr[0];

	// 2 put x in [0]
	arr[0] = x;
	
	// 3 increase the number of elements n
	n++;
}
void insert_at_end(int x){
	// 1 put x at [n]
	arr[n] = x;
	// 2 increase n
	n++; 	
}
void insert_at_position(int x, int pos){
	// 1 make room at [pos] by 
	//   1.1 moving elements from n-1 to pos to the right 
//	for (int i=n-1; i>=pos; i--){
//		arr[i+1] = arr[i];
//	}
	//       OR
	//   1.2 move just arr[pos] to [n]
	arr[n] = arr[pos];

	// 2 put x in [pos]
	arr[pos] = x;
	
	// 3 increase the number of elements n
	n++;
}

void delete_from_beginning(){
	// delete begining
    for(int i=0 ; i<n-1 ;i++) {
    	arr[i] = arr[i+1] ;
	} n-- ;
	
}
void delete_from_end(){
	// delete end
	
	n-- ;
	arr[n] = 0;
	for (int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
	
}
void delete_from_position(int pos){
for(int i=pos ; i<n-1 ;i++) {
    	arr[i] = arr[i+1] ;
	} n-- ;
}


