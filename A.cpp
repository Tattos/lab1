#include<iostream>
using namespace std;
int main(int argc, char *argv[])
{
int n;
cout<<"please input the number:"; 
cin>>n;
cout<<n<<" ";
while(n!=1)
 {
  if(n%2==1)
   {
    n=3*n+1;
	cout<<n<<" ";
   }
  else
   { 
    n=n/2;
    cout<<n<<" ";
   }
 }	
 cout<<endl;	
}

