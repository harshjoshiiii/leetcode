class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) 
    {
        long long volume = (long long)(length)*(long long)width*(long long)height;
        int bulk=0;
        int heavy=0;
        if(mass>=100)
            heavy=1;
        if(length>=10000 || width>=10000 || height>=10000)
            bulk=1;
        if(volume >= 1e9)
            bulk=1;
        if(bulk==1 && heavy==1)
            return "Both";
        if(bulk!=1 && heavy!=1)
            return "Neither";
        if(bulk==1)
            return "Bulky";
        if(heavy==1)
            return "Heavy";
        return "";
    }
};