#include<bits/stdc++.h>
using namespace std;
int coinrowrecursive(const vector<int>& coins,int n){
if(n==0){
    return 0;

}
if(n==1){
    return coins[0];
    return max(coins[n-1]+coinrowrecursive(coins,n-2),coinrowrecursive(coins,n-1));
}
}
int main(){
   // int n=10;
vector<int>coins ={5,1,2,10,6,2};
cout<<"Using recursion: " << coinrowrecursive(coins,coins.size())<<endl;
return 0;
}
