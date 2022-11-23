#ifndef TargetGenerator_HPP
#define targetBOOK_HPP

#include <map>
#include "ATarget.hpp"

using namespace std;

class TargetGenerator
{
private:
  map<string, ATarget *> targetMap;
  TargetGenerator(const TargetGenerator &other);
  TargetGenerator &operator=(const TargetGenerator &ohter);

public:
  void learnTargetType(ATarget *target);
  void forgetTargetType(string const &name);
  ATarget *createTarget(string const &name);
  TargetGenerator();
  ~TargetGenerator();
};

#endif