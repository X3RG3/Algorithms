#include <bits/stdc++.h>
using namespace std;

int LCS(char X[],char Y[],int n,int m){
    int L[m+1][n+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i == 0 || j == 0){
                L[i][j] = 0;
            }
            else if(X[i-1] == Y[j-1] ){
                L[i][j] = L[i-1][j-1] +1;
            }
            else{
                L[i][j] = max(L[i-1][j],L[i][j-1]);
            }
        }
    }

    return L[n][m];
}


int main() {
    char X[] = "PRESIDENT";
    char Y[] = "PROVIDENCE";
    
    int n = strlen(X) ;
    int m = strlen(Y) ;

    cout<<"The Maximum Length is : "<<LCS(X,Y,n,m)<<endl;
    
    return 0;
}