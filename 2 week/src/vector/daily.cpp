//
// Created by Kirill Ivanov on 2019-06-18.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int current_month = 0;
    vector<vector<string>> things(31);

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        string operation;
        cin >> operation;

        if (operation == "NEXT") {
            current_month ++;
            if (current_month == 12) {
                current_month = 0;
            }
            if (months[current_month] > months[current_month - 1]){
                things.resize(months[current_month]);
            }
            if (months[current_month] < months[current_month - 1]){
                for (int k = months[current_month]; k < months[current_month - 1]; k++) {
                    things[months[current_month] - 1].insert(end(things[months[current_month] - 1]), begin(things[k]), end(things[k]));
                }
                things.resize(months[current_month]);
            }
        }
        else {
            if (operation == "ADD") {
                int k;
                string thing;

                cin >> k >> thing;
                things[k - 1].push_back(thing);

            }
            if (operation == "DUMP") {
                int k;
                cin >> k;

                cout << things[k - 1].size();

                for (const auto& thing: things[k - 1]) {
                    cout << " " << thing;
                }
                cout << endl;
            }
        }
    }

    return 0;
}