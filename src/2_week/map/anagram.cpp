//
// Created by Kirill Ivanov on 2019-07-06.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

map<string, int> BuildReversedMap(const map<int, string>& m) {
    map<string, int> result;
    for (const auto& [key, value] : m) {
        result[value] = key;
    }
}

map <char, int> BuildCharCounters(const string &word) {
    map <char, int> counters;
    for (const auto &letter: word) {
        counters[letter]++;
    }
    return counters;
}

int main() {

    int N;

    cin >> N;
    vector<string> words (2 * N);
    for(int i = 0; i < 2 * N; i++) {
        cin >> words[i];
    }

    for(int i = 0; i < N; i++) {
        if (BuildCharCounters(words[2 * i]) == BuildCharCounters(words[2 * i + 1]))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }




    return 0;
}