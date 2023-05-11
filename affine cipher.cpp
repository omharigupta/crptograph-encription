
#include<iostream>
using namespace std;
int main(){
string text,encrption;
int key,convert;
cout<<"Enter the text : ";
cin>>text;
cout<<"Enter the key : ";
cin>>key;
for(int i=0;i<text.length();i++){
convert=(((text[i]-97)+key)%26)+97;
encrption=convert;
cout<<encrption;
}
}