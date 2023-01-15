#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.txt");
int n;
class Ordonare {
private:
	int V[20];
	void bubble_sort()
	{
		int OK;
		do
		{
			OK = 1;
			int i, j, aux;
			for (i = 1;i < n;i++)
				for (j = i + 1;j <= n;j++)
					if (V[i] > V[j])
					{
						aux = V[i];
						V[i] = V[j];
						V[j] = aux;
						OK = 0;
					}
		} while (!OK);
	}
public:
	void seteaza()
	{
		int i;
		for (i = 1;i <= n;i++)
			f >> V[i];
		bubble_sort();
	}

	void afiseaza()
	{
		int i;
		for (i = 1;i <= n;i++)
			cout << V[i] << " ";
	}

};


int main()
{
	Ordonare x;
	f >> n;
	cout << n << endl;
	x.seteaza();
	x.afiseaza();
	return 0;

}