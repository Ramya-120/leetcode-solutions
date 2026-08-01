#include <stdbool.h>

bool isSubsequence(char* s, char* t) {
    int i = 0, j = 0;

    while (s[i] != '\0' && t[j] != '\0') {
        if (s[i] == t[j]) {
            i++;
        }
        j++;
    }

    return s[i] == '\0';
}