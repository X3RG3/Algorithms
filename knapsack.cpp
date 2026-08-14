#include <bits/stdc++.h>
using namespace std;

int knapsack(int W,int wt[],int val[],int n){
    int i,w;

    int P[n+1][W+1];

    for(int i=0;i<=n;i++){
        for(w=0;w<= W;w++){
            if( i == 0 || w == 0){
                P[i][w] = 0;
            }
            else if(wt[i-1] <=w){
                P[i][w] = max(val[i-1]+P[i-1][w-wt[i-1]], P[i-1][w]);
            }
            else{
                P[i][w] = P[i-1][w];
            }
        }
    }
    return P[n][W];
}

int main() {
    int n,W;

    cout<<"Enter the number of Items : ";
    cin>>n;

    cout<<"Enter the max weight : ";
    cin>>W;

    int val[n],wt[n];

    cout<<"Enter the values of each Items :"<<endl;
    for(int i=0;i<n;i++){
        cin>>val[i];
    }

    cout<<"Enter the weights of items : "<<endl;
    for(int i=0;i<n;i++){
        cin>>wt[i];
    }

    cout<<"The maximum total profit is : "<<knapsack(W,wt,val,n);
    cout<<endl;

    return 0;
}