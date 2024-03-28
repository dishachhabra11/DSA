class Solution {
public:


void solve(vector<int>& nums,vector<int>&currcomb,vector<vector<int>> &ans,vector<bool> &visited){
    if(currcomb.size()==nums.size()){
        ans.push_back(currcomb);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(visited[i]==false){
            currcomb.push_back(nums[i]);
            visited[i]=true;
            solve(nums,currcomb,ans,visited);
            visited[i]=false;
        currcomb.pop_back();
        }
        
        
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>visited(nums.size(),false);
        vector<vector<int>>ans;
        vector<int>currcomb;
        int startindex=0;
        solve(nums,currcomb,ans,visited);
        return ans;
        
    }
};