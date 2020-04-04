using namespace std;
#include<iostream>
main()
{
	int i,j=5,num=0;
	for(i=0;i<5;i++)
	{
		num=i;
		for(j=5;j>i;j--)
		{
			num++;
			cout<<num;
		}
		cout<<endl;
	}
}
