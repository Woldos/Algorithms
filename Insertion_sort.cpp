#include <iostream>
using namespace std;

int main(){
    int n,q = 0;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++){
        int j = i;
        while (j && arr[j] < arr[j - 1]){
            swap(arr[j],arr[j - 1]);
            q++;
            j--;
        }
        if (q != 0){
            for (int i = 0; i < n; i++)
                cout << arr[i] << " ";
                cout << endl;
    }
    q = 0;
    }
    return 0;
    }

