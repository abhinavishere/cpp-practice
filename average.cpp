#include<iostream>
using namespace std;

int main(){
    int physics, chemistry, maths;
    cout << "Enter the marks for physics, chemistry and maths" << endl;
    cin>>physics;
    cin>>chemistry;
    cin>>maths;
    
    float average;
    average = (physics + chemistry + maths) / 2.5;

    cout << "Average is " << average;
    return 0;
}