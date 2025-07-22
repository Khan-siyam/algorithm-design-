#include<bits/stdc++.h>
using namespace std;
struct item{
int value,weight;
};
bool cmp(item a,item b){
double r1=(double)a.value/a.weight;
double r2= (double)b.value/b.weight;
return r1>r2;
}
double fractionalknapsack(int W,vector<item> items){
sort(items.begin(),items.end(),cmp);
double totalvalue=0.0;
for(item&item:items){

    if(W>=item.weight)
    {

        W-=item.weight;
        totalvalue+=item.value;

    }
    else {
        totalvalue+=item.value*((double)W/item.weight);
        break;
    }
}
return totalvalue;
}
int main(){
int W=50;
vector <item>items={{60,10},{100,20},{120,30}};
double maxvalue=fractionalknapsack(W,items);
cout<<"Maximum value in knapsack= "<<maxvalue<<endl;
return 0;
}
