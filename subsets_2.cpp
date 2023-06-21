class Solution {
public:
    void solve(int index, vector<vector<int>> &ans, vector<int> ds, vector<int>& nums ){
        // //1st approach
        // ans.push_back(ds);        
        // for(int i=index; i<nums.size(); i++){
        //     if(i>index and nums[i]==nums[i-1])
        //         continue;
        //     ds.push_back(nums[i]);
        //     solve(i+1,ans,ds,nums);
        //     ds.pop_back();           
        // }
       

       //2nd approach
       if(index==nums.size()){
            bool present=find(ans.begin(),ans.end(),ds)!=ans.end();
            if(!present)
                ans.push_back(ds);
        return;
       }
       ds.push_back(nums[index]);
       solve(index+1,ans,ds,nums);
       ds.pop_back();
       solve(index+1,ans,ds,nums);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> ds;  
        sort(nums.begin(),nums.end());
        solve(0,ans,ds,nums);
        return ans; 
    }
};
