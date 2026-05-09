#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    int low = 0;
    int high = n - 1;
    int ans = n;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] >= key) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << "Lower Bound Index = " << ans;
    return 0;
}