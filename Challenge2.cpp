//CHALLENGE 2- EVALUATE ARITHMETIC EXPRESSION



#include<iostream>
#include<fstream>
#include<cmath>

using namespace std;

int main()
{
	ifstream fin("input.txt");
	ofstream fout("output.txt");
	
	float discriminant, A, B, C, root1, root2;
	
	fin >> A >> B >> C;
	
		while (A != -99)
		{
			discriminant = (pow(B,2.0)-4*A*C);
			
			if (A == 0)
			{
				fout << A << "\t" << B << "\t" << C << "\t" << root1 << "\t" << root2 << endl;
			}
		
			else if (discriminant > 0)
			{
				root1 = (-B - sqrt(discriminant))/(2.0*A);
				root2 = (-B + sqrt(discriminant))/(2.0*A);
				fout << A << "\t" << B << "\t" << C << "\t" << root1 << "\t" << root2 << endl;
			}
	
			else if (discriminant == 0)
			{
				fout << A << "\t" << B << "\t" << C << "\t" << root1 << "\t" << root2 << endl;
			}
	
			else
			{
				fout << A << "\t" << B << "\t" << C << "\t" << root1 << "\t" << root2 << endl;
			}
			
			fin >> A >> B >> C;
		}
	
	fout.close();
		
	ifstream fin2("output.txt");
	
	fin2 >> A >> B >> C >> root1 >> root2;
	
	while(!fin2.eof())
	{
		cout << A << "\t" << B << "\t" << C << "\t" << root1 << "\t" << root2 << endl;

		fin2 >> A >> B >> C >> root1 >> root2;
	}
	
	cout << endl;
	
}

