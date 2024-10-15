//
// Created by nicho on 15/10/2024.
//
#include <string>
#ifndef CLASSES_ATHLETE_H
#define CLASSES_ATHLETE_H
class Athlete {
private:
    int m_height;
    int m_weight;
    char m_gender;

public:
    Athlete(); // Default constructor
    Athlete(int height, int weight, char gender); // Parameterized constructor

    int getHeight() const;
    void setHeight(int height);

    int getWeight() const;
    void setWeight(int weight);

    char getGender() const;
    void setGender(char gender);
};

#endif //CLASSES_ATHLETE_H
