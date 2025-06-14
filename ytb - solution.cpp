#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    double K, A, B;
    
    cin >> K >> A >> B;
    
    double t = (K * (1.0 - B)) / A;
    
    cout << fixed << setprecision(6) << t << endl;
    
    return 0;
}

