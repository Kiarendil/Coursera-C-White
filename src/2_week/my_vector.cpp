//
// Created by Kirill Ivanov on 2019-06-15.
//

#include "my_vector.h"
#include <iostream>
#include <vector>

using namespace std;

void print_vector_string(const vector<string>& v) {
    for (const auto &words: v) {
        cout << words << endl;
    }
}

void print_vector_int(const vector<int>& v) {
    for (const auto &words: v) {
        cout << words << endl;
    }
}

vector<int> create_vector_int(int N) {
    vector<int> result;
    for(int i = 0; i < N; i++) {
        int inp;
        cin >> inp;
        result.push_back(inp);
    }
    return result;
}

vector<string> create_vector_string(int N) {
    vector<string> result;
    for(int i = 0; i < N; i++) {
        string inp;
        cin >> inp;
        result.push_back(inp);
    }
    return result;
}

