#include "Warlock.hpp"

const string &Warlock::getName() const
{
  return this->name;
}

const string &Warlock::getTitle() const
{
  return this->title;
}

void Warlock::setTitle(const string &title)
{
  this->title = title;
}

void Warlock::introduce() const
{
  cout << this->name << ": I am " << this->name << ", " << this->title << "!" << endl;
}

void Warlock::learnSpell(ASpell *spell)
{
  spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(string name)
{
  spellBook.forgetSpell(name);
}

void Warlock::launchSpell(string name, ATarget &target)
{
  ASpell *spell = spellBook.createSpell(name);
  if (spell)
  {
    spell->launch(target);
  }
}

Warlock::Warlock(const string &name, const string &title)
{
  this->name = name;
  this->title = title;
  cout << this->name << ": This looks like another boring day." << endl;
}

Warlock::~Warlock()
{
  cout << this->name << ": fucking destructor called" << endl;
}
