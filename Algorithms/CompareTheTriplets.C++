#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    vector < int > vResult;
    int iAScore = 0;
    int iBScore = 0;
    if(a0 > b0)
    {
        iAScore++;
    }
    if(a1 > b1)
    {
        iAScore++;
    }
    if(a2 > b2)
    {
        iAScore++;
    }
    if(a0 < b0)
    {
        iBScore++;
    }
    if(a1 < b1)
    {
        iBScore++;
    }
    if(a2 < b2)
    {
        iBScore++;
    }
    vResult.push_back(iAScore);
    vResult.push_back(iBScore);
    return vResult;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
