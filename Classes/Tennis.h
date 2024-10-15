//
// Created by nicho on 15/10/2024.
//
#ifndef CLASSES_TENNIS_H
#define CLASSES_TENNIS_H
#include "Athlete.h"
#include <string>
class Tennis : public Athlete {
private:
    int m_serveSpeed;
    bool m_serveAndVolley;

public:
    Tennis();
    Tennis(int serveSpeed, bool serveAndVolley);

    int getServeSpeed() const;
    void setServeSpeed(int serveSpeed);

    bool getServeAndVolley() const;
    void setServeAndVolley(bool serveAndVolley);
};
#endif //CLASSES_TENNIS_H
