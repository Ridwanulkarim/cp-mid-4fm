#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string, int> mp;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for(int i = 0; i < n; i++) {
        string name;
        int marks;
        cin >> name >> marks;
        mp[name] = marks;
    }
    cout << "Map Data:\n";
    for(auto x : mp) {
        cout << x.first << " ";
        cout << x.second << endl;
    }
    return 0;
}