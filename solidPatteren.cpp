#include<iostream>
using namespace std;
int main()
{
    //print solid patteren 
    //outer loop --row
for(int i=0;i<3;i++)
{
    //inner loop- cols
    for(int j=0;j<5;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
}
    return 0;
}