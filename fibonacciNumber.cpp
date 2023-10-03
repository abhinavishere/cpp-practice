#include<iostream>
using namespace std;

int fib(int n){
    int a, b, c;
    a = 0;
    b = 1; 

    if(n == 0){
        return a;
    }

    for (int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int main(){
    int N;
    cin >> N;

    int fibAtN = fib(N);
    cout << fibAtN;
    return 0;
}