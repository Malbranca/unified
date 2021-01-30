#pragma once

#include "nwnx.hpp"
#include "API/Vector.hpp"

namespace Events {

class QuickbarEvents
{
public:
    QuickbarEvents(NWNXLib::Services::HooksProxy* hooker);

private:
    static int32_t HandlePlayerToServerGuiQuickbar_SetButtonHook(CNWSMessage*, CNWSPlayer*, uint8_t, uint8_t);
};

}
