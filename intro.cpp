#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, goal;
    int age;
    string languages = "C++ (learning), Python (next)";

    getline(cin, name);
    cin >> age;
    cin.ignore();
    getline(cin, goal);

    cout << "=============================" << endl;
    cout << "   Hello, World! I'm " << name << endl;
    cout << "=============================" << endl;
    cout << "Age      : " << age << endl;
    cout << "Learning : " << languages << endl;
    cout << "Goal     : " << goal << endl;
    cout << "Day 1 of my coding journey!" << endl;

    return 0;
}