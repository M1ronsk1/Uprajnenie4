#include <iostream>
#include <math.h>
#include "string"
#ifndef SHIP_H_
#define SHIP_H_

using namespace std;

class Ship
{
public:
    Ship();
    ///Testov komentar 1
    Ship(int power, int energy, int health, string name, double x, double y );
    Ship( string name);
    ~Ship();
    double Getx() ;
    double Gety() ;
    int GetPower();
    int GetEnergy();
    int GetHealth();
    string GetName();
    
    void Setx( double x);
    void Sety( double y);
    void SetPower(int power);
    void SetEnergy(int energy);
    void SetHealth(int health);
    void SetName(string name);
    
    void RegulateHelth(int damage);
    
  virtual  void Position()=0;
    
protected:
    int damage_;
    int power_;
    int energy_;
    int health_;
    string name_;
    double x_;
    double y_;
};

#endif