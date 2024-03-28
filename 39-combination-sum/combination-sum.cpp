class Solution {
public:

     
 void solve(vector<int>& candidates,int &target,int &sum,vector<int> &currcomb,
int &currindex, vector<vector<int>>&ans){

if(sum>target){
    return;
}
if(sum==target){
    ans.push_back(currcomb);
    return;
}
for(int i=currindex;i<candidates.size();i++){
    currcomb.push_back(candidates[i]);
    sum+=candidates[i];
    solve(candidates,target,sum,currcomb,i,ans);
    sum-=candidates[i];
    currcomb.pop_back();
}
 }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int sum=0;
        int currindex=0;
        vector<int> currcomb;
        vector<vector<int>>ans;
        solve(candidates,target,sum,currcomb,currindex,ans);
        return ans;
    }

};