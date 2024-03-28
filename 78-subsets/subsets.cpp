class Solution {
public:

void solve(vector<int>& nums,vector<vector<int>>&ans){
      if(nums.size()==0){
        if(!std::count(ans.begin(),ans.end(),nums)){ans.push_back(nums);
     }
        return;
    }
     if(!std::count(ans.begin(),ans.end(),nums)){ans.push_back(nums);
     
     }
     else{
        return;
     }
   
    for(int i=0;i<nums.size();i++){
        vector<int> temp=nums;
        temp.erase(temp.begin()+i);
        solve(temp,ans);
    }

}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>set;
        

        solve(nums,ans);
     
        return ans;
        
    }
};