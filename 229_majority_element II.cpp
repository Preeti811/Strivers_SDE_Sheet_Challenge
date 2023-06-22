class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0; i<n; i++)
            mp[nums[i]]++;
        int p=n/3;

        vector<int> ans;
        for(auto it:mp){
            if(it.second>p)
                ans.push_back(it.first);
        }
        return ans;
    }
};
