#include "ASpell.hpp"

string ASpell::getName() const
{
  return this->name;
}

string ASpell::getEffects() const
{
  return this->effects;
}

void ASpell::launch(const ATarget &target)
{
  target.getHitBySpell(*this);
}

ASpell::ASpell()
{
}

ASpell::ASpell(string name, string effects)
{
  this->name = name;
  this->effects = effects;
}

ASpell::ASpell(const ASpell &other)
{
  this->name = other.getName();
  this->effects = other.getEffects();
}

ASpell &ASpell::operator=(const ASpell &other)
{
  this->name = other.getName();
  this->effects = other.getEffects();
  return *this;
}

ASpell::~ASpell()
{
}
