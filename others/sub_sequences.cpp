//creating subsequences of a string

#include<iostream>
#include<cmath>
 
using namespace std;


void SubSequences(char* in,int i,char*out,int j)
{
	//base case
	if(in[i]==0)
	{
		out[j]='\0';
		cout<<out<<endl;
		return ;
	}
	//Recursive case
	
	//ignore element of ith index
	SubSequences(in,i+1,out,j);
	//consider ith element
	out[j]=in[i];
	SubSequences(in,i+1,out,j+1);
}

 
int main()
{
	char in[]="abcd";
	char out[100];
	
	SubSequences(in,0,out,0);
}
