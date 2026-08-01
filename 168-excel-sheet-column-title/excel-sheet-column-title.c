char* convertToTitle(int columnNumber) {
    char *result = (char *)malloc(20 * sizeof(char));
    int index = 0;

    while (columnNumber > 0) {
        columnNumber--;   // Adjust for 0-based indexing
        result[index++] = (columnNumber % 26) + 'A';
        columnNumber /= 26;
    }

    result[index] = '\0';

    // Reverse the string
    int left = 0, right = index - 1;
    while (left < right) {
        char temp = result[left];
        result[left] = result[right];
        result[right] = temp;
        left++;
        right--;
    }

    return result;
}