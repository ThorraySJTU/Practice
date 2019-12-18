#include<iostream>
using namespace std;
int lengthOfLongestSubstring(string s)
{
    int start(0), end(0), length(0), result(0);
    int sSize = s.size();
    while (end < sSize)
    {
        char tmpChar = s[end];
        for (int index = start; index < end; index++)
        {
            //cout<<index<<" "<<end<<" "<<s[index]<<" "<<tmpChar<<endl;
            if (tmpChar == s[index])
            {
                start = index + 1;
                length = end - start;
                break;
            }
        }
        end++;
        length++;
        result = max(result, length);
    }
    return result;
}
int main()
{
    string a = "abcabcbb";
    int b = lengthOfLongestSubstring(a);
    cout<<b;
    return 0;
}
