class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k = 2;
        int length = nums.size();

        if(length < k){
            return length;
        }

        for (int i = 2; i < length; i++){
            if(nums[k - 2] != nums[i]){
                nums[k] = nums[i];
                k += 1;
            }
        }
        return k;
    }
};
