#include "emit.hpp"

#include "pulseaudio.hpp"

Emit::Emit(void *aLabel) : aLabel(aLabel){};

void Emit::emit() {
  waybar::modules::Pulseaudio *pa = static_cast<waybar::modules::Pulseaudio *>(aLabel);
  pa->update();
}