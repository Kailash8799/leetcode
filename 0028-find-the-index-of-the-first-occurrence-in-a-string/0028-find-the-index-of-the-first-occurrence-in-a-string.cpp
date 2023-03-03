class Solution {
public:
    int strStr(string haystack, string needle) {
         bool isFound = haystack.find(needle) != string::npos;
         if(isFound){
             return haystack.find(needle);
         }
        else{
            return -1;
        }
    }
};