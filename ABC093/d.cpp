#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int Q;
    cin >> Q;
    int A[Q], B[Q];
    int score[Q];
    int sq;
    int count;
    for(int i = 0; i < Q; i++){
        cin >> A[i] >> B[i];
        score[i] = A[i] * B[i];

        sq = (int)sqrt(score[i]);
        if(A[i] <= sq){
            if(B[i] <= sq){
                count = sq - 2 + 1;
            }
            else{
                count = sq - 1;
            }
        }
        else{
            if(B[i] <= sq){
                count = sq - 1;
            }
            else{
                count = sq;
            }
        }
        cout << count << endl;
    }

    return 0;
}