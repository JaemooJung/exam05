#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>

using namespace std;

class ATarget;

class ASpell
{
private:
  string name;
  string effects;

public:
  string getName() const;
  string getEffects() const;
  virtual ASpell *clone() const = 0;

  void launch(const ATarget &target);

  ASpell();
  ASpell(string name, string effects);
  ASpell(const ASpell &other);
  ASpell &operator=(const ASpell &other);
  virtual ~ASpell();
};

#include "ATarget.hpp"

#endif