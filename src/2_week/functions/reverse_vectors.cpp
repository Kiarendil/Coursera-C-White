//
// Created by Kirill Ivanov on 2019-06-15.
//

#include <iostream>
#include <vector>
#include "../my_vector.h"

using namespace std;

void Reverse(vector<int>& v) {
    vector<int> tmp;
    int N = v.size();

    for (int i = 0; i < v.size(); i++){
        tmp.push_back(v[N - 1 - i]);
    }
    v = tmp;
}

vector<int> Reversed(const vector<int>& v) {
    vector<int> tmp;
    int N = v.size();

    for (int i = 0; i < v.size(); i++){
        tmp.push_back(v[N - 1 - i]);
    }
    return tmp;
}

int main() {
    int N;
    vector<int> numbers;

    cin >> N;
    numbers = create_vector_int(N);

    vector<int> new_numbers = Reversed(numbers);

    print_vector_int(numbers);
    print_vector_int(new_numbers);


    return 0;
}