#include<iostream>
#include<cstring>
using namespace std;

int main(){

    string input;
    int on ,tw ,thr,T ;

    cin>>T;
    char one[3] = {'o','n','e'};
    char two[3] = {'t','w','o'};
    char three[5] = {'t','h','r','e','e'};

    while(T--){
            cin>>input;
        on = 0, tw = 0; thr= 0;
    for(int i = 0;i<input.size();++i)
        {if(input[i]==one[i])
         ++on;
        if(input[i]==two[i])
            ++tw;
        if(input[i]==three[i])
            ++thr;}
            if(on==2 || on == 3)
                cout<<"1"<<endl;
            else if(tw==2 || tw==3)
                cout<<"2"<<endl;
            else
                cout<<"3"<<endl;
    }
            return 0;
    }
