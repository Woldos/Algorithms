#include <iostream>
#include <cstdlib>
using namespace std;

void qsort(int* a, int L, int R) {
if (R - L < 2)
    return;
int mid = a[L + rand() % (R - L)];
int x = L, y = L;
for (int i = L; i < R; ++i){
    if (a[i] < mid) {
        swap(a[x], a[i]);
        if (x != y)
            swap(a[y], a[i]);
        x++;
        y++;
    }
    else if (a[i] == mid) {
            swap(a[y], a[i]);
            y++;
    }
}
qsort(a, L, x);
qsort(a, y, R);
}
int main(){
    int n;
    cin >> n;
    int a[100000];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    qsort(a, 0, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    }
