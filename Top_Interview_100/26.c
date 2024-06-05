class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        int length = nums.size();
        for(int i = 0; i < length; i++){
            if(nums[k] != nums[i]){
                k++;
                nums[k] = nums[i];
            }
        }
        return k+1;
    }
};
