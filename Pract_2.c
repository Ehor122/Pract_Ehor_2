#include <stdio.h>

// Function for finding NSDs using the Euclidean algorithmThe time it takes to eat a cake
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function for finding the NSD of two numbersint lcm(int a, int b) {
    int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int n;
    printf("Enter the number of numbers: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Finding the NSC for all numbers in the array    int result = numbers[0];
    int result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = lcm(result, numbers[i]);
    }

    printf("Least common multiple: %d\n", result);
    return 0;
}
