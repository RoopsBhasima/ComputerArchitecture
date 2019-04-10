//BINARY TO DECIMAL
#include<conio.h>
#include<stdio.h>
#include<math.h>
using namespace std;

int binarytodec(long binarynum)
{
	int decnum=0,temp=0,remainder;
	while(binarynum!=0)
	{
		remainder=binarynum%10;
		binarynum=binarynum/10;
		decnum=decnum+remainder*pow(2,temp);
		temp++;
	}
	return decnum;
}
int main(){
	int binary;
	printf("enter binary num:");
	scanf("%d",&binary);
	int b=binarytodec(binary);
	printf("%d changes to %d",binary,b);
}
