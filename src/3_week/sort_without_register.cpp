//
// Created by Kirill Ivanov on 2019-07-08.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <locale>

using namespace std;

vector<string> CreateVectorString(int N) {
    vector<string> result;
    for(int i = 0; i < N; i++) {
        string inp;
        cin >> inp;
        result.push_back(inp);
    }
    return result;
}

void PrintVectorString(const vector<string>& v) {
    for (const auto &words: v) {
        cout << words << " ";
    }
}

bool IsGreaterNoRegister(const string& a, const string& b) {
    locale loc;
    string a_low = a;
    string b_low = b;
    transform(a_low.begin(), a_low.end(), a_low.begin(),
                                  [](unsigned char c){ return tolower(c); });
    transform(b_low.begin(), b_low.end(), b_low.begin(),
                                  [](unsigned char c){ return tolower(c); });
    return a_low < b_low;
}

int main() {
    int N;
    cin >> N;
//    locale loc;

    vector<string> words = CreateVectorString(N);

    sort(begin(words), end(words), IsGreaterNoRegister);

    PrintVectorString(words);


    return 0;
}