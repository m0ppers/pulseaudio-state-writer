#include "json/json.h"
#include "pulseaudio.hpp"

int main() {
  Json::Value config{};
  waybar::modules::Pulseaudio pulseAudio("uff", config);

  while (true) {
    sleep(1);
  }
}