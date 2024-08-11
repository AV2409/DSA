class Solution {
public:
    void rotate(vector<int>& nums, int k) {
    k=k%nums.size();

    vector<int> temp;
    int x=nums.size()-k;
    if(nums.size()==1) return;

    for(int i=x;i<nums.size();i++){
        temp.push_back(nums[i]);
    }

    for(int i=0;i<x;i++){
        temp.push_back(nums[i]);
    }

    nums=temp;
        
    }
};