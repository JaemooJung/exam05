#include "SpellBook.hpp"

void SpellBook::learnSpell(ASpell *spell)
{
  if (spell)
  {
    spellMap.insert(pair<string, ASpell *>(spell->getName(), spell->clone()));
  }
}

void SpellBook::forgetSpell(string const &name)
{
  map<string, ASpell *>::iterator it = spellMap.find(name);
  if (it != spellMap.end())
  {
    delete it->second;
    spellMap.erase(name);
  }
}

ASpell *SpellBook::createSpell(string const &name)
{
  map<string, ASpell *>::iterator it = spellMap.find(name);
  if (it != spellMap.end())
  {
    return it->second;
  }
  return NULL;
}

SpellBook::SpellBook()
{
}

SpellBook::~SpellBook()
{
  map<string, ASpell *>::iterator it = spellMap.begin();
  while (it != spellMap.end())
  {
    delete it->second;
    it++;
  }
  spellMap.clear();
}
