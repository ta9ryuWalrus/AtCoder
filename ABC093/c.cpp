#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    
    if(a[0] == a[1] && a[1] == a[2]){
        cout << 0 << endl;
    }
    else if(a[0] == a[1]){
        int p = max(a[0], a[2]);
        int k = min(a[0], a[2]);
        if(p == a[0]){
            int d = p - k;
            if(d % 2 == 0)cout << d / 2 << endl;
            else cout << d / 2 + 2 << endl;
        }
        else{
            cout << p - k;
        }
    }
    else if(a[1] == a[2]){
        int p = max(a[0], a[2]);
        int k = min(a[0], a[2]);
        if(p == a[2]){
            int d = p - k;
            if(d % 2 == 0)cout << d / 2 << endl;
            else cout << d / 2 + 2 << endl;
        }
        else{
            cout << p - k;
        }
    }
    else if(a[2] == a[0]){
        int p = max(a[0], a[1]);
        int k = min(a[0], a[1]);
        if(p == a[0]){
            int d = p - k;
            if(d % 2 == 0)cout << d / 2 << endl;
            else cout << d / 2 + 2 << endl;
        }
        else{
            cout << p - k;
        }
    }
    else{
        int big = max(max(a[0], a[1]), max(a[1], a[2]));
        int small = min(min(a[0], a[1]), min(a[1], a[2]));
        int mid;
        if(a[0] != big && a[0] != small)mid = a[0];
        if(a[1] != big && a[1] != small)mid = a[1];
        if(a[2] != big && a[2] != small)mid = a[2];

        int deg1 = big - mid;
        int deg2 = mid - small;
        if(deg2 % 2 == 0){
            deg1 += deg2 / 2;
        }
        else{
            deg1 += deg2 / 2 + 2;
        }
        cout << deg1 << endl;
    }

    return 0;
}