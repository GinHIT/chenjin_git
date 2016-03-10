/****************************************************************
    Copyright (C) 2016
					      									  
    > File Name:         < insert_sort.cpp >
    > Author:            < Gin >
    > Mail:              < chenjinhit@foxmail.com >
    > Created Time:      < 2016/03/08 >
    > Last Changed: 
    > Description:
****************************************************************/


#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void sort(vector<T> &arr)
{
	int i;
	int j;
    int temp;
	int len=arr.size();
	for(i=1;i<len;i++)
	{
		temp=arr[i];
		for(j=i-1;j>=0&&temp<arr[j];j--)
		{
			arr[j+1]=arr[j];
		}
		arr[j+1]=temp;
	}
}

int main()
{
	cout<<"Please input numbers:"<<endl;
    vector<int> vector_1;
	int i;
	char c;
	while((cin>>i).get(c))
	{  
		vector_1.push_back(i);
		if(c=='\n')
		{
			break;
		}
	}
	cout<<"Now we sort these numbers:"<<endl;
	sort(vector_1);
	vector<int>::iterator it;
	for(it=vector_1.begin();it!=vector_1.end();it++)
	{
		cout<<*it<<endl;
	}

    return 0;

}

