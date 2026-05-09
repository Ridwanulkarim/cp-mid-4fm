#include <iostream>
using namespace std;

int solve(int nums[], int n, int x) {
    int left = 0;
    int right = n - 1;
    int ans = n;   

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] >= x) {
            ans = mid;        
            right = mid - 1;  
        } else {
            left = mid + 1;   
        }
    }
    return ans;
}

int main() {
    int n, x;
    cin >> n >> x;

    int nums[100000];   

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << solve(nums, n, x);

    return 0;
}