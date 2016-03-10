/****************************************************************
    Copyright (C) 2016
					      									  
    > File Name:         < merge_sort.cpp >
    > Author:            < Gin >
    > Mail:              < chenjinhit@foxmail.com >
    > Created Time:      < 2016/03/09 >
    > Last Changed: 
    > Description:
****************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr,int low,int mid,int up)
{
	int n1=mid-low+1;
	int n2=up-mid;
	vector<int> arr_l,arr_r;
	for(int i=0;i<n1;i++)
	{
		arr_l.push_back(arr[low+i]);
	}
	for(int j=0;j<n2;j++)
	{
		arr_r.push_back(arr[mid+1+j]);
	}
	int m=0;
	int n=0;
	int start=low;
	while(m<n1&&n<n2)
	{
		if(arr_l[m]<arr_r[n])
		{
			arr[start]=arr_l[m];
			start++;
			m++;
		}
		else if(arr_l[m]>=arr_r[n])
		{
			arr[start]=arr_r[n];
			start++;
			n++;
		}
	}
	while(m<n1)
	{
		arr[start]=arr_l[m];
		start++;
		m++;
	}
	while(n<n2)
	{
		arr[start]=arr_r[n];
		start++;
		n++;
	}
}

void sort(vector<int> &arr,int low,int up)
{
	int mid;
	mid=(low+up)/2;
	if(low<up)
	{
		sort(arr,low,mid);
		sort(arr,mid+1,up);
        merge(arr,low,mid,up);
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
