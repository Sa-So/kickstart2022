#include <iostream>
using namespace std;
int change(int n,int sum_d,int prod_d,int &prod_ans,int &sum_ans){
    // if(n+1 % pow(10,)!=n+1)
    // how many last digits are 9
    int i=0;
    for(;i<=log10(n);){
        if(n%pow(10,i+1)==pow(10,i+1)-1){
            i++;
        }
        else{
            break;
        }
    }
    if(i>0){
        // prod_d=0;
        prod_ans=0;
    }
    else{
        prod_ans=(prod_d/(n%10))*((n%10)+1);
    }
    sum_ans =sum_d-9*i;
    sum_ans++;

}
int main() {
    // cout<<"Hello World!";
    int a=1;
    int b=1e5;
    bool dp[1e5];
    int pre[1e5];
    int sum_d=0,int prod_d=1,int prod_ans=1,int sum_ans=0;
    int ans = 0;
    for(int i=a;i<=b;i++){
        change(i,sum_d,prod_d,prod_ans,sum_ans);
        if(prod_ans!=0){
            prod_d=prod_ans;
        }
        if(prod_ans%sum_ans==0){
            ans++;
        }
        dp[i]=true;
    }
}

