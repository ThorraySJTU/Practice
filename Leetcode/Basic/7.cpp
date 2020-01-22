#include<iostream>
using namespace std;
int reverse(int x)
{
    long long temp = 0;
    while(x != 0)
    {
        temp = temp*10 + x % 10;
        x = x/10;
    }
    if(temp > INT_MAX || temp < INT_MIN)
        temp = 0;
    return temp;
}
int main()
{
    int temp = -210;
    int ans = reverse(temp);
    cout<<ans;
    return 0;
}
