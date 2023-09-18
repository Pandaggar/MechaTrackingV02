#include <vector3.h>
#include <quat.h>
#include <math.h>
#include <arduino.h>
#define Rad(deg) (deg*M_PI/180.0)

class MThip{
    public:
    Quat geQuat(int);
    private:
    void EtoQ(double ze,double ye,double xe, double* x, double* y, double* z, double* w);
};

class MTsensorcalc{
    public:
    float floatmap(float x, float in_min, float in_max, float out_min, float out_max);
    void Hallrange(int pin, int* min, int* max, int* mid);
};