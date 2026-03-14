#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    
    cin >> a >> b >> c;

    double root1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
    double root2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

    cout << fixed << setprecision(2);
    
    if (root1 > root2) {
        cout << root1 << " " << root2 << endl;
    } else {
        cout << root2 << " " << root1 << endl;
    }

    return 0;
}