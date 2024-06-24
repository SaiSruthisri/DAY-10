class Solution {
public:
    int romanToInt(string s) {
         vector<pair<char, int>> v = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
              int n=s.size();
              int sum=0;
              int prev=0;

              for(int i=n-1;i>=0;--i)
              {
                int curr=0;
                for(auto x:v)
                {
                    if(s[i]==x.first)
                  {
                    curr=x.second;
                    break;
                  }
                }

                   if(curr<prev)
                   {
                    sum-=curr;
                   }
                   else
                   {
                    sum+=curr;
                   }
                    prev=curr;

              }




         return sum;
    }
};
