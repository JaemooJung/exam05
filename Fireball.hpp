#ifndef Fireball_HPP
#define Fireball_HPP

#include <string>
#include "ASpell.hpp"

class Fireball : public ASpell
{
public:
  Fireball();
  ~Fireball();

  ASpell *clone() const;
};

#endif