//Reversing a string
#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int left = 0, right = strlen(str) - 1;
    
    while (left < right) {
        // Swap characters
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        
        left++;
        right--;
    }
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    scanf("%s", str); // Reads a single word (no spaces)

    // Reverse the string
    reverseString(str);

    // Output reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}
