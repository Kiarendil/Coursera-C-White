//
// Created by Kirill Ivanov on 2019-06-15.
//

#include <iostream>
#include <vector>

using namespace std;

void Reverse(vector<int>& v) {
    vector<int> tmp;
    int N = v.size();

    for (int i = 0; i < v.size(); i++){
        tmp.push_back(v[N - 1 - i]);
    }
    v = tmp;
}

vector<int> Reversed(const vector<int>& v) {
    vector<int> tmp;
    int N = v.size();

    for (int i = 0; i < v.size(); i++){
        tmp.push_back(v[N - 1 - i]);
    }
    return tmp;
}

int main() {
    int N;
    vector<int> numbers;

    cin >> N;
    for(int i = 0; i < N; i++) {
        int inp;
        cin >> inp;
        numbers.push_back(inp);
    }

    vector<int> new_numbers = Reversed(numbers);

    for (const auto &words: numbers) {
        cout << words << endl;
    }
    for (const auto &words: new_numbers) {
        cout << words << endl;
    }


    return 0;
}