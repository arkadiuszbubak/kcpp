/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2019.02.10
 * \brief Tablica automatyczne w C++
 * v0.01
 */

#include <iostream>
#include <sstream>
#include <algorithm>
#include <iterator>
using namespace std;

void tablice();
//----------------------------------------------------
void CoutWholeArray(int *array, int size){
   /* Display whole array in once 
    * see: LCoutArray */
   //Ponizsze nie zadziaala poniewaz tablica jest przeksztalaca do wskaznika do niej przy przekazywaniu do funkcji
   //see: decay to pointer
   //int size1 = sizeof(array)/sizeof(array[0]);
   //cout <<"Array size1: "<< size1 << " ->";
   cout <<"Array size:  "<< size << " ->";
   std::copy(array, array+size, std::ostream_iterator<int>(std::cout," "));
   std::cout << std::endl;
}
//----------------------------------------------------



int main(){

	tablice();

	return 0;
}

void tablice(){
	const int i=20, j=10;

	int A[10] = {0};         ///<tablica 10 int
  /* for(int w=0; w<10; w++){
   *   cout <<"Tab: "<< A[w] << endl;
   * } */

	int A0[10];             ///<tablica 10 int

  //CoutWholeArray(A,10);
	int A1[]={1,2,3,4,5,6};  ///<tablica 6 int
  //CoutWholeArray(A1,6);

	int A2[6]={0};
  //CoutWholeArray(A2,6);
  //
  int A3[6]{0,0,0,0,0,0};
	int A4[6]{0};

	//tablica 20 znaków
	char B[i]={'a', 'b', 'c', 'd', 'e', 'f'};
  /* for(int w=0; w<i; w++){
   *   cout << B[w] <<"\t"<< endl;
   * } */
  int BB[j]={0,1,2,3};

	//tablica 3 znakow
	char B1[]={'g', 'h', 'i'};
	char B2[4]="abc";

	float C[i+j];    ///<tablica 30 float
	int k = 0;
	A[0] = 1;          ///<inicj. elementu 0 wartoscia 1
	A[j-5] = 5;
	A[j-1] = A[5]+3;
	A[1] = A[0] + A[5];
	A[A[9]] = 8;
	*(A+2) = 17;
	*(A+3) = *(A+2)+1;

	for (k=0; k<10; k++){
		cout<<"A["<<k<<"]="<<*(A+k) <<"\t"<< A[k] <<endl;}

  /* //--------------------------------------
   * // Zadanie
   * //--------------------------------------
   * cout <<"\nA[0] = "<< A[0] << endl;
   * (*A)++;
   * //(*A++);  // error, prosze powiedziec dlaczego?
   * cout <<  (*A)++ << endl;
   * cout <<"A[0] = "<< A[0] << endl;
   * //-------------------------------------- */

}
