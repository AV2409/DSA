class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1) return;
        int nonZeroIndex=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[nonZeroIndex]);
                nonZeroIndex++;
            }
        }

        
    }
};