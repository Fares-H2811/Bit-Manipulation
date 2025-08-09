#include <stdio.h>
#include <stdbool.h>

// Function declarations
int setBit(int num, int pos);
int clearBit(int num, int pos);
int toggleBit(int num, int pos);
int readBit(int num, int pos);
void Pos_or_Neg(int num);
void Even_or_Odd(int num);
bool isValidBitPosition(int pos);

int main() {
    int num, pos, choice, result;
    bool validPosition;

    // Input number from user
    printf("Enter an integer num: ");
    scanf("%d", &num);

    do {
        // Check input position from user in range or not
        printf("\nEnter a bit position (0 to 31): ");
        scanf("%d", &pos);
        validPosition = isValidBitPosition(pos);

        if (!validPosition) {
            printf("Invalid bit position! Please enter a pos between 0 and 31.\n");
        }
    } while (!validPosition);

    // Make the menu for user to choose what to do with the integer
    do {
        printf("\nMenu - Choose an operation:\n");
        printf("1. Set a Bit\n");
        printf("2. Clear a Bit\n");
        printf("3. Read a Bit\n");
        printf("4. Toggle a Bit\n");
        printf("5. Check even or odd\n");
        printf("6. Check positive or negative\n");
        printf("7. Reassign integer and position\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Match the case user chose with the functions
        switch (choice) {
            case 1: // Set a bit
                result = setBit(num, pos);
                printf("Result after setting bit %d: %d\n", pos, result);
                break;
            case 2: // Clear a bit
                result = clearBit(num, pos);
                printf("Result after clearing bit %d: %d\n", pos, result);
                break;
            case 3: // Read a bit
                result = readBit(num, pos);
                printf("Bit %d is: %d\n", pos, result);
                break;
            case 4: // Toggle a bit
                result = toggleBit(num, pos);
                printf("Result after toggling bit %d: %d\n", pos, result);
                break;
            case 5: // Check even or odd
                Even_or_Odd(num);
                break;
            case 6: // Check positive or negative
                Pos_or_Neg(num);
                break;
            case 7: // Reassign the number and position
                printf("Enter a new integer number: ");
                scanf("%d", &num);
                do {
                    printf("Enter a new bit position (0 to 31): ");
                    scanf("%d", &pos);
                    if (!isValidBitPosition(pos)) {
                        printf("Invalid bit position! Please enter a position between 0 and 31.\n");
                    }
                } while (!isValidBitPosition(pos));
                printf("Number and position reassigned successfully!\n");
                break;
            case 8: // Exit
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice! Please choose between 1 and 8.\n");
        }
    } while (choice != 8);

    return 0;
}

// Function to set a bit at a given position
int setBit(int num, int pos) {
    return num | (1 << pos);
}

// Function to clear a bit at a given position
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

// Function to read a bit at a given position
int readBit(int num, int pos) {
    return (num >> pos) & 1;
}

// Function to toggle a bit at a given position
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}

// Function to check Even_or_Odd for a given number
void Even_or_Odd(int num) {
    if (num & 1) {
        printf("Number %d is odd.\n", num);
    } else {
        printf("Number %d is even.\n", num);
    }
}

// Function to check Positive or Negative for a given number
void Pos_or_Neg(int num) {
    if (num == 0) {
        printf("Number %d is zero.\n", num);
    } else if (num & (1 << (sizeof(int) * 8 - 1))) {
        printf("Number %d is negative.\n", num);
    } else {
        printf("Number %d is positive.\n", num);
    }
}

// Function to validate if the bit position is within the valid range (0 to 31)
bool isValidBitPosition(int pos) {
    return pos >= 0 && pos < 32;
}
