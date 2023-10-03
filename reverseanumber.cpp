#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    int ans = 0;

    while(N != 0){
        int last_digit = N % 10;
        ans = ans * 10 + last_digit;
        N = N / 10;
    }

    cout << ans << endl;

    return 0;
}