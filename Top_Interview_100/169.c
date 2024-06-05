class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        int k;
        for(int i = 0; i < n; i++){
            if(count == 0){
                k = nums[i];
            }
            if(k == nums[i]){
                count++;
            } else{
                count--;
            }
        }
        return k;
    }
};
