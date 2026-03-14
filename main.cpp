#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double a = 0, b = 0, c = 0;
    

    while (!(cin >> a)) { cin.clear(); cin.ignore(1); }
    while (!(cin >> b)) { cin.clear(); cin.ignore(1); }
    while (!(cin >> c)) { cin.clear(); cin.ignore(1); }

    double root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    double root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << fixed << setprecision(2);
    
    if (root1 > root2) {
        cout << root1 << " " << root2 << endl;
    } else {
        cout << root2 << " " << root1 << endl;
    }

    return 0;
}