//
// Created by Kirill Ivanov on 2019-06-16.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> create_vector_int(int N) {
    vector<int> result;
    for(int i = 0; i < N; i++) {
        int inp;
        cin >> inp;
        result.push_back(inp);
    }
    return result;
}

void print_vector_int(const vector<int>& v) {
    for (const auto &words: v) {
        cout << words << endl;
//        cout << words << "";
    }
}

int main() {
    int N;
    vector<int> v_N, v_K;

    cin >> N;
    v_N = create_vector_int(N);

    int average = 0;
    for (auto i: v_N){
        average += i;
    }

    average = average / N;

    for (int i = 0; i < N; i++){
        if (v_N[i] > average) {
            v_K.push_back(i);
        }
    }

    cout << v_K.size() << endl;
    print_vector_int(v_K);

    return 0;
}