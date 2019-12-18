#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int nthSuperUglyNumber(int n, vector<int>& primes) {
    priority_queue<int, vector<int>, greater<int> >heap;
    heap.push(1);
    int length = 0;
    int size_vector = primes.size();
    int temp = 0;
    while(length<n)
    {
        if(temp != heap.top())
        {
            temp = heap.top();
            for(int i = 0; i<size_vector; i++)
            {
                heap.push(temp*primes[i]);
            }
            length++;
        }
        else
        {
            heap.pop();
        }

    }
    cout<< heap.top();
}
int main()
{
    int n[] = {2,7,13,19} ;
    vector<int> vec(n, n+4) ;
    nthSuperUglyNumber(12,vec);
    return 0;
}
