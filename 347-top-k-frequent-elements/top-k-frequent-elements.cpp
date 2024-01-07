class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int,int> m;
       vector<int> ans;
       int maxi=INT_MIN;
       int maxval=0;
     for(int i=0;i<nums.size();i++){
         m[nums[i]]++;
     }
   
     while(k--)
     {
       maxi=INT_MIN;
      for(auto i:m){
            if(i.second > maxi){maxi=i.second;
               maxval=i.first;}
             
      }
      ans.push_back(maxval);
      m.erase (maxval);
     }
      return ans;  
  }   
};