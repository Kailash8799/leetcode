class Solution {
public:
    int arraySign(vector<int>& nums) {
        long long prod = 0; 
        for(int i = 0; i < nums.size();i++){
            if(nums[i] < 0){
                prod++;
            }
            else if(nums[i] == 0){
                return 0;
            }
        }
        if(prod % 2 == 0){
            return 1;
        }
        else{
            return -1;
        }
    }
};