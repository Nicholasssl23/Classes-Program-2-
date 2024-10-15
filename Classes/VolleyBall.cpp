//
// Created by nicho on 15/10/2024.
//
#include "VolleyBall.h"
#include <string>
VolleyBall::VolleyBall() : m_position("Unknown"), m_reactionTime(0.0) {}

VolleyBall::VolleyBall(std::string position, float reactionTime) : m_position(position), m_reactionTime(reactionTime) {}

std::string VolleyBall::getPosition() const {
    return m_position;
}

void VolleyBall::setPosition(std::string position) {
    m_position = position;
}

float VolleyBall::getReactionTime() const {
    return m_reactionTime;
}

void VolleyBall::setReactionTime(float reactionTime) {
    m_reactionTime = reactionTime;
}

