//
// Created by Kirill Ivanov on 2019-07-08.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
    map<string, string> countries;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        string operation;
        cin >> operation;

        if (operation == "CHANGE_CAPITAL") {
            string country, new_capital;
            cin >> country >> new_capital;

            if (countries.count(country) == 0) {
                cout << "Introduce new country " << country << " with capital " << new_capital << endl;
            }
            else {
                if (countries[country] == new_capital)
                    cout << "Country " << country << " hasn't changed its capital" << endl;
                else {
                    string old_capital = countries[country];
                    cout << "Country " << country << " has changed its capital from " << old_capital << " to " << new_capital << endl;
                }
            }
            countries[country] = new_capital;
        }
        if (operation == "RENAME") {
            string old_country_name, new_country_name;
            cin >> old_country_name >> new_country_name;

            if (old_country_name == new_country_name || countries.count(old_country_name) == 0 || countries.count(new_country_name) == 1)
                cout << "Incorrect rename, skip" << endl;
            else {
                string capital = countries[old_country_name];
                countries.erase(old_country_name);
                countries[new_country_name] = capital;
                cout << "Country " << old_country_name << " with capital " << capital << " has been renamed to " << new_country_name << endl;
            }


        }
        if (operation == "ABOUT") {
            string country;
            cin >> country;

            if (countries.count(country) == 0)
                cout << "Country " << country << " doesn't exist" << endl;
            else
                cout << "Country " << country << " has capital " << countries[country] << endl;
        }
        if (operation == "DUMP") {
            if (countries.empty())
                cout << "There are no countries in the world" << endl;
            else {
                for (const auto& [key, value] : countries) {
                    cout << key << "/" << value << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}