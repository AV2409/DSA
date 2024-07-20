class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        vector<int> ans;

        // map<int,int> mp;

        set<int> s;

        for(int i=0;i<nums.size();i++){
            if(s.count(nums[i])==1) ans.push_back(nums[i]);

            s.insert(nums[i]);
        }

        return ans;

        
    }
};