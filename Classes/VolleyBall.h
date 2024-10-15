//
// Created by nicho on 15/10/2024.
//
#ifndef CLASSES_VOLLEYBALL_H
#define CLASSES_VOLLEYBALL_H
#include "Athlete.h"
#include <string>
class VolleyBall : public Athlete {
private:
    std::string m_position;
    float m_reactionTime;

public:
    VolleyBall();
    VolleyBall(std::string position, float reactionTime);

    std::string getPosition() const;
    void setPosition(std::string position);

    float getReactionTime() const;
    void setReactionTime(float reactionTime);
};
#endif //CLASSES_VOLLEYBALL_H
