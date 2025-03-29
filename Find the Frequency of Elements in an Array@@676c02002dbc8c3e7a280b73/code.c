#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int freq[n];
    for (int i = 0; i < n; i++) {
        freq[i] = -1;  // Initialize frequency array with -1
    }

    // Count frequencies
    for (int i = 0; i < n; i++) {
        int count = 1;  // Initialize count for arr[i]
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;        // Increment count for duplicates
                freq[j] = 0;    // Mark the duplicate as counted
            }
        }
        if (freq[i] != 0) {  // Store frequency only for non-duplicate (unmarked) values
            freq[i] = count;
        }
    }

    // Print unique elements and their frequencies
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]);
        }
    }

    return 0;
}
