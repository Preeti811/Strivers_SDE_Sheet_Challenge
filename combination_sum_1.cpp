class Solution {
public:   
    //Practise 2nd
    void findCom(int index, vector<vector<int>> &ans, vector<int> &ds,int target,vector<int> &candidates ){
        
        if(index==candidates.size()){
            if(target==0)
                ans.push_back(ds);
        return;
        }
        
        if(target>=candidates[index]){
            ds.push_back(candidates[index]);
            findCom(index,ans,ds,target-candidates[index],candidates);
            ds.pop_back();            
        }
        findCom(index+1,ans,ds,target,candidates);
    }
    
    public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>>ans;
        vector<int> ds;
        
        findCom(0,ans,ds,target,candidates);
        return ans;
        
    }
};
