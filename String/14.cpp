#include<iostream>
#include<string>
#include<vector>
using namespace std;
string longestCommonPrefix(vector<string>& strs)
{
    if(strs.size()==0) return "";
    string result = "";
    for (int i=0;i<strs[0].size();i++)
    {
        for (int j=1;j<strs.size();j++)
        {
            if (strs[0][i]!=strs[j][i])
            {
                return result;
            }
        }
        result += strs[0][i];
    }
    return result;
}
int main()
{
    string a[] = {"flower","flow","flaw"};
    vector<string> temp(a, a+3);
    string ans = longestCommonPrefix(temp);
    cout<<ans;
    return 0;
}
