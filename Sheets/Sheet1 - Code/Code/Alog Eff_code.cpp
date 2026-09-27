#include <stdlib.h>
#include <iostream>
#include <ctime>
#include <math.h>
using namespace std;

void RanFillArr(int  * A, int n)	//Fill array A with random values
{
	// Seed the random-number generator with current time so that
	// the numbers will be different every time we run.
	
	srand( (unsigned)time( NULL ) );

	for(int i=0; i<n; i++)
	{
		A[i] = rand();
	}
}

void AboveAvg1(int  *A, int n) //counts all values above average in array A
{
	cout<<"\n AboveAvg1 :: Avg = ";
	float avg = 0;
	double sum = 0;
	//First Calculate the average
	for(int i=0; i<n; i++)
		sum += A[i];
	avg = sum/n;
	
	int cnt=0;
	//For each item in the array, if greatee than the average increment counter
	for(int j=0; j<n; j++)
		if(A[j]>avg) cnt++;
	
	cout<<avg<<" no. of values above avg ="<<cnt;

}

void AboveAvg2(int  *A, int n) //counts all values above average in array A
{
	cout<<"\n AboveAvg2 :: Avg = ";
	float avg = 0;
	
	int cnt=0;
	//At each item in the arry
	// 1- Calc the average of the whole array
	// 2- Compare this it to the average, if greater ==> inc counter
	for(int j=0; j<n; j++)
	{
		double sum = 0;
		for(int i=0; i<n; i++)
			sum += A[i];
		avg = sum/n;

		if(A[j]>avg) cnt++;
	}
	cout<<avg<<" no. of values above avg ="<<cnt;

}

int main()
{	
	int  *M, N;	
	//Testing the two algorithms for differernt values of array size "N"
	do
	{
		cout<<"\nEnter N (-1) to stop:";
		cin>>N;
		if(N<0) break;
		M = new int [N];		//allocate new array
		RanFillArr(M, N);	//Fill it randomly

		cout<<"\n\nTesting for N = "<<N;
		
		//Calc Runtime of AboveAvg1
		clock_t begin = clock();
		AboveAvg1(M, N);
		clock_t end = clock();
		double elapsed_secs1 = double(end - begin) / CLOCKS_PER_SEC;
		cout<<endl<<"Runtime of AboveAvg1 = "<<elapsed_secs1<< "sec"<<endl;
		
		//Calc Runtime of AboveAvg2
		begin = clock();
		AboveAvg2(M, N);
		end = clock();
		double elapsed_secs2 = double(end - begin) / CLOCKS_PER_SEC;
		cout<<endl<<"Runtime of AboveAvg2 = "<<elapsed_secs2<< "sec";

		cout<<endl<<"===========================================================";

		delete []M;	//Free alloacted array
	}while(N > 0);
	

	return 0;
}