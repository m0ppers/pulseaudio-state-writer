#pragma once

class Emit {
 public:
  Emit(void *aLabel);

 public:
  void emit();

 private:
  void *aLabel;
};