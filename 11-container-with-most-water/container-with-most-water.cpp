class Solution {
public:
    int maxArea(vector<int>& height) {

       vector<int>::iterator itr1;
       vector<int>::iterator itr2;

       itr1=height.begin();
       itr2=height.end()--;


int i=0;
int j=height.size()-1;
int high=0;
int res=0;

      while( i<j ){

          high= min(height[i],height[j])*(j-i);
          res=max(high,res);

if(height[i]>height[j] ) j--;
else i++;
      }

  return res;
      }
        
    
};