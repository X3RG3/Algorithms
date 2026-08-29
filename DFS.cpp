
#include <iostream>
using namespace std;

char c[] = {'A','B','C','D','E','F','G','S'};
int e[] = {2,2,2,2,2,2,3,3};
int list[20][20] = {{3,7},{4,7},{5,7},{0,6},{1,6},{2,6},{3,4,5},{0,1,2}};

int checked[20];
int stk[20];
int top = 0;

int notChecked(int n){
	if(checked[n] == 1){
		return 0;
	}
	return 1;
}
void push(int n){
	checked[n] = 1;
	cout<<c[n]<<" ";
	stk[top] = n;
	top++;
}
int pop(){

	top = top - 1;
	return stk[top];
}

int main(){

	int i,n,f=0;
	push(7);

	while(top != 0){
		n = stk[top-1];
		for (i = 0; i<e[n]; i++){ // for directed  f = 0 for loop er age hobe 
			f = 0;
			if(notChecked(list[n][i]) == 1){

				push(list[n][i]);
				f = 1;
				break;
			}
		}
		if (f == 0){
			pop();
		}

	}

	cout<<endl;

	return 0;
}









