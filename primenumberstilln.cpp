#include<iostream>
using namespace std;

bool isPrime(int n){
    for (int i = 2; i<n; i++){
        if(n%i == 0){
            return false;
            break;
        }
    }

    return true;
}

int main(){
    int N;
    cin >> N;
    int count = 2;
    cout << count << " ";
    for (int i = 3; i <= N; i++){
        bool numIsPrime = isPrime(i);
        if(numIsPrime){
            cout << i<<" ";
        }
    }
    
    return 0;
}