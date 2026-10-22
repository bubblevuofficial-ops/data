#include<iostream>
#include<conio.h>
using namespace std;
class pyrmaid
{
	private:
		static int pcount;
	public:
		pyrmaid()
		{
			cout <<"Pyrmaid Constructor\n";
			pcount++;
		}
		~pyrmaid()
		{
			cout << "\nPyrmaid Destructor";
			pcount --;
		}
		int getpcount()
		{
			return pcount;
		}
};
int pyrmaid::pcount = 0;
main()
{
	pyrmaid *P1 = new pyrmaid;
	pyrmaid *P2 = new pyrmaid;
	pyrmaid *P3 = new pyrmaid;
	cout <<"Total Object: "<< P1 -> getpcount();
	delete P1;
	delete P2;
	cout << "\nTotal Object: "<< P3 -> getpcount();
	getch();
	return 0; 	
}
