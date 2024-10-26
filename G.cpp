#include <bits/stdc++.h>
using namespace std;

void contest(int n, int k) {
    
    for (int i = 1; i <= k; i++) {
        cout << i << " ";
    }

   
    for (int i = n; i > k; i--) {
        cout << i << " ";
    }

    cout << endl;
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n, k;
        cin >> n >> k;  
        contest(n, k);    
    }

    return 0;
}
