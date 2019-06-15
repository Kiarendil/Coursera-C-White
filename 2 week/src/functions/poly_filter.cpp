//
// Created by Kirill Ivanov on 2019-04-24.
//

#include <iostream>
#include <vector>

using namespace std;

int IsPalindrom(string s) {
    int N = s.size();
    bool poly = true;

    for (int i = 0; i <= N/2; i++) {
        if (s[i] != s[N- 1 - i]) {
            poly = false;
            break;
        }
    }
    return poly;
}

vector<string> PalindromFilter(const vector<string>& words, int minLength) {
    vector<string> result;

    for (const auto& w: words) {
        if (IsPalindrom(w) && w.size() >= minLength) {
            result.push_back(w);
        }
    }

    return result;
}

int main() {
    vector<string> v;
    int m, N;

    cin >> N;
    for(int i = 0; i < N; i++) {
        string inp;
        cin >> inp;
        v.push_back(inp);
    }
    cout << "m:" << endl;
    cin >> m;

    vector<string> r = PalindromFilter(v, m);
    for (const auto& w: r) {
        cout << w << endl;
    }

    return 0;
}