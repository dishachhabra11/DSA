class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n=position.size();
        vector<pair<int,int>> sor(n);
        vector<float>time(n);
        stack <float>st;
        int ans=0;
        for(int i=0;i<n;i++){
            sor[i].first=target-position[i];
            sor[i].second=speed[i];
        }
        sort(sor.begin(),sor.end());
        
        for(int i=0;i<n;i++){
            time[i]=sor[i].first/(float)sor[i].second;
        }
        ans=n; 
        st.push(time[n-1]);
        for(int i=n-2;i>=0;i--){
            if( !st.empty() && time[i]<st.top()){
                st.push(time[i]);
            }
         
            else{
                while(!st.empty() && time[i]>=st.top()){
                        st.pop();
                        ans--;
                }
                st.push(time[i]);
            }
        }
return st.size();
    }
};