#include<iostream>
using namespace std;

int main(){
    int A, B, K;
    cin >> A >> B >> K;
    if((B - A + 1) > 2 * K){
        for(int i = A; i < A + K; i++){
            cout << i << endl;
        }
        for(int i = B - K + 1; i <= B; i++){
            cout << i << endl;
        }
    }
    else{
        for(int i = A; i <=B; i++){
            cout << i << endl;
        }
    }

    return 0;
}