#include<iostream>
using namespace std;
int main()
{
	int A[]={1,3,2,89,53};
	int i,min=A[0],max=A[0];			//盢程㎝程砞A[0]
	int length=sizeof(A)/sizeof(int);	//盢皚A羆(5*4)埃int篈 (4)
	cout<<"sizeof(A) are "<<sizeof(A)<<endl;
	cout<<"sizeof(int) are "<<sizeof(int)<<endl;
	cout<<"elements in array A are ";
	for(i=0;i<length;i++)
	{
		cout<<A[i]<<" ";
//-------耞程程 
		if(A[i]>max)
		{
			max=A[i];
		 } 
		if(A[i]<min)
		{
			min=A[i];
		}
	}
	cout<<endl<<" Maximum is "<<max;
	cout<<endl<<" Minimum is "<<min;
	return 0;
}
