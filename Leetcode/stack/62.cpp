#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int>& height)
{
    int length = height.size();
    int ans = 0;
    for(int i = 0; i < length; i++)
    {
        int maxleft = 0, maxright = 0;
        int stack = 0;
        for(int j = 0; j < i; j++)
        {
            if (height[j] > maxleft)
                maxleft = height[j];
        }
        for(int h = i; h < length; h++)
        {
            if (height[h] > maxright)
                maxright = height[h];
        }
        stack = max(min(maxleft, maxright) - height[i], 0);
        ans = ans + stack;
    }
    return ans;
}
int main()
{
    int n[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    vector<int> vec(n, n+12) ;
    int a = trap(vec);
    cout<<a;
    return 0;
}
