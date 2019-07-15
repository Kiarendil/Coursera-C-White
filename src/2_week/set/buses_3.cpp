//
// Created by Kirill Ivanov on 2019-07-08.
//

#include <iostream>
#include <map>
#include <set>
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
    map<set<string>, int> routes;

    int Q;
    cin >> Q;

    for (int i = 0; i < Q; i++){
        int N;
        cin >> N;

        vector<string> stops = create_vector_string(N);
        set<string> unique_stops(begin(stops), end(stops));


        int new_number = routes.size();

        if (routes.count(unique_stops) == 0) {
            routes[unique_stops] = new_number + 1;
            cout << "New bus " << routes[unique_stops] << endl;
        }
        else
            cout << "Already exists for " << routes[unique_stops] << endl;

    }

    return 0;
}