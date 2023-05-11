#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the plaintext: ";
    getline(cin,s);
    int k[3][3];
    cout<<"Enter the key matrix (3x3): ";
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin>>k[i][j];
    int n=s.length();
    while(n%3!=0)
    {
        s+='x';
        n++;
    }
    int p[n];
    for(int i=0;i<n;i++)
        p[i]=s[i]-'a';
    int c[n];
    for(int i=0;i<n;i+=3)
    {
        for(int j=0;j<3;j++)
            c[i+j]=0;
        for(int j=0;j<3;j++)
            for(int l=0;l<3;l++)
                c[i+j]+=k[j][l]*p[i+l];
        for(int j=0;j<3;j++)
            c[i+j]%=26;
    }
    string cipher="";
    for(int i=0;i<n;i++)
        cipher+=char(c[i]+'a');
    cout<<"The ciphertext is: "<<cipher<<endl;
}
