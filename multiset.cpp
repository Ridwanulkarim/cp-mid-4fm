#include <iostream>
#include <set>
using namespace std;
int main() {
    multiset<int> ms;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        ms.insert(x);
    }
    cout << "Multiset Elements:\n";
    for(int x : ms) {
        cout << x << " ";
    }
    return 0;
}