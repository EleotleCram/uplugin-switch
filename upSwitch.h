#pragma once

#include <avdweb_uSwitch.h>
#include <uPlugin.h>

class upSwitch : public uPlugin {
private:
  Switch **switches;

public:
  upSwitch(Switch **switches) : switches(switches) {}
  void setup();
  void loop();
};
