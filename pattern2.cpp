#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        char letter = 'A';
        // letters in forward order
        for(int j = 1; j<= n-i+1; j++){
            cout << letter;
            letter++;
        }

        letter--;
        // Reverse order
        for (int j = 1; j <= n - i + 1; j++){
            cout << letter;
            letter--;
        }
        
        cout << endl;
    }

    return 0;
}