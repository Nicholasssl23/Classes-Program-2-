//
// Created by nicho on 15/10/2024.
//
#include <iostream>
#include "Athlete.h"
#include "Tennis.h"
#include "VolleyBall.h"
#include <string>
int main()
{
    Athlete sport(72, 140, 'M');
    std::cout << "Athlete: " << sport.getHeight() << " "
              << sport.getWeight() << " "
              << sport.getGender() << std::endl;

    Tennis martina = Tennis();
    martina.setServeSpeed(100);
    martina.setGender('F');
    Tennis bjorn(150, false);
    bjorn.setGender('M');
    if (martina.getGender() == 'F')
        std::cout << "Martina serve speed: " << martina.getServeSpeed() << std::endl;

    VolleyBall kerri = VolleyBall();
    kerri.setGender('F');
    kerri.setPosition("Opposite Hitter");
    VolleyBall giba("Outside Hitter", 23.2);
    giba.setGender('M');
    if (kerri.getGender() == 'F')
        std::cout << "Kerri is an " << kerri.getPosition() << std::endl;

    return 0;
}
