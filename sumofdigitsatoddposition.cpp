#include<iostream>
using namespace std;

int reverse(int x){
    int rev = 0;

    while(x!=0){
        rev = rev * 10 + x % 10;
        x /= 10;
    }

    return rev;
}

int sumAtOddPositions(int x){
    int sum = 0;
    int position = 1;
    while(x!=0){
        if(position %2 != 0){
        sum = sum + x % 10;
        }
        position++;
        x /= 10;
    }

    return sum;
}

int main(){
    int N;
    cin >> N;

    // first reverse the number
    int reverseNum = reverse(N);
    // then add digits of number at odd position starting from right
    int sum = sumAtOddPositions(reverseNum);

    cout << sum;
    return 0;
}

