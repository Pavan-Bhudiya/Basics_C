#include <stdio.h>

// Define constants using #define directive
#define MAX_SIZE 10

// Define constants using const keyword
const int MIN_VALUE = 0;

// Define a structure with union inside
struct Data {
    int type;
    union {
        int integer;
        float decimal;
    } value;
};

// Function to display an array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Declare and initialize variables
    int num1 = 10, num2 = 20;
    float avg;
    int arr[MAX_SIZE] = {1, 2, 3, 4, 5};
    int i = 0;
    
    // Initialize a structure variable
    struct Data data;
    data.type = 1;
    data.value.integer = 100;

    // Check if num1 is greater than num2 using if-else
    if (num1 > num2) {
        printf("%d is greater than %d\n", num1, num2);
    } else {
        printf("%d is not greater than %d\n", num1, num2);
    }

    // Calculate average using for loop
    for (int i = 0; i < MAX_SIZE; i++) {
        avg += arr[i];
    }
    avg /= MAX_SIZE;
    printf("Average: %.2f\n", avg);

    // Use while loop to display array elements
    while (i < MAX_SIZE) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    // Use do-while loop to display array elements in reverse
    i = MAX_SIZE - 1;
    do {
        printf("%d ", arr[i]);
        i--;
    } while (i >= 0);
    printf("\n");

    // Use switch-case to print data type and value
    switch (data.type) {
        case 1:
            printf("Data type: Integer, Value: %d\n", data.value.integer);
            break;
        case 2:
            printf("Data type: Float, Value: %.2f\n", data.value.decimal);
            break;
        default:
            printf("Unknown data type\n");
    }

    // Use miscellaneous operators
    int result = (num1 > num2) ? num1 : num2;
    printf("Result: %d\n", result);

    // Define and use pointers
    int *ptr;
    ptr = &num1;
    printf("Value pointed by ptr: %d\n", *ptr);

    // Call function to display array
    displayArray(arr, MAX_SIZE);

    return 0;
}
