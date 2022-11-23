#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"

using namespace std;

class Warlock
{
private:
  string name;
  string title;
  SpellBook spellBook;

  Warlock();
  Warlock(const Warlock &other);
  Warlock &operator=(const Warlock &other);

public:
  const string &getName() const;
  const string &getTitle() const;

  void setTitle(const string &title);

  void introduce() const;

  void learnSpell(ASpell *spell);
  void forgetSpell(string name);
  void launchSpell(string name, ATarget &target);

  Warlock(const string &name, const string &title);
  ~Warlock();
};

#endif