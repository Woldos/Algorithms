#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(){
    double a,n;
    cin >> a >> n;
    double L = 0;
    double R = 1000;
    while(R - L > 1e-10){
        double m = (R+ L) / 2;
        if(pow(m, n) > a)
            R = m;
        else
            L = m;

    }
    cout << fixed << setprecision(11) << R;


    return 0;
}
