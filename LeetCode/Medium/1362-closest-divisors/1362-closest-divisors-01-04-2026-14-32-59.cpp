class Solution {
public:
    vector<int> closestDivisors(int num) {
        int a = num+1;
        int b = num+2;
        vector<int>ans;
        int diff=INT_MAX;

        for(int i=1;i*i<=a;i++)
        {
            if(a%i==0)
            {
                int x =  i;
                //Here we are not making a check of duplicate, as we check in divisor because 
                //yha duplicate chl jayenge.
                int y = a/i;
                int v = abs(x-y);
                if(v<diff)
                {
                    diff=v;
                    ans={x,y};
                }
            }
        }
        for(int i=1;i*i<=b;i++)
        {
            if(b%i==0)
            {
                int x =  i;
                int y = b/i;
                int v = abs(x-y);
                if(v<diff)
                {
                    diff=v;
                    ans={x,y};
                }
            }
        }
    

    return ans;
    }
};