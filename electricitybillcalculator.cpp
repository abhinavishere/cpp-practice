#include<iostream>
using namespace std;

int main(){
    int units;
    cout<< "Enter units of electricity consumed" << endl;
    cin >> units;
    int total = 0;

    if(units <= 100){
        total = 0;
    }else if(units <= 200){
        total =  ((units - 100) * 5);
    } else if(units <=300){
        total = (100 * 5) + ((units - 200) * 10);
    }else if(units <= 400){
        total = (100 * 5) + (100 * 10) + ((units - 300) * 12);
    }
    
    cout << "The total bill for " << units << " units is " << total << endl;

    return 0;
}