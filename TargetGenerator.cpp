#include "TargetGenerator.hpp"

void TargetGenerator::learnTargetType(ATarget *target)
{
  if (target)
  {
    targetMap.insert(pair<string, ATarget *>(target->getType(), target->clone()));
  }
}

void TargetGenerator::forgetTargetType(string const &name)
{
  map<string, ATarget *>::iterator it = targetMap.find(name);
  if (it != targetMap.end())
  {
    delete it->second;
    targetMap.erase(name);
  }
}

ATarget *TargetGenerator::createTarget(string const &name)
{
  map<string, ATarget *>::iterator it = targetMap.find(name);
  if (it != targetMap.end())
  {
    return it->second;
  }
  return NULL;
}

TargetGenerator::TargetGenerator()
{
}

TargetGenerator::~TargetGenerator()
{
  map<string, ATarget *>::iterator it = targetMap.begin();
  while (it != targetMap.end())
  {
    delete it->second;
    it++;
  }
  targetMap.clear();
}
