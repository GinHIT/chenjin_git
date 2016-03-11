/****************************************************************
    Copyright (C) 2016
					      									  
    > File Name:         < bitmap.c >
    > Author:            < Gin >
    > Mail:              < chenjinhit@foxmail.com >
    > Created Time:      < 2016/03/11 >
    > Last Changed: 
    > Description:
****************************************************************/


#include <stdio.h>

#define BITWORD 32
#define SHIFT 5
#define MASK 0X1F
#define N 1000

int a[1+N/BITWORD];

void set(int i)
{
	a[i>>SHIFT] |= (1<<(i & MASK));
}

void init(int i)
{
	a[i>>SHIFT] &= ~(1<<(i & MASK));
}

int test(int i)
{
	return a[i>>SHIFT] & (1<<(i & MASK));
}

	
int main()
{
    int i=0;
	for (i=0;i<N;i++)
	{
		init(i);
	}
	while(scanf("%d",&i) !=EOF)
	{
		set(i);
	}
	for(i=0;i<N;i++)
	{
		if(test(i))
		{
			printf("%d\n",i);
		}
	}

    return 0;
}

