//
// Created by Kirill Ivanov on 2019-07-08.
//

#include <iostream>
#include <map>
#include <vector>

using namespace std;

vector<string> create_vector_string(int N) {
    vector<string> result;
    for(int i = 0; i < N; i++) {
        string inp;
        cin >> inp;
        result.push_back(inp);
    }
    return result;
}

int main() {
    map<string, vector<string>> buses;
    map<string, vector<string>> stops;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++) {
        string operation;
        cin >> operation;

        if (operation == "NEW_BUS") {
            string bus;
            int count_stop;
            vector<string> new_stops;

            cin >> bus >> count_stop;
            new_stops = create_vector_string(count_stop);
            buses[bus] = new_stops;

            for (const auto& stop: new_stops) {
                stops[stop].push_back(bus);
            }
        }
        if (operation == "BUSES_FOR_STOP") {
            string stop;
            cin >> stop;

            if (stops.count(stop) == 0)
                cout << "No stop" << endl;
            else {
                for (const auto& bus: stops[stop]) {
                    cout << bus << " ";
                }
                cout << endl;
            }
        }
        if (operation == "STOPS_FOR_BUS") {
            string bus;
            cin >> bus;

            if (buses.count(bus) == 0)
                cout << "No bus" << endl;
            else {
                for (const auto& stop : buses[bus]) {
                    if (stops[stop].size() == 1 && stops[stop][0] == bus) {
                        cout << "Stop " << stop << ": no interchange" << endl;
                    }
                    else {
                        cout << "Stop " << stop << ": ";
                        for (const auto& a_bus : stops[stop]) {
                            if (a_bus != bus)
                                cout << a_bus << " ";
                        }
                        cout << endl;
                    }
                }
            }
        }
        if (operation == "ALL_BUSES") {
            if (buses.empty())
                cout << "No buses" << endl;
            else {
                for (const auto&[key, value] : buses) {
                    cout << "Bus " << key << ": ";
                    for (const auto &stop: value) {
                        cout << stop << " ";
                    }
                    cout << endl;
                }
            }
        }
    }


    return 0;
}