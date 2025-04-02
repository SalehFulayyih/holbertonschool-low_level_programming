#include <stdio.h>
#include <string.h>


void reverse_string(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

// Function to check if a number is a palindrome
int is_palindrome(int n) {
    char str[12], rev[12];
    sprintf(str, "%d", n);
    strcpy(rev, str);
    reverse_string(rev); // Reverse the string manually
    return strcmp(str, rev) == 0;
}



int main(void) {
    int max_palindrome = 0;

    for (int i = 999; i >= 100; i--) {
        for (int j = 999; j >= 100; j--) {
            int product = i * j;
            if (is_palindrome(product) && product > max_palindrome) {
                max_palindrome = product;
            }
        }
    }

    // Save the result to "102-result"
    FILE *file = fopen("102-result", "w");
    if (file) {
        fprintf(file, "%d", max_palindrome);
        fclose(file);
    }

    return 0;
}
