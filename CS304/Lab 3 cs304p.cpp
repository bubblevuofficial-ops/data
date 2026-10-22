#include<iostream>
#include<conio.h>

using namespace std;
class Room
{
	private:
		float Height, Width;
	public:
		Room()
		{
			Height = 0.0;
			Width = 0.0;
			cout <<"Default Constructor called";
			cout <<"\nHeight = "<<Height <<"\nWidth = "<<Width;
		}
		Room(float h)
		{
			Height = h;
			Width = 0.0;
			cout <<"\n\nOne Argument Constructor called";
			cout <<"\nHeight = "<<Height <<"\nWidth = "<<Width;	
		}
		Room(float h, float w)
		{
			Height = h;
			Width = w;
			cout <<"\n\nTwo Argument Constructor called";
			cout <<"\nHeight = "<<Height <<"\nWidth = "<<Width;	
		}
};
main()
{
	Room R1, R2(10), R3(3.4,5);
	getch();
	return 0;
}



