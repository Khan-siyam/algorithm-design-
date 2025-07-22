#include<bits/stdc++.h>
using namespace std;
int coinchange(vector<int>& coins,int v){
sort(coins.rbegin(),coins.rend());
int count =0;
for(int coin: coins){
    while(v>=coin){
        v-=coin;
        count++;
    }
}
if(v==0)
    return count;
else
    return -1;

}
int main(){
vector<int>coins={1,5,1025};
int v=63;
int result=coinchange(coins,v);
if(result!=-1)
    cout<<"Minimum coin needed: "<<result<<endl;
else
    cout<<"No solution possible."<<endl;
vector<int> coins2={1,3,4};
v=6;
result=coinchange(coins2,v);
cout<<"Greedy coins needed(may be non optimal): "<<result<<endl;
return 0;
}
