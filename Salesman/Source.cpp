#include<iostream>
#include<iomanip>
#include<fstream>
#include<cmath>




using namespace std;

ifstream infile;
ofstream outfile;

float avg(float x, float y);
void print(float ary[11],float bry[12]);
void ary(float ary[11]);
float commission(float salestotal);
void firedEmployee(float x, float y);

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
	float cnt[12];
	float totalSales = 0.0;
	float salesTotal[11];

	ary(salesTotal);
	ary(cnt);

	while (infile)
	{
		infile >> a >> b;
		
		totalSales += b;
		salesTotal[a] += b;
		cnt[a]++;
		
		
	}
	//int temp = salesTotal[1];
	int c;
	for (int i = 1; i < 11; i++) 
	{
		if (salesTotal[i] < salesTotal[i + i])
		{
			c = i;
		}
		
	}
	
	
	print(salesTotal,cnt);
	outfile << "Company Sales Total " << totalSales << endl;
	outfile << "employee "<< c << " is getting fired " << endl;
	
	
	
	

	//avg(salesTotal[11], cnt[12]);

	outfile.close();
	infile.close();
	system("PAUSE");
	return 0;
}

void print(float ary[11],float bry[12])
{
	cout << "Employee #  ||" << " Total sales ||" << " avregaes ||"<< " Commission||"<< endl;
	for (int i = 1; i < 11; i++)
	{
		cout << fixed<<setprecision(2);
		cout << setw(5) << left << i << setw(5) << "       || " << left<< ary[i] << "       ||  " << setw(5) <<left<< avg(ary[i], bry[i]) << setw(5)<<left<< " ||    " << commission(ary[i]) << endl;

	}

}
void ary(float ary[11])
{

	for (int i = 1; i < 11; i++)
	{
		ary[i] = 0;
	}

}
float avg(float x, float y)
{

	return x / y;
}
float commission(float salestotal)
{
	float commission = (salestotal*.09) + (800);

	return commission;

}
void firedEmployee(float x, float y)
{


}