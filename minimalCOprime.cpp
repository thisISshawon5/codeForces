#include <iostream>
using namespace std;

// Function to check if two numbers are coprime
bool areCoprime(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a == 1; // Two numbers are coprime if their GCD is 1
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        long long l, r;
        cin >> l >> r;

        // The result starts as 0
        int count = 0;

        for (long long i = l; i <= r; ++i) {
            for (long long j = i; j <= r; ++j) {
                if (areCoprime(i, j)) { // Check if the segment [i, j] is coprime
                    count++;
                    break; // Since we are looking for minimal coprime segments, move to the next i
                }
            }
        }

        // Output the result for this test case
        cout << count << endl;
    }

    return 0;
}
