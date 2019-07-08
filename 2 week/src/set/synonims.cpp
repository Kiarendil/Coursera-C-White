//
// Created by Kirill Ivanov on 2019-07-08.
//

#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

int main() {
    int Q;
    cin >> Q;

    map<string, set<string>> synonyms;

    for(int i = 0; i < Q; i++) {
        string operation;
        cin >> operation;

        if (operation == "ADD") {
            string word_1, word_2;
            cin >> word_1 >> word_2;

            synonyms[word_1].insert(word_2);
            synonyms[word_2].insert(word_1);
        }
        if (operation == "COUNT") {
            string word;
            cin >> word;

            cout << synonyms[word].size() << endl;
        }
        if (operation == "CHECK") {
            string word_1, word_2;
            cin >> word_1 >> word_2;


            if (synonyms[word_1].count(word_2) == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            }
        }
    }




    return 0;
}