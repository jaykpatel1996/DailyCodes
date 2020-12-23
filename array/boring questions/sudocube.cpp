
#include <bits/stdc++.h> 
using namespace std;

void getIntitialConfiguration(vector<vector<char> > &cube)
{
	char temp;
	for(int i=0;i<18;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>temp;
			cube[i][j]=temp;
		}
	}
		
}

void performFrontClockWise(cube)
{
	
	
	
}


void performF(string operation, vector<vector<char> > &cube)
{
	if(operation.length()==1)
	{
		performFrontClockWise(cube);
		return;
	}
	if(operation.length()==2)
	{
		if(operation[1]=='2')
		{
			performFrontClockWise(cube);
			performFrontClockWise(cube);	
		}
		else
		performAntiClockWise(cube);
	}
	else
	{
	performAntiClockWise(cube);
	performAntiClockWise(cube);	
	}
	return;
}





int main()
{
	vector<vector<char> > cube(18,vector<char> (3,0));
	//getIntitialConfiguration(cube);
	string S, T; 
    getline(cin, S); 
    stringstream X(S); 
    while (getline(X, T, ' ')) { 
       
       switch(T[0])
       {
       	case 'F': performF(cube,T[0]);
       	break;
       	case 'B': performB(cube,T[0]);
       	break;
       	case 'U': performU(cube,T[0]);
       	break;
       	case 'D': performD(cube,T[0]);
       	break;
       	case 'L': performL(cube,T[0]);
       	break;
       	case 'R': performR(cube,T[0]);
       	break;
	   }
       
	   
	   
	   
	    
    } 


	
	
	
}
