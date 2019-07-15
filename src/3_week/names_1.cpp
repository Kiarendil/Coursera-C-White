//
// Created by Kirill Ivanov on 2019-07-15.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person {
public:
    void ChangeFirstName(int year, const string& first_name) {
        // добавить факт изменения имени на first_name в год year
    }
    void ChangeLastName(int year, const string& last_name) {
        // добавить факт изменения фамилии на last_name в год year
    }
    string GetFullName(int year) {
        // получить имя и фамилию по состоянию на конец года year
    }
private:
    struct PersonInAYear {
        string name;
        string surname;
        int year;
    };
    vector<PersonInAYear> PersonYears;


};


int main() {


    return 0;
}