class Solution {
public:
    bool solve(vector<int>& arr, int i){
        //base case - two base case: a) if out of bound and negative(as we making every element negative after visiting and question say non negative so khud se kbhi ni hoga negative) then return false
        //b. if value==0 then return false;
        if(i<0 || i>arr.size()-1 || arr[i]<0)   return false;
        if(arr[i]==0)   return true;


        //we will make every index negative if we visited eariler so that we will not stuck in loop.
        arr[i]*=-1;

        //main thing
        bool a = solve(arr, i-arr[i]);
        bool b = solve(arr, i+arr[i]);
    
    return a || b;  
    }
    bool canReach(vector<int>& arr, int start) {
        return solve(arr,start);
    }
};