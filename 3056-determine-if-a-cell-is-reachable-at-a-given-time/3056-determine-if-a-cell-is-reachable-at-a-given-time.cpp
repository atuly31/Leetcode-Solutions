class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
     if(sx==fx && sy == fy && t==1){
return false;
}
int diff = abs(sx-fx);
int diff1 = abs(sy-fy);
if(max(diff,diff1)<=t){
return true;
}   
return false;

    }
};