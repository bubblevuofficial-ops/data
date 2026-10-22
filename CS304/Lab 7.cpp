#include<iostream>
#include<conion.h>
using namespace std;

template<class T>
class Bag
{
	private:
		T *array;
		int size, maxSize;
	public:
		Bag()
		{
			array = new T[3];
			size = 0;
			maxSize = 0;
		}
		void Add(T value)
		{
			array[size++] = value;
			maxSize *= 2;
		}
		void print()
		{
			for(int i=0; i<=size; i++)
			{
				cout << array[i] << "  ";
			}
		}
};
template<class T>
class Bag<int*>
{
	private:
		T *array;
		int size, maxSize;
	public:
		Bag()
		{
			array = new T[3];
			size = 0;
			maxSize = 0;
		}
		void Add(T *value)
		{
			array[size++] = *value;
			maxSize *= 2;
		}
		void print()
		{
			for(int i=0; i<=size; i++)
			{
				cout << array[i] << "  ";
			}
		}
};

main()
{
	Bag<int> IB;
	Bag<char> CB;
	Bag<int*> PB;
	
	int a = 12, b = 23, c = 34;
	 
	IB.Add(10);
	IB.Add(20);
	IB.Add(30);
	
	CB.Add('M');
	CB.Add('E');
	CB.Add('B');
	
	PB.Add(&a);
	PB.Add(&b);
	PB.Add(&c);
	
	cout << "Integer Values: ";
	IB.print();
	getch();
	return 0;
}
