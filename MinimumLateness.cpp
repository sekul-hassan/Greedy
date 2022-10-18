#include<bits/stdc++.h>
using namespace std;
#define N '\n'
struct Event{
    int duration;
    int deadline;
    Event(){}
    Event(int _d,int _t){
        duration = _d;
        deadline = _t;
    }
};
bool com(Event a,Event b){
    if(b.deadline>a.deadline)
        return true;
    else
        return false;
}
int main()
{
    /// freopen("in.txt","r",stdin);
    int n;
    cout<<"Enter the total Events : ";
    cin>>n;
    int i,dura,dad;
    Event events[n];
    for(i=0;i<n;i++){
        cout<<"Enter Duration and Deadline for Event : "<<i+1<<"th ";
        cin>>dura>>dad;
        events[i].duration = dura;
        events[i].deadline = dad;
    }
    sort(events,events+n,com);

    int late = 0;
    int time = 0;
    int ans = 0;

    for(i=0;i<n;i++){
    time+=events[i].duration;
    if(time>events[i].deadline){late=time-events[i].deadline;
        ans = max(ans,late);
    }
    }cout<<N<<"Minimize Lateness is :"<<ans<<N;
    return 0;
}
