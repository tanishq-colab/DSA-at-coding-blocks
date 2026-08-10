#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int fbottomup(int n) {

    vector<int> dp(n + 1);

    dp[1] = 0;

    for (int i = 2; i <= n; i++) {

        int op1 = dp[i - 1];

        int op2 = INT_MAX;
        
        if (i % 2 == 0)
            op2 = dp[i / 2];

        int op3 = INT_MAX;
        if (i % 3 == 0)
            op3 = dp[i / 3];

        dp[i] = 1 + min({op1, op2, op3});
    }

    return dp[n];
}

int main() {

    int n = 10;

    cout << fbottomup(n);

    return 0;
}
