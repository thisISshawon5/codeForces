#include<iostream>
using namespace std;
int main()
{
    int p,human,c,d=0;
    cin>>p;
    while(p--)
    {
        cin>>human>>c;
        if(c-human>=2)
            d++;
    }
    cout<<d<<endl;
    return 0;
}
