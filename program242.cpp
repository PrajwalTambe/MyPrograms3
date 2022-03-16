#include<iostream>
#include<stdio.h>

using namespace std;

int CountcapI(char *str)
{
	int iCnt=0;
	
	while(*str != '\0')
	{
		
			if((*str >= 'A')&&(*str <= 'Z'))
			{
				iCnt++;
			}
			str++;
	}
	return iCnt;
	
	
	
}

int CountcapR(char *str)
{
	 static int iCnt=0;
	
	if(*str != '\0')
	{
		
			if((*str >='A')&&(*str <= 'Z'))
			{
				iCnt++;
			}
			str++;
			CountcapR(str);
	}
	return iCnt;
	
	
	
}

int main()
{
	char Arr[20];
	int iRet=0;
	
	
	cout<<"Enter String\n";
	scanf("%[^'\n']s,Arr");
	
	iRet=CountcapR(Arr);
	
	cout<<"Capital Letters are  :" <<iRet<<"\n";
	
	return 0;
	
}