#include<iostream>
using namespace std;
int main()
{

int DATA[20],i,j,temp,n;

cout<<"\nEnter Total Number You Want to Enter in Array : = ";
cin>>n;


for(i=1; i<=n; i++)
{
	cout<<"\nEnter Value in array["<<i<<"] : = ";
	cin>>DATA[i];

}

cout<<"\n\nThe Original Values in Array:\n\n";
for(i=1; i<=n; i++)
{
	cout<<DATA[i]<<"  ";
}

// Start Bubble Sort Ascending Order Procedure//
for(i=1; i<=n; i++)
{
	
	for(j=1; j<n; j++)
	{
		if(DATA[j]>DATA[j+1])
		{
	temp=DATA[j];
DATA[j]=DATA[j+1];
DATA[j+1]=temp;

	}
}
}
cout<<"\n\n\nThe Bubble Sorted Array in Ascending Order\n\n";
for(i=1; i<=n; i++)
{
	cout<<DATA[i]<<"  ";
}
}

