//Lab 5
#include<iostream>
#include<conio.h>
using namespace std;
class Circle
{
	private:
		float radius;
	public:
		void setter(float r)
		{
			radius = r;
		}
		float getter()
		{
			return radius;
		}
		Circle operator +(Circle obj)
		{
			obj.radius += radius;
			return obj;
		}	
};
main()
{
	Circle c1, c2, c3;
	c1.setter(10);
	c2.setter(20);
	c3 = c1 + c2;
	cout << "Radius Value of c3: " << c3.getter();
	getch();
	return 0; 
}

// Lab 06:
// Write a C++ program ....class named *Complex* .....data members *real* and *imaginary*. Overload the stream insertion(<<) Operator and 
// stream extraction(>>) Operator for this class. In main functuion create an object *com1* and take input from >> and print from << .
#include<iostream>
#include<conio.h>
using namespace std;
class Complex
{
	private:
		int real, imag;
	public:
		Complex()
		{
			real = 0;
			imag = 0;
		}
	// Stream Extraction
	friend istream &operator >>(istream &input, Complex &c)
	{
		cout << "Please enter Real part of complex number: ";
		input >> c.real;

		cout << "Please enter imag part of complex number: ";
		input >> c.imag;
		
		return input;		
	}
	// strem Inseertion
	friend ostream &operator <<(ostream &output, Complex &c)
	{
		output << c.real << "+" <<c.imag <<"i";
		return output;
	}
};
main()
{
	Complex com1;
	cin >> com1;
	cout << "\nThe Complex object is: " << com1;
	getch();
	return 0;
}


//Lab 07
// Write a C++ Program ....class named *Planet* has no datta member and only cotains default constructor.
/// Two more classes inner_planet amd Outer_Planet...Concept of inheritance.

#include<iostream>
#include<conio.h>
using namespace std;

class Planet
{
	public:
		Planet()
		{
			cout << "Planet Constructor is called";
		}
};
class Inner_Planet:public Planet
{
	public:
		Inner_Planet()
		{
			cout << "\nInner_Planet Constructor is called";
		}
};
class Outer_Planet:public Planet
{
	public:
		Outer_Planet()
		{
			cout << "\nOuter_PLanet Constructor is called";
		}
};

main()
{
	Inner_Planet IP;
	cout << "\n\n***************\n\n";
	Outer_Planet OP;
	getch();
	return 0;
}


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
