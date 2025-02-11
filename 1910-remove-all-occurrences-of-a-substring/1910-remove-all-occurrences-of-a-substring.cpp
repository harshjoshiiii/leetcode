class Solution {
public:

    void removeOcc(string &s, string &part)
    {
        int find =s.find(part);
        if(find!= string::npos)  //mtlb sting mol gyi hai.
        {
           string left_part= s.substr(0,find);
           string right_part=s.substr(find+part.size(),s.size());
           s=left_part+right_part;

           removeOcc(s,part);
        }
        else //agr nhi mili mtlb if(find==string::npos)
        {
            return;
        }

    }
    string removeOccurrences(string s, string part) {
        removeOcc(s,part);
        return s;
    }
};