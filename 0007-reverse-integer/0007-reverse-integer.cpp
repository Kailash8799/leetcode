class Solution {
public:
    int reverse(int x) {
        if(x > 2147483647)return 0;
        int res = x;
        long n = 0;
        while(x!=0){
            int j = x % 10;
            x/=10;
            if(n * 10 > 2147483647)return 0;
            if(n * 10 < -2147483648)return 0;
            n = n * 10 + j;
        }
        
        return n;
    }
};