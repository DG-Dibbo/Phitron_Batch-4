#include <stdio.h>
#include <string.h>

int main() {
    char a[1001]; // Assuming the maximum string length is 1000
    scanf("%s", a);

    int is_palindrome = 1; // Assume it's a palindrome initially

    int len = strlen(a);
    int i = 0; // Pointer at the beginning
    int j = len - 1; // Pointer at the end
    int tmp;
    while (i < j) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        if (a[i] != a[j]) {
            is_palindrome = 0; // Not a palindrome
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
