#include<bits/stdc++.h>
using namespace std;
#define N '\n'
struct Activity{
    int s_time;
    int f_time;
    Activity(){}
    Activity(int s,int f){
        s_time = s;
        f_time = f;
    }
};

bool com(Activity a,Activity b){
    if(b.f_time>a.f_time)
        return true;
    else
        return false;
}
int main()
{
    int n,i;
    /// freopen("iin.txt","r",stdin);
    cout<<"Enter the total Activities : ";
    cin>>n;Activity activ[n];
    int stime,ftime;
    for(i=0;i<n;i++){
        cout<<"Enter the start time and finish time: "<<i+1;
        cin>>stime>>ftime;
        activ[i].s_time = stime;
        activ[i].f_time = ftime;
    }

    sort(activ,activ+n,com);
    int ans = 0;
    int time = 0;
    for(i=0;i<n;i++){
    int k = i;
    while(i<n and
    activ[k].f_time>activ[i].s_time){
        i++;
    }
        ans++;
    }
    cout<<"\nMaximum Non Overleaping Activities is : "<<ans<<N;
    return 0;
}
