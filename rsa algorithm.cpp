#include<iostream>
#include <cmath>
using namespace std;
int main(){
string a,pl;
double c,n,e,o,k;
cout<<"enter sentence";
cin>>a;

cout<<"enter value of e=";
cin>>e;
cout<<"enter value of n=";
cin>>n;
for(int k=0;k<a.length();k++){
c= a[k];
o=(c-97);
k=pow(o,e);
int t=(int)k%(int)n;
pl=(t+97);
}
}