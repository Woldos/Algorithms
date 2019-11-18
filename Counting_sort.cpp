#include <iostream>

using namespace std;
    int a[100000],c[10000000];

int main(){
    int n;
    int min = 2000000000;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < min)
            min = a[i];
    }
    for (int i = 0; i < n; i++){
        c[a[i] - min]++;
    }
    for (int i = 0;i < 10000000; i++){
        for (int j = 0; j < c[i]; j++){
            cout << i + min << " ";
        }
    }

    return 0;}

