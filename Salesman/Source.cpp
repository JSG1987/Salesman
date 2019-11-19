#include<iostream>
#include<iomanip>
#include<fstream>
#include<cmath>




using namespace std;

ifstream infile;
ofstream outfile;


void print(float ary[11]);
void ary(float ary[11]);
int main()
{
	infile.open("Salesperson.txt");
	outfile.open("results.txt");
	if (!infile.good())
	{
		cout << "file bad" << endl;
	}
	int a;
	float b;
	float totalSales = 0.0;
	float salesTotal[11];
	ary(salesTotal);
	while (infile)
	{
		infile >> a >> b;
		
		totalSales += b;
		salesTotal[a] += b;
	}
	print(salesTotal);
	cout << totalSales << endl;



	outfile.close();
	infile.close();
	system("PAUSE");
	return 0;
}

void print(float ary[11])
{

	for (int i = 1; i < 11; i++)
	{
		cout << i << " ";
		cout << ary[i] << endl;
	}

}
void ary(float ary[11])
{

	for (int i = 1; i < 11; i++)
	{
		ary[i] = 0;
	}

}
