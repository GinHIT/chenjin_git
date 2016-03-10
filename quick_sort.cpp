/****************************************************************
    Copyright (C) 2016
					      									  
    > File Name:         < quick_sort.cpp >
    > Author:            < Gin >
    > Mail:              < chenjinhit@foxmail.com >
    > Created Time:      < 2016/03/08 >
    > Last Changed: 
    > Description:
****************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr,int low,int up)
{
	int pivot=arr[up];
	int i=low-1;
	for(int j=low;j<up;j++)
	{
		if(arr[j]<=pivot)
		{
			i++;
			swap(arr[i],arr[j]);
		}
	}
	swap(arr[i+1],arr[up]);

	return i+1;
}

void sort(vector<int> &arr,int low,int up)
{
	if(low<up)
	{
		int mid=partition(arr,low,up);
		sort(arr,low,mid-1);
		sort(arr,mid+1,up);
	}
}

void qsort(vector<int> &arr)
{
	sort(arr,0,arr.size()-1);
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
	qsort(vector_1);
	vector<int>::iterator it;
	for(it=vector_1.begin();it!=vector_1.end();it++)
	{
		cout<<*it<<" ";
    }
	cout<<endl;

	return 0;
}


