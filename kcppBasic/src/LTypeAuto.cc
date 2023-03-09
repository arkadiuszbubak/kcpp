/**
 * \author: Arkadiusz Bubak arkadiusz@bubak.pl
 * \date 2020.02.29
 * \brief Typ auto w C++
 * v0.02 (2021.03.01)
 */

#include<iostream>
#include<typeinfo>
#include<map>
using namespace std;

int main()
{

  // ---- sizeof, typeid -----
  auto var1 = 137;
  cout << "var1:    "<< var1 << endl;
  cout << "Size of: "<< sizeof(var1) << endl;
  cout << "Type:    "<< typeid(var1).name() << endl;
  
  auto var2 = 137.1;
  cout << "var2 :   "<< var2 << endl;
  cout << "Size of: "<< sizeof(var2) << endl;
  cout << "Type:    "<< typeid(var2).name() << endl;
  cout <<"--------------------------------------"<<endl;


/*   float var3 = 137.1;
 *   cout << "var3:    "<< var3 << endl;
 *   cout << "Size of: "<< sizeof(var3) << endl;
 *   cout << "Type:    "<< typeid(var3).name() << endl;
 *
 *   double var4 = 137.1;
 *   cout << "var4:    "<< var4 << endl;
 *   cout << "Size of: "<< sizeof(var4) << endl;
 *   cout << "Type:    "<< typeid(var4).name() << endl;
 *  */

/*   // ----- Inicjalizownanie stala -----
 *   auto varA = 137.1;  //C++11 (auto bedzie typu zmiennoprzecinkowego)
 *   int  varB = 137.1;  //C i C++)
 *
 *   cout <<"--------------------------------------"<<endl;
 *   cout << "varA :   "<< varA << endl;
 *   cout << "Size of: "<< sizeof(varA) << endl;
 *   cout << "Type:    "<< typeid(varA).name() << endl;
 *   cout << "varB :   "<< varB << endl;
 *   cout << "Size of: "<< sizeof(varB) << endl;
 *   cout << "Type:    "<< typeid(varB).name() << endl;
 *   // ------------------------------- */



/*   // ----- Inicjalizownane zwracana wartoscia -----
 *   map<char, float> mapa;
 *   mapa['a'] = 1.0;
 *
 *   auto itA = mapa.begin(); //C++11
 *   std::map<char, float>::iterator itB = mapa.begin(); //C++
 *   // ------------------------------- */



/*   // ----- Inicjalizacja wskaznikiem -----
 *   double varC = 3.14;
 *
 *   auto *wskA = new auto(varC);     //C++11
 *   double *wskB = new double(varC); //C++
 *
 *
 *   //------ cleaning
 *   delete wskA;
 *   delete wskB; */

  // --------------------------------
  return 0;                 
                 
}
