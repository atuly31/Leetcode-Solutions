class Solution {
public:
    int maxArea(vector<int>& height) {
     int n = height.size();
     int l = 0, r=n-1;
     int maxarea=0;
     while(l<r){
         int area = min(height[l],height[r])*(r-l);
         maxarea = max(maxarea,area);
         if(height[l]<height[r]){
             l++;
         }
         else{
             r--;
         }
     }
     return maxarea;
    }
};