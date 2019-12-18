#include<iostream>
#include<queue>
#include<vector>
#include <map>
using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k)
{
    int length = nums.size();
    map<int, int>hash;
    for(int i = 0; i < length; i++)
    {
        hash[nums[i]]++;
    }

    int max_vec = INT_MIN;
    int min_vec = INT_MAX;
    for(int i = 0; i < length ;i++)
    {
        if(nums[i] > max_vec)
            max_vec = nums[i];
        if(nums[i] < min_vec)
            min_vec = nums[i];
    }
    priority_queue<int,vector<int>,less<int> >heap;
    for(int i = min_vec; i <= max_vec;i++)
    {
        if(hash[i]!=0)
            heap.push(hash[i]);
    }

    vector<int> res_times;
    vector<int> res;
    for(int i = 0; i < k; i++)
    {
        res_times.push_back(heap.top());
        heap.pop();
    }
    for(int j = 0; j < k; j++)
    {
        for(int i = min_vec; i <= max_vec; i++)
        {
            if(res_times[j] == hash[i])
            {
                res.push_back(i);
                hash[i] = 0;
            }
        }
    }
    for(int i = 0; i < res.size(); i++)
    {
        cout<<res[i];
    }
    return res;
}
int main()
{
    int n[] = {-1,-1,1,1,2,2,3} ;
    vector<int> vec(n, n+6) ;
    topKFrequent(vec,2);
    return 0;
}
