#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++){
        // Spaces
        for (int j = 1; j <= N-i; j++){
            cout << " ";
        }
        int value = i;
        // increasing order of numbers
        for (int j = 1; j <= i; j++){
            cout << value;
            value++;
        }

        value = value - 2;
        // decreasing order of numbers
        for (int j = 1; j <= i - 1; j++){
            cout << value;
            value--;
        }


        cout << endl;
    }

    return 0;
}