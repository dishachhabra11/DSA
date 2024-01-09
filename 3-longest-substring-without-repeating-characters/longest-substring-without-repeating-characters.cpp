class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count=1;
        int max_count=0;
        string test;
        test.push_back(s[0]);
        if(s.size()==1)return 1;

for(int i=1;i<s.size();i++){
    char target=s[i];
    if(test.find(s[i])==std::string::npos){
test.push_back(target);

}
else{
    int fi=test.find(s[i]);
    test.erase(0,fi+1);
    test.push_back(target);
    
}
count=test.size();
max_count=max(max_count,count);

}
return max_count;


    }
};