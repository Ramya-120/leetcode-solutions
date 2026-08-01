#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char* s, char* t) {
    int mapST[256];
    int mapTS[256];

    for (int i = 0; i < 256; i++) {
        mapST[i] = -1;
        mapTS[i] = -1;
    }

    int n = strlen(s);

    for (int i = 0; i < n; i++) {
        unsigned char c1 = s[i];
        unsigned char c2 = t[i];

        if (mapST[c1] == -1 && mapTS[c2] == -1) {
            mapST[c1] = c2;
            mapTS[c2] = c1;
        }
        else if (mapST[c1] != c2 || mapTS[c2] != c1) {
            return false;
        }
    }

    return true;
}