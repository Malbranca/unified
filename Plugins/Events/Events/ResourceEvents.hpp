#pragma once

#include "nwnx.hpp"
#include "API/Vector.hpp"

#include <thread>

namespace Events {

class ResourceEvents
{
public:
    ResourceEvents(NWNXLib::Services::TasksProxy* tasks);
    virtual ~ResourceEvents();

private:
    static std::unique_ptr<std::thread> m_pollThread;
};

}
