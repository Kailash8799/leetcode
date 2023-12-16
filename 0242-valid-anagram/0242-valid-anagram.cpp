#include<bits/stdc++.h>

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = t.size();
        int m = s.size();
        if(m != n){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i  = 0; i < n; i++){
            if(t[i] != s[i]){
                return false;
            }
        }
        return true;
    }
};