#include <iostream>
using namespace std;

int max(int a, int b){
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n){

    int P[100][100];

    for(int i = 0; i <= n; i++){
        for(int w = 0; w <= W; w++){

            if(i == 0 || w == 0){
                P[i][w] = 0;
            }

            else if(wt[i-1] <= w){
                P[i][w] = max(
                    val[i-1] + P[i-1][w-wt[i-1]],
                    P[i-1][w]
                );
            }

            else{
                P[i][w] = P[i-1][w];
            }
        }
    }

    // Print Table
    cout << "\nDP Table:\n";

    for(int i = 0; i <= n; i++){
        for(int w = 0; w <= W; w++){
            cout << P[i][w] << "\t";
        }
        cout << endl;
    }

    return P[n][W];
}

int main(){

    int n, W;

    cout << "Enter the number of Items (n) = ";
    cin >> n;

    cout << "Enter the Max Weight (W) = ";
    cin >> W;

    int val[100], wt[100];

    cout << "Enter the values of each items (val) = ";

    for(int i = 0; i < n; i++){
        cin >> val[i];
    }

    cout << "Enter the weights of each items (wt) = ";

    for(int i = 0; i < n; i++){
        cin >> wt[i];
    }

    cout << "\nThe Maximum total Profit is: "
         << knapsack(W, wt, val, n);

    return 0;
}
