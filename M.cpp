#include <iostream>
#include <vector>
using namespace std;

// Function to print the range from 1 to n
void printRange(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << i << (i == n ? "\n" : " ");
    }
}

int main() {
    int t;
    cin >> t; // First input line: number of test cases
    
    // Loop through each test case
    while (t--) {
        int n;
        cin >> n; // Read n for each test case
        printRange(n); // Call function to print range from 1 to n
    }

    return 0;
}
