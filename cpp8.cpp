#include<iostream>
using namespace std;

int main()
{
	int i, j, k, rows;
     
    cout << "no of rows = ";
    cin >> rows;

    cout << "the star pattern is \n"; 

    for(i = 1; i <= rows; i++)
    {
    	for(j = 0; j <= rows - i; j++)
		{
            cout << " ";
        }
        for(k = 0; k < i; k++)
        {
            cout << "*";
        }
        cout << "\n";
    }		
 	return 0;
}
