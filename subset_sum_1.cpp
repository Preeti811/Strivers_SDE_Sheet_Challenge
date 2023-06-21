 void solve(vector<int> &ans, int index, vector<int> &arr, int N, int sum){
         
        if(index==N){
            ans.push_back(sum);
            return;
        }
       solve(ans, index+1, arr, N, sum+arr[index]);
       solve(ans, index+1, arr, N, sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        solve(ans,0,arr,N,0);
        return ans;
    }
