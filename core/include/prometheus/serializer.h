#pragma once

#include <iosfwd>
#include <string>
#include <vector>

#include "prometheus/detail/core_export.h"

namespace prometheus {

struct MetricFamily;

class PROMETHEUS_CPP_CORE_EXPORT Serializer {
 public:
  virtual ~Serializer() = default;
  virtual std::string Serialize(const std::vector<MetricFamily>&) const;
  virtual void Serialize(std::ostream& out,
                         const std::vector<MetricFamily>& metrics) const = 0;
};

}  // namespace prometheus
