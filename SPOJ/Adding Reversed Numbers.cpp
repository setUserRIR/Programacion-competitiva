#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    scanf("%d ",&n);

    for(int a = 0; a < n; a++){
        string s1,s2;
        cin >> s1 >> s2;
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        int n1 = stoi(s1), n2 = stoi(s2);
        string s = to_string(n1+n2);
        reverse(s.begin(), s.end());
        cout << stoi(s) << endl;
    } 

    return 0;
}