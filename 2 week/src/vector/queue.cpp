//
// Created by Kirill Ivanov on 2019-06-17.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int Q;

    vector<int> people;

    cin >> Q;

    vector<string> input_text(Q);
    vector<int> input_numbers(Q, 0);

    for (int i = 0; i < Q; i++) {
        cin >> input_text[i];

        if (input_text[i] == "WORRY_COUNT") {
            int worried_people = 0;
            for (int p: people){
                worried_people += p;
            }
            cout << worried_people << endl;
        }
        else {
            cin >> input_numbers[i];

            if (input_text[i] == "COME") {
                if (input_numbers[i] > 0) {
                    for (int k = 0; k < input_numbers[i]; k++) {
                        people.push_back(0);
                    }
                }
                else {
                    people.resize(people.size() + input_numbers[i]);
                }
            }

            if (input_text[i] == "WORRY") {
                people[input_numbers[i]] = 1;
            }

            if (input_text[i] == "QUIET") {
                people[input_numbers[i]] = 0;
            }
        }
    }

    return 0;
}