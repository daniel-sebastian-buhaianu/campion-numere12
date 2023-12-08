#include <fstream>
using namespace std;
int main()
{
	ifstream f("numere12.in");
	int a, b;
	f >> a >> b;
	f.close();
	int nr = 0;
	for (int x = a; x <= b; x++)
	{
		int aux = x;
		bool ok = 1;
		while (aux && ok)
		{
			int c = aux%10;
			if (c && x%c) ok = 0;
			aux/=10;
		}
		if (!aux && ok) nr++;
	}
	ofstream g("numere12.out");
	g << nr;
	g.close();
	return 0;
}

