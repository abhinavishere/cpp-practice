#include<iostream>
using namespace std;

int factorial(int X){
    int fact = 1;
    for (int i = 2; i <= X; i++){
        fact = fact * i;
    }

    return fact;
}

int binCoeff(int N, int R){
    return factorial(N) / (factorial(N - R) * factorial(R));
}

int main(){
    int N , R;
    cin >> N >> R;

    cout << binCoeff(N , R);
    return 0;
}