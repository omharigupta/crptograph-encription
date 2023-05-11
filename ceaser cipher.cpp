#include<iostream>
using namespace std;
int main()
{
    string plaintext,key;
    int convert;
    cout<<"Enter the plaintext: ";
    cin>>plaintext;
    cout<<"enter key in plain text:";
    cin>>key;
    int store[plaintext.length()],kstore[key.length()];
//reading value of plain txt and storing in array
    for(int k=0;k<plaintext.length();k++){
  convert=  plaintext[k];
store[k]=convert;
    }
    //now term of key for read
    
    for(int l=0;l<key.length();l++){
  convert=  key[l];
kstore[l]=convert;
    }
    for(int r=0;r<plaintext.length();r++){
cout<<(store[r]+kstore[r]);


    }
    
    }