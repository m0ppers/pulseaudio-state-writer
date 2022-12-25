#pragma once

#include "emit.hpp"
#include "json/json.h"

class ALabel {
 public:
  ALabel(const Json::Value &config, const std::string &name, const std::string &id,
         const std::string &format);
  virtual ~ALabel() = default;
  virtual auto update() -> void = 0;
  virtual std::string getIcon(uint16_t, const std::vector<std::string> &alts, uint16_t max = 0);

 protected:
  Json::Value config_;
  std::string format_;
  Emit dp;
  bool alt_ = false;
};