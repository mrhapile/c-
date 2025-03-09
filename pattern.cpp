#include<iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i+j>=5-1)
                cout<<"* ";
            
            else
                cout<<" ";//only one space
            
        }
        cout<<endl;
    }
    //Draw Pattern given in description for n x n dimensions
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i+j>=5-1)
                cout<<"* ";
            
            else
                cout<<"  ";//only one extra space
            
        }
        cout<<endl;
    }
}
