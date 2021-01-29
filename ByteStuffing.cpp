#include<bits/stdc++.h>
using namespace std;
int main(){
    int i;
    string data,stuffed="",unstuffed="";
    cout<<"Taking a as flag and when we encounter a or b in the data we stuff b before it"<<endl;;
    cout<<"Enter the data :"<<endl;;
   
    cin>>data;

    string flag="a";
    stuffed=stuffed+flag;

    for(i=0;i<data.length();i++){
        if(data[i]=='a' || data[i]=='b')
            stuffed=stuffed+'b';
         stuffed=stuffed + data[i];

    }
    stuffed+='a';
    cout<<"The encoded message sent is : "<<endl<<stuffed<<endl;

    for(i=1;i<stuffed.length()-1;i++){
        if(stuffed[i]=='b'){
            i++;
            unstuffed=unstuffed+stuffed[i];
        }else
        unstuffed=unstuffed+stuffed[i];


    }
cout<<"The decoded message is : "<<endl<<unstuffed<<endl;




return 0;

}
