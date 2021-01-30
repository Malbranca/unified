#pragma once

#include "nwnx.hpp"

namespace Tweaks {

class SneakAttackCritImmunity
{
public:
    SneakAttackCritImmunity(NWNXLib::Services::HooksProxy* hooker);

private:
    static void CNWSCreature__ResolveSneakAttack_hook(CNWSCreature*, CNWSCreature*);
    static void CNWSCreature__ResolveDeathAttack_hook(CNWSCreature*, CNWSCreature*);
};

}
