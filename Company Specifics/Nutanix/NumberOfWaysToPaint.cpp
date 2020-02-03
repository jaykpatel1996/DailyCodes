//https://www.geeksforgeeks.org/ways-to-divide-a-binary-array-into-sub-arrays-such-that-each-sub-array-contains-exactly-one-1

#include<stdio.h>
#include<iostream>
#include<vector>

using namespace std;

int CalculateTheNumberOfWaysToPaint(vector<int> arr,int size)
{
    int res = 0;
    int prev_index = -1;
    for (int i = 0;i < size;i++)
    {
        if (arr[i] == 1)
        {
            if (prev_index != -1)
            {
                res = res * (i-prev_index);
                prev_index = i;  
            }
            else
            {
                res = 1;
                prev_index = i;
            }

        }
    }
    return res;
}


int main()
{
                int n;
                vector<int> vec(n);
                cin >> n;
                for (int i = 0;i < n;i++)
                {
                    cin >> vec[i];
                }
                cout << CalculateTheNumberOfWaysToPaint(vec,n);
}
