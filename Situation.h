#ifndef DECISION_H
#define  DECISIION_H

#include <string>
#include <map>

class Situation
{
private:
	std::map<std::string, Situation> branches{};
public:
	Situation();
	void addChild(std::string);
	Situation& getChild(std::string);
	std::map<std::string, Situation>& getMap();
	void draw(std::string);
};

#endif