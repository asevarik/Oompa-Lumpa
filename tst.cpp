#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string a="how are you";
    int vcount,wcount;
    vcount=0;
    wcount=0;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i] == 'i' || a[i] == 'o' || a[i]=='u')
        {
            vcount++;
        }
        else if(a[i]==' ')
        {
            wcount++;
        }
    }
    cout<<vcount<<"\n"<<wcount;
}