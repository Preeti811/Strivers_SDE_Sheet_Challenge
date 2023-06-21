class Solution {
public:
    vector<vector<int>> ans;
    void solve(int index, int currSum, vector<int>& candidates, int target, vector<vector<int>> &ans, vector<int> ds){
        if(currSum==target)
            ans.push_back(ds);
        if(currSum>target)
            return;

        // if(index==candidates.size()){
        //     if(currSum==target)
        //         ans.push_back(ds);
        //     else
        //         return;
        // }

        for(int i=index; i<candidates.size(); i++){
            if(i>index and candidates[i]==candidates[i-1])
                continue;
            ds.push_back(candidates[i]);
            currSum+=candidates[i];
            solve(i+1, currSum, candidates, target, ans, ds);
            ds.pop_back();
            currSum-=candidates[i];
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        solve(0,0,candidates,target,ans,ds);
        return ans;
    }
};
