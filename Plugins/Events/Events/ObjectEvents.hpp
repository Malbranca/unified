#pragma once

#include "nwnx.hpp"
#include "API/Vector.hpp"

namespace Events {

class ObjectEvents
{
public:
    ObjectEvents(NWNXLib::Services::HooksProxy* hooker);

private:
    static int32_t AddLockObjectActionHook(CNWSObject*, ObjectID);
    static int32_t AddUnlockObjectActionHook(CNWSObject*, ObjectID, ObjectID, int32_t);
};

}
