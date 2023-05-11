




#include<iostream>
#include<string>
using namespace std;
int main(){
string a,t,tr,tra;
int c,n,ar,pr,pra,ara;
cout<<"enter number";
cin>>a;
//cout<<a.length();

cout<<"additive"<<endl;
for(int k=0;k<a.length();k++){
c= a[k];
n=((c-97)+8)%26;
//cout<<n<<endl;
t=n+97;
cout<<t;
}cout<<endl<<"multiplicative"<<endl;
for(int k=0;k<a.length();k++){
ar= a[k];
pr=((ar-97)*5)%26;
//cout<<n<<endl;
tr=pr+97;
cout<<tr;
}
cout<<endl<<"affine chyper"<<endl;
for(int k=0;k<a.length();k++){
ara= a[k];
pra=((ara-97)*5)%26;
//cout<<n<<endl;
tra=((pra+8)%26)+97;

cout<<tra;
}
}