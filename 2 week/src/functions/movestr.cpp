//
// Created by Kirill Ivanov on 2019-06-15.
//

#include <iostream>
#include <vector>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (const auto& words: source) {
        destination.push_back(words);
    }
    source.clear();
}

int main() {
    vector<string> source = {"c", "b", "d", "dfasd"};
    vector<string> destination = {"adf", "z"};
    MoveStrings(source, destination);

    if (source.empty()) {
        cout << "Source is empty" << endl;
    }
    else {
        for (const auto &words: source) {
            cout << words << endl;
        }
    }
    for (const auto &words: destination) {
        cout << words << endl;
    }

    return 0;
}