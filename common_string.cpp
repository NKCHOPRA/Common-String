#include<bits/stdc++.h>

using namespace std;
main()
{
     cout<<"Enter number of test cases"<<endl
	int test;
	cin>>test;
	for(int i=0;i<test;i++)
	{
		cout<<"Enter strings"<<endl;
		string s1,s2;
		cin>>s1>>s2;
		
	int big=0;
	   
	   for(char c=64;c<=122;c++)
	   {
	   	if(c>90 && c<97 )
		   {
		   	continue;
		   }
	   int flag1=0,flag2=0;
	   	for(int j=0;j<s1.length();j++)
	   	{
	   		
	   		if(s1[j]==c)
	   		{
	   			flag1++;
	   			break;
			   }
		
		   }
		for(int j=0;j<s2.length();j++)
		{
			if(s2[j]==c)
			{
				flag2++;
				break;
			}
		}
		if(flag1==flag2 && flag1!=0 && flag2!=0)
	    	{
		cout<<c;
		big++;
		   }

      }
      if(big==0)
      {
      	cout<<"nil";
	  }
      
      
      
     
      cout<<endl;
 	}
}
