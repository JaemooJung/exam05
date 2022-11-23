#include "ATarget.hpp"

string ATarget::getType() const
{
  return this->type;
}

void ATarget::getHitBySpell(const ASpell& spell) const
{
  cout << this->type << " has been " << spell.getEffects() << "!" << endl;
}

ATarget::ATarget()
{
  
}

ATarget::ATarget(string target)
{
  this->type = target;
}

ATarget::ATarget(const ATarget &other)
{
  this->type = other.getType();
}

ATarget& ATarget::operator=(const ATarget &other)
{
  this->type = other.getType();
  return *this;
}

ATarget::~ATarget()
{
  
}
