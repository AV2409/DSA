class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        // sort(nums.begin(),nums.end());

        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i]==nums[i+1]) return true;
        // }

        // return false;

        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])==1) return true;

            s.insert(nums[i]);
        }

        return false;


        
    }
};