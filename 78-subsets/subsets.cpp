// class Solution {
// public:

// void solve(vector<int>& nums,vector<vector<int>>&ans){
//       if(nums.size()==0){
//         if(!std::count(ans.begin(),ans.end(),nums)){ans.push_back(nums);
//      }
//         return;
//     }
//      if(!std::count(ans.begin(),ans.end(),nums)){ans.push_back(nums);
     
//      }
//      else{
//         return;
//      }
   
//     for(int i=0;i<nums.size();i++){
//         vector<int> temp=nums;
//         temp.erase(temp.begin()+i);
//         solve(temp,ans);
//     }

// }
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>set;
        

//         solve(nums,ans);
     
//         return ans;
        
//     }
// };

/*
    Given an integer array of unique elements, return all possible subsets (the power set)
    Ex. nums = [1,2,3] -> [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

    Backtracking, generate all combinations, push/pop + index checking to explore new combos

    Time: O(n x 2^n)
    Space: O(n)
*/

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> result;
        dfs(nums, 0, curr, result);
        return result;
    }
private:
    void dfs(vector<int>& nums, int start, vector<int>& curr, vector<vector<int>>& result) {
        result.push_back(curr);
        for (int i = start; i < nums.size(); i++) {
            curr.push_back(nums[i]);
            dfs(nums, i + 1, curr, result);
            curr.pop_back();
        }
    }
};
