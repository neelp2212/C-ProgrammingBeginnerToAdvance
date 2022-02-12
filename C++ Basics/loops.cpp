#include <iostream>
using namespace std;

int main()
{
    // Exe 1 - Multiplication Table
    int number;
    cout <<"Enter the table number you want:" << endl;
    cin >> number;

    for (int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " << i*number <<endl;
    }

    // Exe 2 - Sum of natural numbers
    int n,i,sum=0;
	cout<<"Enter the Number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	    sum=sum+i;
	}
	cout<<"Sum of Natural no is"<<sum<<endl;

    // Exe 3 - factorial numbers
    int n,i=1,fact=1;
	cout<<"Enter the Number";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"Factorial of"<<n<<"is"<<fact<<endl;

    // Exe 4

    int i,n,count=0;
	cout<<"Enter the Number";
	cin>>n;
	    
	for(i=1;i<=n;i++)
	{
	    if(n%i==0)
	    {
		    count++;
	    }
    } 
    	
	if(count==2)
		cout<<"Prime Number";
	else
		cout<<"Not a Prime Number"; 

    int n,r,rev=0;
	cout<<"Enter the Number";
	cin>>n;
	    
	while(n>0)
	{
		r=n%10;
	    n=n/10;
		rev=rev*10+r;
	}
	cout<<"Reverse Number is"<<rev;
     
    return 0;
}