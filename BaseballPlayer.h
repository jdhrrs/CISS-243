#pragma once

#include <iostream>

using namespace std;

class BaseballPlayer

{

private:

	string name;

	int hits;

	int homeRuns;

	int walks;

	int strikeOuts;

public:

	BaseballPlayer();

	BaseballPlayer(string name, int hits, int homeRuns, int walks, int strikeOuts);

	void setName(string name);

	void setHits(int hits);

	void setHomeRuns(int homeRuns);

	void setWalks(int walks);

	void setStrikeOuts(int strikeOuts);

	string getName() const;

	int getHits() const;

	int getWalks() const;

	int getStrikeOuts() const;

	int getHomeRuns() const;

	int calcPoints() const;

	bool operator<(const BaseballPlayer& other) const;

	bool operator>(const BaseballPlayer& other) const;

	friend ostream& operator<<(ostream& out, const BaseballPlayer& player);

};

BaseballPlayer::BaseballPlayer()

{

	name = "";

	hits = 0;

	homeRuns = 0;

	walks = 0;

	strikeOuts = 0;

}

BaseballPlayer::BaseballPlayer(string name, int hits, int homeRuns, int walks, int strikeOuts)

{

	this->name = name;

	this->hits = hits;

	this->homeRuns = homeRuns;

	this->walks = walks;

	this->strikeOuts = strikeOuts;

}

void BaseballPlayer::setName(string name)

{

	this->name = name;

}

void BaseballPlayer::setHits(int hits)

{

	this->hits = hits;

}

void BaseballPlayer::setHomeRuns(int homeRuns)

{

	this->homeRuns = homeRuns;

}

void BaseballPlayer::setStrikeOuts(int strikeOuts)

{

	this->strikeOuts = strikeOuts;

}

void BaseballPlayer::setWalks(int walks)

{

	this->walks = walks;

}

string BaseballPlayer::getName() const

{

	return name;

}

int BaseballPlayer::getHits() const

{

	return hits;

}

int BaseballPlayer::getStrikeOuts() const

{

	return strikeOuts;

}

int BaseballPlayer::getHomeRuns() const

{

	return homeRuns;

}

int BaseballPlayer::getWalks() const

{

	return walks;

}

int BaseballPlayer::calcPoints() const

{

	int playerPoints = 0;

	if (hits > 0)

		playerPoints += hits;

	if (homeRuns > 0)

		playerPoints += 4 * homeRuns;

	if (walks > 0)

		playerPoints += walks;

	if (strikeOuts > 0)

		playerPoints -= strikeOuts;

	return playerPoints;

}

bool BaseballPlayer::operator<(const BaseballPlayer& other) const

{

	int player1Points = calcPoints();

	int player2Points = other.calcPoints();

	if (player1Points < player2Points)

		return true;

	else

		return false;

}

bool BaseballPlayer::operator>(const BaseballPlayer& other) const

{

	int player1Points = calcPoints();

	int player2Points = other.calcPoints();

	if (player1Points > player2Points)

		return true;

	else

		return false;

}

ostream& operator<<(ostream& out, const BaseballPlayer& player)

{

	out << "Name : " << player.name << "\nHits : " << player.hits << "\nHome Runs : " << player.homeRuns << "\nWalks : " << player.walks << "\nStrike Outs : " << player.strikeOuts

		<< "\nTotal Points : " << player.calcPoints() << endl;

	return out;

}