/****************************************************************
    Copyright (C) 2016
					      									  
    > File Name:         < shell_sort.cpp >
    > Author:            < Gin >
    > Mail:              < chenjinhit@foxmail.com >
    > Created Time:      < 2016/05/25 >
    > Last Changed: 
    > Description:
****************************************************************/
//希尔排序

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	void shell_sort(vector<int> &nums)
	{
		int n=nums.size();
		for(int gap=n>>1;gap>0;gap>>=1)
		{
			for(int i=gap;i<nums.size();i++)
			{
				int temp=nums[i];

				int j=i-gap;
				for(;j>=0&&nums[j]>temp;j-=gap)
				{
					nums[j+gap]=nums[j];
				}

				nums[j+gap]=temp;
			}
		}
	}



};
