#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int N;
    cin>>N;
    int sum = 0;
    // Check if it is an Armstrong Number or not
    while(N!=0){
        int last_digit = N%10;
        sum = sum + pow(last_digit , 3);
        N /= 10;
    }
    if (N == sum){
        cout << 1;
    }else{
        cout << 0;
    }
        return 0;
}