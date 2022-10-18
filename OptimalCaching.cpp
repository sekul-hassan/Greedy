#include<bits/stdc++.h>
using namespace std;
int main()
{
    string frame,req;
    cout<<"Enter the Frame String : ";
    cin>>frame;
    cout<<"Enter the Request String : ";
    cin>>req;
    bool ok = false;
    int fl,rl,i,j,k,h=0;
    fl = frame.size();
    rl = req.size();
    for(i=0;i<rl;i++){
        ok = false;
        for(j=0;j<fl;j++){
            if(req[i]==frame[j]){
            ok = true;
            h++;
            break;
            }
            if(!ok){
                map<int,char>mp;
                for(k=0;k<fl;k++){
                    for(int p=i+1;p<rl;p++){
                        if(frame[k]==req[p]){
                        mp.insert({k,req[p]});
                        }
                    }
                }
                auto it = *mp.end();
                char ch = it.second;
                int pos = it.first;
                frame[pos]=ch;
            }
        }
    }
    cout<<"Total Hit is : "<<h<<'\n';
    cout<<"Total Miss is : "<<rl-h<<'\n';
    return 0;
}
