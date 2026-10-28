// for changes visit MyChannel *Knowledge For Us* https://youtu.be/kujwHOV4EJA
// Write your own ID BC*******
# include <iostream>
using namespace std;

# define PI 3.14159265

class Circle
{
	private:
		double radius;
	public:
Circle ()
{
	radius = 0.0;
}

		void setRadius()
{
	radius = 5.6;
}
 
		void computeAreaCirc()
{
	cout << "Area of circle is: " << PI * (radius * radius) << endl; //PI is defined at top and Area of circle formula is pi*radius square
	
	cout << "Circumference of circle is: " << 2 * PI * radius << endl; // circunFerence formula is 2*pi*radius

}

};



class Rectangle
{
	private:
		double length; 
		double width;
	public:
		
		
Rectangle()
{
	length = 0.0;
	width = 0.0;
}


		void setLength()
{
	length = 5.0;
	
} 


		void setWidth()
{
	width = 4.0;
}

		void computeArea()
{
	cout << "Area of Rectangle: " << length * width << endl;	//Area of rectangle is length * width
}


};

//main Function is strating from here
main()
{
	int opt; char ch; //opt is for option selection and ch function is for yes/no choose
cout <<"*******************SCIENTIFIC-CAALCULATOR***********************";
	

do	{
		cout <<endl<< "OPTION 1 for computing Area and Circumference of the circle" << endl;
		cout << "OPTION 2 for computing Area of the Rectangle" << endl;
		cout << "Select your desired option(1-2): ";
		cin >> opt;
		
		if(opt == 1)
		{
			Circle objc; // object for Circle created and call to constructor
			objc.setRadius(); // call to function
			objc.computeAreaCirc();// call to function
		}
		
		
		else if(opt == 2)
		{
			Rectangle objr;// object for Rectangle created and call to constructor
			objr.setLength();// call to function
			objr.setWidth();// call to function
			objr.computeArea();// call to function
		}
		
		
		else
		{
			cout << "Invalid Option!!, Option should be from (1-2)" << endl;
		}
		
			cout << "Do you want to perform any other calculation(Y/N):";
			cin >> ch;  //taking input to perform more or not
	}
			while(ch == 'Y' || ch == 'y');
			
		
}


