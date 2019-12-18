#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int findUgly(int n)
{
    priority_queue<int, vector<int>, greater<int> >heap;
    heap.push(1);
    int length = 0;
    int temp = 0;
    while(length < n)
    {
        if(temp != heap.top())
        {
            temp = heap.top();
            heap.push(temp*2);
            heap.push(temp*3);
            heap.push(temp*5);
            length++;

        }
        else
        {
            heap.pop();
        }
    }
    return heap.top();
}
int main()
{
    findUgly(20);
    return 0;
}
