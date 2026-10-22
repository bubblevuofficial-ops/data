//Lab 9
#include<iostream>
#include<conio.h>
using namespace std;
class PlainBox
{
	public:
		virtual void display()
		{
			cout << "PlainBox Class \n\n";
		}
};
class LunchBox : public PlainBox
{
		void display()
		{
			cout << "LunchBox Class \n\n";
		}	
};
class GiftBox : public PlainBox
{
		void display()
		{
			cout << "GiftBox Class \n\n";
		}	
};
main()
{
	PlainBox *p = new LunchBox;
	PlainBox *p1 = new GiftBox;
	p -> display();
	p1 -> display();
	getch();
	return 0;
}
