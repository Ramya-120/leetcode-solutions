char findTheDifference(char* s, char* t) {
    char ans = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        ans ^= s[i];
    }

    for (int i = 0; t[i] != '\0'; i++) {
        ans ^= t[i];
    }

    return ans;
}