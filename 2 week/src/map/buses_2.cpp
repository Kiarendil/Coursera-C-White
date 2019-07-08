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
    map<vector<string>, int> routes;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++){
        int N;
        cin >> N;

        vector<string> stops = create_vector_string(N);

        int new_number = routes.size();

        if (routes.count(stops) == 0) {
            routes[stops] = new_number + 1;
            cout << "New bus " << routes[stops] << endl;
        }
        else
            cout << "Already exists for " << routes[stops] << endl;

    }

    return 0;
}