#include <stdio.h>

// Function to calculate the average
float calculateAverage(int marks[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += marks[i];
    }
    return (float)sum / size;
}

int main() {
    int n;

    // Input the number of marks
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int marks[n];

    // Input the marks
    printf("Enter the marks of %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Call the function and display the average
    float average = calculateAverage(marks, n);
    printf("The average of the marks is: %.2f\n", average);

    return 0;
}

