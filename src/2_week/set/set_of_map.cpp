//
// Created by Kirill Ivanov on 2019-07-08.
//

#include <iostream>
#include <map>
#include <set>

using namespace std;

set<string> BuildMapValuesSet(const map<int, string>& m) {
    set<string> s;
    for (const auto& [key, value]: m) {
        s.insert(value);
    }
    return s;
}
//
//int main() {
//
//    set<string> values = BuildMapValuesSet({
//                                                   {1, "odd"},
//                                                   {2, "even"},
//                                                   {3, "odd"},
//                                                   {4, "even"},
//                                                   {5, "odd"}
//                                           });
//
//    for (const string& value : values) {
//        cout << value << endl;
//    }
//
//
//    return 0;
//}