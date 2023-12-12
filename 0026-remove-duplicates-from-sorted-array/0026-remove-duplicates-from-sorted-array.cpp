class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n = arr.size();
        int previous = arr[0];
        int count = 0;
        int j = 0;
        for(int i = 1; i < n; i++){
            if(previous == arr[i]){
                count++;
            }else{
                j++;
                arr[j] = arr[i];
            }
            previous = arr[i];
        }
        return n - count;
        }
};