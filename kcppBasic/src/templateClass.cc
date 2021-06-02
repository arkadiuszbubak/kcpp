/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.05.15
 * \brief template class w C++ 
 * v0.01
 */

#include <iostream>
using namespace std;

//template<class T>
template<typename T>
class CCalculator
{
   
 public:
   CCalculator(const T &x, const T &y) : fMx(x), fMy(y) {}
   
   ~CCalculator(void) { }
   
   
   const T Add(void) {
	 return fMx + fMy; 
   }
   
   const T Sub(void) {
      return fMx - fMy; 
   }
   
   const T Mult(void) {
      return fMx * fMy; 
   }
   
   const T Div(void) {
      return fMx / fMy; 
   }
   
 private:
   const T fMx;
   const T fMy;
};

//---------------------------------------------------
int main() {

   // Create a calculator for integers.
   CCalculator<int> calcR(5, 2);
   // Should give 10.
   const int x = calcR.Mult();
   cout << x << endl;
   
   CCalculator<float> calcF(5.2, 2.2);
   //CCalculator<> calcF(5.2, 2.2);   ///< ERROR in template
   //CCalculator calcF(5.2, 2.2);
   const float y = calcF.Add();
   cout << y << endl;
}
