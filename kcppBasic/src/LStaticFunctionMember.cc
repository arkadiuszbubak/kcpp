/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.03.11
 * \brief Static member function int C++
 * v0.01
 *
 *  By declaring a function member as static, you make it independent of any
 *  particular object of the class. A static member function can be called even
 *  if no objects of the class exist and the static functions are accessed using
 *  only the class name and the scope resolution operator ::. A static member
 *  function can only access static data member, other static member functions
 *  and any other functions from outside the class. Static member functions have
 *  a class scope and they do not have access to the this pointer of the class.
 *  You could use a static member function to determine whether some objects of
 *  the class have been created or not.
 **/

#include <iostream>
using namespace std;

class LBox {
	public:
		static int iObjectCount;

		// Constructor definition
		LBox(double l = 2.0, double b = 2.0, double h = 2.0) {
			cout <<"Constructor called." << endl;
			dLength  = l;
			dBreadth = b;
			dHeight  = h;

			// Increase every time object is created
			iObjectCount++;
		}
    // Destructor
    ~LBox(){};


		inline double GetVolume()    { return dLength *dBreadth *dHeight; }
		//inline static int GetCount() { return iObjectCount; }
		static int GetCount()        { return iObjectCount; }

	private:
		double dLength;     // Length of a box
		double dBreadth;    // Breadth of a box
		double dHeight;     // Height of a box
};

// Initialize static member of class LBox
int LBox::iObjectCount = 0;


//--------------------------------------------
int main(void) {
	// Print total number of objects before creating object.
	cout << "Inital Stage Count: " << LBox::GetCount() << endl;

	LBox objectBox1(4.1, 2.2, 3.6);    // Declare objectBox1
	LBox objectBox2(4.7, 2.3, 4.1);    // Declare objectBox2

	// Print total number of objects after creating object.
	cout << "Final Stage Count: " << LBox::GetCount() << endl;

	return 0;
}
