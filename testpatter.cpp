#include <iostream>
using namespace std;
int main()
{
    char ch='a';
    for(int i=0;i<=5;i++){
        for(int j=i;j>0;j--){
            cout<<j;
        }
        cout<<endl;
    }
}