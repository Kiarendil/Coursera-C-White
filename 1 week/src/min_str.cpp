//
// Created by Kirill Ivanov on 2019-04-21.
//
#include <iostream>
using namespace std;

int main(){
    string a, b, c;

    cin >> a >> b >> c;

    if (a >= b){
        if (b >= c){
            cout << c;
        } else {
            cout << b;
        }
    } else {
        if (a >= c){
            cout << c;
        } else{
            cout << a;
        }
    }


    return 0;
}
