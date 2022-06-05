#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) {
    vector<vector<long long int>> res(n);
    if(n == 1) return {{1}};
    res[0] = {1};
    res[1] = {1,1};
    if(n == 2) return res;
    
    for(int i = 3; i <= n; i++) {
        vector<long long int> temp(i,1);
        for(int j = 1; j < i-1; j++) {
            temp[j] = res[i-2][j-1] + res[i-2][j];
        }
        res[i-1] = temp;
    }
    return res;
}
