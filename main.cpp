#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    double discriminant = (b * b) - (4.0 * a * c);
    double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
    double root2 = (-b - sqrt(discriminant)) / (2.0 * a);

    cout << fixed << setprecision(2);
    
    if (root1 > root2) {
        cout << root1 << " " << root2 << endl;
    } else {
        cout << root2 << " " << root1 << endl;
    }

    return 0;
}