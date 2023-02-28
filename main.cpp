#include <iostream>
#include <time.h>
#include<stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main() {
	
	srand(time(0));
	int m,n;
	cout<<"matrisini satir sayisini giriniz...:";
	cin>>m;
		cout<<"matrisini sutun sayisini giriniz...:";
	cin>>n;
	
	int A[m][n];
	
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			A[i][j]=rand()%100;
		}
	}
	
	
	
		for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		cout<<A[i][j]<<"  ";
		}
		cout<<endl;
	}
	
	
	
	
	return 0;
}
