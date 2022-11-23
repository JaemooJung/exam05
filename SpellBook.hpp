#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP

#include <map>
#include "ASpell.hpp"

using namespace std;

class SpellBook
{
private:
  map<string, ASpell *> spellMap;
  SpellBook(const SpellBook &other);
  SpellBook &operator=(const SpellBook &ohter);

public:
  void learnSpell(ASpell *spell);
  void forgetSpell(string const &name);
  ASpell *createSpell(string const &name);
  SpellBook();
  ~SpellBook();
};

#endif