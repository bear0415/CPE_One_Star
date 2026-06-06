#include <bits/stdc++.h>

using namespace std;

int main() {
   

    double s, a;
    string unit;
    const double r = 6440.0;
    const double pi = acos(-1.0);

    while (cin >> s >> a >> unit) {
        if (unit == "min") {
            a /= 60.0;
        }
        
        a = fmod(a, 360.0);
        if (a > 180.0) {
            a = 360.0 - a;
        }

        double R = s + r;
        double rad = a * pi / 180.0;

        double arc = R * rad;
        double chord = 2.0 * R * sin(rad / 2.0);

        cout << fixed << setprecision(6) << arc << " " << chord << "\n";
    }

    return 0;
}
