#include <cstdlib> 
#include <iostream> 
using namespace std; 
template< class T > 
class A { 
public: 
 static int data; 
 static void doSomething( T & ); 
}; 
template<class T> 
int A<T>::data = 0; 
int main() { 
 A< int > ia, ib , ic; 
 
 ia.data = 5; 
 ib.data = 7; 
 ic.data = 9; 
 cout << "ia.data = " << ia.data << endl << "ib.data = " << ib.data << endl << 
"ic.data = " << ic.data << endl; 
 system("PAUSE"); 
 return 0;
}
