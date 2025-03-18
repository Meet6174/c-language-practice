#include <stdio.h>
#include <string.h>

int main() {
    char *words[] = {"madam", "hello"};
    int count = sizeof(words) / sizeof(words[0]);

    for (int k = 0; k < count; k++) {
        char *str = words[k];
        int len = strlen(str);
        int is_palindrome = 1;

        for (int i = 0; i < len / 2; i++) {
            if (str[i] != str[len - i - 1]) {
                is_palindrome = 0;
                break;
            }
        }

        printf("\"%s\" is %s palindrome.\n", str, is_palindrome ? "" : "not a");
    }

    return 0;
}
