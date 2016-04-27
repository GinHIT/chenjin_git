/****************************************************************
    Copyright (C) 2016
					      									  
    > File Name:         < str2hex.c >
    > Author:            < Gin >
    > Mail:              < chenjinhit@foxmail.com >
    > Created Time:      < 2016/03/30 >
    > Last Changed: 
    > Description:
****************************************************************/


#include <stdio.h>
#include <stdlib.h>

void str2hex(unsigned char s[], int len,unsigned char o[])
{    
		int i;    
		int tmp_len = 0;    
		int res_len = 0;	
		unsigned char *tmp = NULL;    
		unsigned char c;     
		tmp = (unsigned char *)malloc(len * sizeof(unsigned char));
		for (i=0; i<len; ++i) 
		{          
			c = tolower(s[i]);
			if (c == ' ') 
	 		{			
				continue;
			}		
			else if ('0'<=c && c<='9')            
			{
				tmp[tmp_len] = c - '0';
				tmp_len++;
			}		
			else if ('a'<=c && c<='f')            
			{   
				tmp[tmp_len] = c - 'a' + 0x0a;
				tmp_len++;
			}		
			else
			{			
				return;
			}	
		}     
		if (tmp_len % 2 != 0)
		{
			printf("length error\n");		
			return;
		}		
		for (i=0; i<tmp_len; i+=2)
		{		
			o[res_len] = (tmp[i] << 4) + tmp[i+1];
			res_len++;
		}
		printf("res_len=%d\n",res_len);
		o[res_len]='\0';		
		free(tmp);     
		return;
}

int main()
{
    unsigned char str[]="ab2fcd3c1245136674902f";
	int len=sizeof(str)/sizeof(str[0]);
	printf("len=%d\n",len);
	unsigned char res[len/2];
	int len1=sizeof(res)/sizeof(res[0]);
	printf("len1=%d\n",len1);
	int i=0;
	str2hex(str,len-1,res);
	int len2=sizeof(res)/sizeof(res[0]);
	printf("len2=%d\n",len2);
    while(res[i]!='\0')
	{
		printf("%x ",res[i]);
		i++;
	}
	printf("\ni=%d\n",i);

	//while(res[i]!='\0')
	//{
	//	printf("%x ",res[i]);
	//	i++;
	//}
//	for(i=0;i<3;i++)
//	{
//		printf("%x ",res[i]);
//	}
    return 0;
}

