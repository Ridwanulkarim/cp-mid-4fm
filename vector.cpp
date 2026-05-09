#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << "Vector Elements:\n";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    return 0;
}