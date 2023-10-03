#include<iostream>
using namespace std;

// Using While loop
int usingWhileLoop(int X){
    int sum = 0;

    while(X!=0){
        sum = sum + (X % 10);
        X = X / 10;
    }

    return sum;
}

// Using for loop
int usingForLoop(int X){
    int sum = 0;

    for (; X != 0; X /= 10){
        sum = sum + (X % 10);
    }

    return sum;
}

int main(){
    int N;
    cin >> N;

    int sum = usingForLoop(N);
    cout << sum;
    return 0;
}


