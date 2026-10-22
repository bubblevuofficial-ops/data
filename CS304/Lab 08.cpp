// Lab 08
// Write a C++ Program which should consist of four classes.
//  1. Base
//  2. Derived_Private
//  3. Derived_Protected
//  4. Derived_Public

#include<iostream>
#include<conio.h>
using namespace std;
class Base
{
	private:
		int secret;
	protected:
		int protect;
	public:
		int access;
		Base()
		{
			secret = 0;
			protect = 0;
			access = 0;
		}
};
class Derived_Private:private Base
{
	public:
		void show()
		{
			cout << "Secret : " << secret << "\nProtect : " << protect << "\nAccess : " << access;
		}
};
class Derived_Protected:protected Base
{
		void show()
		{
			cout << "Secret : " << secret << "\nProtect : " << protect << "\nAccess : " << access;
		}	
};
class Derived_Public:public Base
{
		void show()
		{
			cout << "Secret : " << secret << "\nProtect : " << protect << "\nAccess : " << access;
		}	
};
main()
{
	Derived_Private obj1;
	Derived_Protected obj2;
	Derived_Public obj3;
	getch();
	return 0;
}
