#include<iostream>
using namespace std;
int main()
{
    string plaintext,key,encrpt;
    int convert,x;
    cout<<"Enter the plaintext: ";
    cin>>plaintext;
    cout<<"enter key in plain text:";
    cin>>key;
    int store[plaintext.length()],kstore[key.length()];
//reading value of plain txt and storing in array
    for(int k=0;k<plaintext.length();k++){
  convert=  plaintext[k]-97;
store[k]=convert;
    }
    //now term of key for read
    
    for(int l=0;l<key.length();l++){
  convert=  key[l]-97;
kstore[l]=convert;
x=plaintext.length();



 for (int i = 0; ; i++)
    {
        if (x == i)
            i = 0;
        if (key.size() == x)
            break;
        key.push_back(key[i]);
    }
    }
   for(int r=0;r<plaintext.length();r++){
encrpt=(((store[r]+kstore[r])%26)+97);
cout<<encrpt;

}


    
    }