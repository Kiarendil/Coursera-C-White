//
// Created by Kirill Ivanov on 2019-07-15.
//

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class SortedStrings {
public:
    void AddString(const string& s) {
        strings.push_back(s);
    }
    vector<string> GetSortedStrings() {
        sort(begin(strings), end(strings));
        return strings;
    }
private:
    vector<string> strings;

};


//void PrintSortedStrings(SortedStrings& strings) {
//    for (const string& s : strings.GetSortedStrings()) {
//        cout << s << " ";
//    }
//    cout << endl;
//}

void PrintVectorString(SortedStrings& s) {
    for (const auto& words: s.GetSortedStrings()) {
        cout << words << " ";
    }
}

int main() {
    SortedStrings strings;

    strings.AddString("first");
    strings.AddString("third");
    strings.AddString("second");
    PrintVectorString(strings);

    strings.AddString("aaaaaa");
    PrintVectorString(strings);

    return 0;
}