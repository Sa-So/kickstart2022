#include <iostream>
using namespace std;
int main() {
    // cout<<"Hello World!";
    // no substring palindrome of length >=5 
    // I & P
    // a-z A-Z
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        // int n;
        // cin>>n;
        string s;
        cin>>s;
        // 18 27 36 8
        int sumi = 0;
        for(int i=0;i<s.length();i++){
            sumi += (int)(s[i]-'0');
        }
        int add = sumi % 9 ; //==0 0 or 9 
        // 
        // if(sumi < 9){
            // cout<<sumi<<
            // add=9-sumi;
            if(add!=0)
            add = 9-add;
            
        // }
        // come at 0 1 2 3 4 5
        //9*c + 1 // == 1 we have to add 8  
        // 99
        // 90
        // if(add==0){

        // }
        // 121212
        // 16 +2 +7 


        string ans="";
        int flag = 0;
        int i=0;
        if(add==0){
            i=1;
            // assuming that n
            // no leading 0s
            ans+=s[0];
            // if(s[0]=='0'){
            //     ans+='9';
            //     // ans+='0';
            // }
            // else{
            //     ans+=s[0];
            // }
            
            if(s.length()==1){
                ans+='0';
            }
        }
        int flag2 = 0; 
        for(;i<s.length();i++){
            flag2=1;
            if(((s[i]-'0')<=(add))|| flag == 1){
                // i++;
                ans+=s[i];

            }
            else if(flag==0){
                // cout<<"hello"<<":";
                // cout<<to_string(add)<<" ";
                // cout<<ans<<" ";
                ans+=to_string(add);
                ans+=s[i];
                flag=1;
                // cout<<ans<<" ";

            }
        }
        if(flag==0 && flag2){
            ans+=to_string(add);
        }
        // if()



        // int gans = n;
        // int tempn = n;
        // while(n){
        //     tempi = n%10;
        //     n/=10;
        //     sumi += tempi;
        // }
        // int ans = sumi % 9;// 0 1 2 
        // if it is 9 = > last !
        // 8
        // if it is 1 => first !
        // 1111 2 3
        //       99
        // int ans
        // while(tempn){
        //     tempi = tempn%10;
        //     tempn/=10;
        //     if(tempi)
        //     sumi += tempi;
        // }


        // if(flag)
        cout<<"Case #"<<tt<<": "<<ans<<endl;
        // else{
        //     cout<<"Case #"<<tt<<": "<<"IMPOSSIBLE"<<endl;
        // }
        
    }

}

