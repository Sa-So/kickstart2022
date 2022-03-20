#include <iostream>
using namespace std;
int check9(){
    
}
int main() {
    // cout<<"Hello World!";
    // * % sum
    // A & B
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        int a,b;
        cin>>a>>b;
        int ans = 0;
        // a a+1 
        // 9999 + 1
        // 10000
        int gsum = 0; 
        for(int i=a;i<=b;i++){
            int tempi = i;
            int sum = 0;
            int prod=1;
            while(tempi){
                int dig = tempi%10;
                sum+=dig;
                prod*=dig;
                tempi/10;
            }
            if(prod%sum==0){
                ans++;
            }
        }
        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
}

