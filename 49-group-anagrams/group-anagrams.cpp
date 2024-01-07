class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       
        vector<vector<string>> ans;
        vector<string> vec;
        vector<string>basic;
       int  n=strs.size();
        vector<bool> rep(n,false);
        vec=strs;
        
       
        

        for(int i=0;i<n;i++){
            sort(vec[i].begin(),vec[i].end());
             }

             for(int i=0;i<n ;i++){
       
               if(rep[i]==false)
                { vector <string>basic={};
                  basic.push_back(strs[i]);
                 for(int j=i+1;j<n ;j++){
                 if(vec[i]==vec[j]){
                     basic.push_back(strs[j]);
                     rep[j]=true;
                 }
                 }
                 ans.push_back(basic);
                 strs[i]="";
                }
             
             }

        return ans;
    }
};