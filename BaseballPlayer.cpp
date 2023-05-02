#include "BaseballPlayer.h"

BaseballPlayer::BaseballPlayer(int hits, int homeRuns, int walks, int strikeOuts, const std::string& name)
    : m_hits(hits), m_homeRuns(homeRuns), m_walks(walks), m_strikeOuts(strikeOuts), m_name(name) {}

int BaseballPlayer::getHits() const {
    return m_hits;
}

void BaseballPlayer::setHits(int hits) {
    m_hits = hits;
}

int BaseballPlayer::getHomeRuns() const {
    return m_homeRuns;
}

void BaseballPlayer::setHomeRuns(int homeRuns) {
    m_homeRuns = homeRuns;
}

int BaseballPlayer::getWalks() const {
    return m_walks;
}

void BaseballPlayer::setWalks(int walks) {
    m_walks = walks;
}

int BaseballPlayer::getStrikeOuts() const {
    return m_strikeOuts;
}

void BaseballPlayer::setStrikeOuts(int strikeOuts) {
    m_strikeOuts = strikeOuts;
}

std::string BaseballPlayer::getName() const {
    return m_name;
}

void BaseballPlayer::setName(const std::string& name) {
    m_name = name;
}

int BaseballPlayer::getTotalPoints() const {
    return m_hits + m_homeRuns * 4 + m_walks - m_strikeOuts;
}

bool BaseballPlayer::operator<(const BaseballPlayer& other) const {
    return getTotalPoints() < other.getTotalPoints();
}

bool BaseballPlayer::operator>(const BaseballPlayer& other) const {
    return getTotalPoints() > other.getTotalPoints();
}
