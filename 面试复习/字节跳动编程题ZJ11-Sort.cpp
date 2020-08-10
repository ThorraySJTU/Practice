// 排序问题
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct point
{
    int x;
    int y;
};
bool cmp(struct point x, struct point y){
    return x.y > y.y;
}
int main(){
    int N;
    cin >> N;
    int x = 0, y = 0, tmp = 0;
    vector<struct point> vc;
    for(auto i = 0; i < N; i++){
        struct point p;
        cin >> x >> y;
        p.x = x, p.y = y;
        vc.push_back(p);
    }
    sort(vc.begin(), vc.end(), cmp);
    tmp = vc[0].x;
    for(auto i = 0; i < vc.size(); i++){
        if(tmp <= vc[i].x){
            tmp = vc[i].x;
            cout<<vc[i].x<<" "<<vc[i].y<<endl;
        }
    }
    return 0;
}
