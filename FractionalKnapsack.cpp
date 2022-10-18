#include<bits/stdc++.h>
using namespace std;
#define N '\n'
struct Knap{
    int price;
    int weight;
    Knap(){}
    Knap(int p,int w){
        price = p;
        weight = w;
    }
};

bool com(Knap a,Knap b){
    double m,n,o,p;
    m = a.price*1.0;
    n = b.price*1.0;
    o = a.weight*1.0;
    p = b.weight*1.0;
    m = m/o;
    n = n/p;
    if(m>n)
        return true;
    else
        return false;
}
int main()
{
    int n,w;
    cout<<"Enter the total Items : " ;
    cin>>n;
    cout<<"Enter the Knapsack Capacity : ";
    cin>>w;
    Knap knap[n];
    int i,wi,p;
    for(i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<"th Item Weight and Price : ";
        cin>>wi>>p;
        knap[i].price = p;
        knap[i].weight = wi;
    }
    sort(knap,knap+n,com);
    double ans = 0;
    for(i=0;i<n;i++){
    if(w>knap[i].weight){
        ans+=knap[i].price;
    w-=knap[i].weight;}
    else{
        double x = (knap[i].price*1.0)/(knap[i].weight*1.0);
        ans+=w*x;

        }
    }
    cout<<"\nMaximum Profit is : "<<ans<<N;
    return 0;
}
