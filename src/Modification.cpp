#include "Modification.hpp"

Modification::Modification()
{
    _modAttributes = false;
    _modStates = false;
}

Modification::Modification(UnitAttribute tarjet, bool relative, int value, std::vector<std::pair<UnitAttribute, float>> pro, std::vector<std::pair<UnitAttribute, float>> cont)
{
    _modAttributes = true;
    _modStates = false;

    _aTarjet = tarjet;
    _aRelative = relative;
    _aValue = value;

    _aPro = pro;
    _aCont = cont;
}

Modification::Modification(UnitState tarjet, bool value)
{
    _modAttributes = false;
    _modStates = true;

    _sTarjet =  tarjet;
    _sValue = tarjet;
}

Modification::~Modification() {}