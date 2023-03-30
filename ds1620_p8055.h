#ifndef DS1620_P8055_H
#define DS1620_P8055_H
#include "p8055.h"
#include <windows.h>
#include <Qstring>
#include<string>
#include<iostream>
#include <sstream>



class DS1620_P8055:public P8055
{
public:
    DS1620_P8055(int addcarte);
    void lance_conv();
    short lecture_temp();
    void stop_conv();
private:
    void clock();
    void protocole(char val);



};

#endif // DS1620_P8055_H
