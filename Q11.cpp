//Move zeros to end with temporary array or Space complexity-O(1)
#include <bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> a) {
    int j = -1;
    
    // Find the first zero
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            j = i;
            break;
        }
    }
    
    // If there are no zeros, return the array as is
    if (j == -1) return a;

    // Move non-zero elements forward
    for (int i = j + 1; i < n; i++) {
        if (a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}
