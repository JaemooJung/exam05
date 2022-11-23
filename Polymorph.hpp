#ifndef Polymorph_HPP
#define Polymorph_HPP

#include <string>
#include "ASpell.hpp"

class Polymorph : public ASpell
{
public:
  Polymorph();
  ~Polymorph();

  ASpell *clone() const;
};

#endif