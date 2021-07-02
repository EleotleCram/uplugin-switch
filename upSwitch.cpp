#include "upSwitch.h"

#include <every.h>

void upSwitch::setup() {
  //
}

void upSwitch::loop() {
  if (switches) {
    for (int i = 0; switches[i]; i++) {
      switches[i]->poll();
    }
  }
}
