#include<iostream>
using namespace std;
int main(){
    int n, a[100];
    //cout<<"Enter the num:";
    cin>>n;
    double juice_sum=0.0;
    double final_res=0.0;
    for(int i=1; i<=n; i++){
        cin>>a[i];
        juice_sum+=a[i];
    }
    final_res=juice_sum/n;
    cout<<final_res<<endl;
    return 0;
}
