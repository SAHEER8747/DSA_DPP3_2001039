#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void tower(int n,char a,char b,char c)
{
    if(n==0)
    {
      return;
    }
    tower(n-1,a,c,b);
  
    cout<<"Move Disk "<<n<<" From "<<a<<" To "<<b<<endl;
    tower(n-1,c,b,a);
}
int main()
{
  
    int n;
  
    cout<<"Enter the total number of disks : ";
    cin>>n;
    tower(n,'A','C','B');
    return 0;
  
}
