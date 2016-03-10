/****************************************************************
    Copyright (C) 2016
					      									  
    > File Name:         < insert_sort.c >
    > Author:            < Gin >
    > Mail:              < chenjinhit@foxmail.com >
    > Created Time:      < 2016/03/08 >
    > Last Changed: 
    > Description:
****************************************************************/


#include <stdio.h>

void sort(int arr[],int len)
{
	int i;
	int temp;
	int j;
	int k;
	for(i=1;i<len;i++)
	{
       temp=arr[i];
	   for(j=i-1;j>=0&&temp<arr[j];j--)
	   {
		   arr[j+1]=arr[j];
	   }
       arr[j+1]=temp;
	}
	for(k=0;k<len;k++)
	{
		printf("%d\n",arr[k]);
	}
}

          
int main()
{
    int i;
	int len;
	int arr[6]={4,3,5,1,2,8};
    len=sizeof(arr)/sizeof(int);
	sort(arr,len);

    return 0;
}

