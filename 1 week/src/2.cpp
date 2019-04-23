//
// Created by Kirill Ivanov on 2019-04-22.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, r;
    vector<int> result;
    cin >> N;

    while (N >= 1) {
        if (N % 2 == 0) {
            result.push_back(0);
        } else {
            result.push_back(1);
        }
        N = N / 2;
    }

    reverse(begin(result), end(result));

    for (auto c: result) {
        cout << c;
    }

    return 0;
}