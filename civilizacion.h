#ifndef CIVILIZACION_H
#define CIVILIZACION_H

#include <iostream>
#include <iomanip>
using namespace std;

class Civilizacion
{
private:
    string nombre;
    int ubicacionX;
    int ubicacionY;
    float puntuacion;
public:
    Civilizacion();
    Civilizacion(const string &nombre, int ubicacionX, int ubicacionY, float puntuacion);

    void setNombre(const string &v);
    void setUbicacionX(int v);
    void setUbicacionY(int v);
    void setPuntuacion(float v);

    string getNombre();
    int getUbicacionX();
    int getUbicacionY();
    float getPuntuacion();

   friend ostream& operator<<(ostream &out, const Civilizacion &c){
       out << left;
       out << setw(15) << c.nombre;
       out << setw(13) << c.ubicacionX;
       out << setw(13) << c.ubicacionY;
       out << setw(10) << c.puntuacion;
       out << endl;
       return out;
   }
   friend istream& operator>>(istream &in, Civilizacion &c){
       cout << "Nombre de la Civilizacion: ";
       getline(cin, c.nombre);
       cout << "Ubicacion en X: ";
       cin >> c.ubicacionX;
       cout << "Ubicacion en Y: ";
       cin >> c.ubicacionY;
       cout << "Puntuacion: ";
       cin >> c.puntuacion; cin.ignore();

       return in;
   }

    bool operator==(const Civilizacion &c){
        return nombre == c.nombre;
    }
    bool operator==(const Civilizacion &c) const{
        return nombre == c.nombre;
    }
};

#endif