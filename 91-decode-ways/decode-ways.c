int numDecodings(char* s) {
    int n = strlen(s);

    if (n == 0 || s[0] == '0')
        return 0;

    int dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= n; i++) {
        dp[i] = 0;

        // Single digit decode
        if (s[i - 1] != '0')
            dp[i] += dp[i - 1];

        // Two digit decode
        int num = (s[i - 2] - '0') * 10 + (s[i - 1] - '0');
        if (num >= 10 && num <= 26)
            dp[i] += dp[i - 2];
    }

    return dp[n];
}