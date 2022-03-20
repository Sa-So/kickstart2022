#include <iostream>
using namespace std;
int main() {

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int ans=0;
        string I,P;
        cin>>I>>P;
        int idx_I = 0;
        // int idx_P = 0;
        int cnt = 0;//skipped deleted
        bool flag = false;
        for(int i=0;i<P.length();){
            if(P[i]==I[idx_I]){
                // idx_P++;
                i++;
                idx_I++;
                if(idx_I == I.length()){
                    cnt += (P.length()-i);
                    flag = true;
                    break;
                }
            }
            else {
                // idx_P++;
                i++;
                cnt++;
            }
        }
        if(flag)
        cout<<"Case #"<<tt<<": "<<cnt<<endl;
        else{
            cout<<"Case #"<<tt<<": "<<"IMPOSSIBLE"<<endl;
        }
    }

}

