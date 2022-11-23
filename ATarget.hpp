#ifndef ATarget_HPP
#define ATarget_HPP

#include <string>
#include <iostream>

using namespace std;

class ASpell;

class ATarget
{
private:
  string type;

public:
  string getType() const;
  virtual ATarget *clone() const = 0;

  void getHitBySpell(const ASpell &spell) const;

  ATarget();
  ATarget(string target);
  ATarget(const ATarget &other);
  ATarget &operator=(const ATarget &other);
  virtual ~ATarget();
};

#include "ASpell.hpp"

#endif