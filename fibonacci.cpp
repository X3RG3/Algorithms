/*
    using loop
    it's time complexity it n

*/

#include <bits/stdc++.h>
using namespace std;

int fib(){

}

int main() {
    int term1 = 0;
    int term2 = 1;

    int n;
    int nextTerm = 0;

    cout<<"Enter Number of terms : ";
    cin>>n;

    if(n<= 2){
        cout<<"Numer of terms must be > 3"<<endl;
        return 1;
    }

    cout<<term1<<" , "<<term2<<" , ";

    for(int i=3;i <=n;i++){
        nextTerm = term1 + term2;
        cout<<nextTerm;
        if( i != n) cout<<" , ";
        
        term1 = term2;
        term2 = nextTerm;
    }
    cout<<endl;
    return 0;
}