#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++){
        if(i%2 == 0){
            for (int j = 1; j <= i; j++){
                if(j%2!= 0){
                    cout << "0";
                }else{
                    cout << "1";
                }
            }
        }else{
            for (int j = 1; j <= i; j++){
                if(j%2== 0){
                    cout << "0";
                }else{
                    cout << "1";
                }
            }
        }

        cout << endl;
    }
        return 0;
}