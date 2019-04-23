//
// Created by Kirill Ivanov on 2019-04-21.
//


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    cin >> a >> b >> c;

    if (a != 0){
        double D = b * b - 4 * a * c;

        if (D >= 0){
            double x1 = (-b + sqrt(D)) / (2 * a);
            double x2 = (-b - sqrt(D)) / (2 * a);

            if (x1 == x2){
                cout << x1;
            } else {
                cout << x1 << " " <<  x2;
            }
        }
    } else if (a == 0 && b == 0){
        return 0;
    } else {
        if (-c / b == 0){
            cout << 0;
        } else{
            cout << -c / b;
        }
    }

    return 0;
}