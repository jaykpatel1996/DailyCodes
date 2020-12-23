#include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

// 1,1,2,2,2,2,3,4,5,6,10,11


int upperBound(vector<int> &nums, int target)
{
	int left=0;
        int right=nums.size()-1;
        int res=nums.size()-1;
        
        while(left<=right)
        {
            int middle= left+(right-left)/2;
            
            if(nums[middle]>target)
            {res=middle;right=middle-1;}
            else
                left=middle+1;
        }
        
        return res;
}


int main()
{
	while(true)
	{
	vector<int> nums;
	int temp;
	for(int i=0;i<10;i++)
	{
		cin>>temp;
		nums.push_back(temp);
	}
	cout<<"enter the number to be search ";
	cin>> temp;
	cout<<upperBound(nums,temp);
}
	return 0;
}









