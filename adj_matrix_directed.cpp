/*
This is our ADJ Matrix Program in C++
Created: F. A. Faisal
Date: 16/08/2026 
*/

#include <iostream>
using namespace std;

int matrix[20][20];

void Inmatrix(int e){
	cout<< "Enter the Edges: "<<endl;	
	
	int i;
	char j,k;

	for (i=0;i<e;i++){
		cin >> j;
		cin >> k;
		
		matrix[(int)j - 65][(int)k - 65] = matrix[(int)k - 65][(int)j - 65] = 1; 
	}
	
}

int main(){
	
	int e = 9, n = 8;  // Ei jaygay sudhu change 
		
	Inmatrix(e);
	
	cout<< "Output: "<<endl;
	
	for(int i = 0; i<n;i++){
		for(int j = 0; j<n; j++){
			cout<<matrix[i][j]<<" ";		
		}
		cout<<endl;
	}
	
	cout<<endl;
	
	return 0;
}