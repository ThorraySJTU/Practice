#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int findKthLargest(vector<int>& nums, int k)
{
    int length = nums.size();
    if (length == 0 || k > length)
    {
        return 0;
    }
    priority_queue<int, vector<int>, greater<int> > heap;
    for (int i = 0; i < length; i++)
    {
        heap.push(nums[i]);
        if(heap.size()>k)
        {
            heap.pop();
        }
    }
    return heap.top();
}
int main()
{
    int n[] = {3,2,1,5,6,4} ;
    vector<int> vec(n, n+6) ;
    int a = findKthLargest(vec,2);
    cout<<a;
    return 0;
}
