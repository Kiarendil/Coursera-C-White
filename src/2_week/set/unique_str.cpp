//
// Created by Kirill Ivanov on 2019-07-08.
//

#include <iostream>
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
    int Q;
    cin >> Q;

    vector<string> input_str = create_vector_string(Q);

    set<string> unique_str(begin(input_str), end(input_str));

    cout << unique_str.size();

    
    return 0;
}