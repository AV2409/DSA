class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        
        for(int i=0;i<n-2;i++){
            if(i>0&&(nums[i]==nums[i-1])) continue;
            
            int st=i+1;
            int end=nums.size()-1;
            

            while(st<end){
                vector<int> temp;
                int sum=nums[i]+nums[st]+nums[end];
                if(sum==0)
                {
                    
                    ans.push_back({nums[i],nums[st],nums[end]});

                    while(st<end && nums[st]==nums[st+1]) st++;
                    while(st<end && nums[end]==nums[end-1]) end--;
                   
                    st++;
                    end--;
                }

                else if(sum>0){
                    end--;
                }

                else st++;
            }
        }

        return ans;
        
    }
};