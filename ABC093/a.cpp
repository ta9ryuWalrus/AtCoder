#include <iostream>
using namespace std;

int main(){
    char S[5];
    cin >> S[0] >> S[1] >> S[2];
    int c[3];
    for(int i = 0; i < 3; i++)c[i] = 0;

    for(int i = 0; i < 3; i++){
        if(S[i] == 'a')c[0]++;
        else if(S[i] == 'b')c[1]++;
        else if(S[i] == 'c')c[2]++;
    }

    if(c[0] == 1 && c[1] == 1 && c[2] == 1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}