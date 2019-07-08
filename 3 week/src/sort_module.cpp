//
// Created by Kirill Ivanov on 2019-07-08.
//

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> CreateVectorInt(int N) {
    vector<int> result;
    for(int i = 0; i < N; i++) {
        int inp;
        cin >> inp;
        result.push_back(inp);
    }
    return result;
}

void PrintVectorInt(const vector<int>& v) {
    for (const auto &words: v) {
        cout << words << " ";
    }
}

bool IsGreaterModule(int a, int b) {
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    return a < b;
}

int main() {
    int N;
    cin >> N;

    vector<int> numbers = CreateVectorInt(N);

    sort(begin(numbers), end(numbers), IsGreaterModule);

    PrintVectorInt(numbers);

    return 0;
}