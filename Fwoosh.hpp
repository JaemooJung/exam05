#ifndef Fwoosh_HPP
#define Fwoosh_HPP

#include <string>
#include "ASpell.hpp"

class Fwoosh : public ASpell
{
public:
  Fwoosh();
  ~Fwoosh();

  ASpell *clone() const;
};

#endif