class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> index;
        int size=nums.size();        
        unordered_map<int,int> mp;

        for(int i=0; i<size; i++)
            mp[i]=nums[i];
                
        for(int i=0; i<size; i++){
            int p=target-nums[i];
            for(auto it:mp){
                if(it.first!=i && it.second==p){
                    if(index.size()==2)
                        break;
                    index.push_back(i);
                    index.push_back(it.first);
                  
                }
            }
        }
        
        return index;
    }
};
