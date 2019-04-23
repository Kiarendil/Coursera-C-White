//
// Created by Kirill Ivanov on 2019-04-22.
//

#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

//    int max;
//    if (a <= b) {
//        max = b;
//    } else {
//        max = a;
//    }
//
//    int r_a, r_b, nod = 1;
//
//    for(int i = 1; i <= max; i++) {
//        r_a = a % i;
//        r_b = b % i;
//
//        if (r_a == 0 && r_b == 0) {
//            nod = i;
//        }
//        cout << i << endl;
//    }
//
//    cout << nod;

while (a > 0 && b > 0) {
    if (a > b) {
        a = a % b;
    } else {
        b = b % a;
    }
}
cout << a + b;

    return 0;
}