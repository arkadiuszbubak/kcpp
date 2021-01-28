/* Author: Arkadiusz Bubak
mail: arkadiusz@buabk.pl
date: 2008.02.22, v0.01
2019.02.27, v0.02
*/

#ifndef KVICAR_H
#define KVICAR_H 1

class KviCar
{
  public:
    /** Default constructor **/
    KviCar();

    /** Default destructor **/
    ~KviCar();

    /** Modifiers **/
    void SetPlate(int rplate)       { fPlate     = rplate; };
    void SetFakePlate(int fplate)   { fFakePlate = fplate; };
    void SetColor(int color)        { fColor     = color; };

    /** Accesors **/
    int GetPlate()     { return fPlate; };
    int GetFakePlate() { return fFakePlate; };
    int GetColor()     { return fColor; };

    void Print();

  private:
    int fPlate;
    int fFakePlate;
    int fColor;

    //ClassDef(KviCar,1)
};

#endif
