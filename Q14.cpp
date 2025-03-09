#include <bits/stdc++.h>
using namespace std;

int onceTwice(int arr[], map<long long, int>& mpp, int n) {
    for (int i = 0; i < n; i++) {
        mpp[arr[i]]++;
    }
    for (auto it : mpp) {
        if (it.second == 1) {
            return it.first;
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    map<long long, int> mpp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int once = onceTwice(arr, mpp, n);
    
    cout << "Number that appears once: " << once << endl;
    cout << "Numbers that appear twice: ";
    for (auto it : mpp) {
        if (it.first != once && it.second == 2) {
            cout << it.first << " ";
        }
    }
    cout << endl;
    return 0;
}
