//
// Created by Kirill Ivanov on 2019-04-21.
//

#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    if (b == 0){
        cout << "Impossible";
    }
    else {
        cout << a / b;
    }
//    cout << a << endl;
//    cout << b << endl;

    return 0;
}