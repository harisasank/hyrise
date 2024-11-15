#pragma once

#include <memory>
#include <unordered_map>

#include "join_graph_statistics_cache.hpp"

namespace hyrise {

// See `CardinalityEstimator::guarantee_join_graph()/guarantee_bottom_up_construction()`
class CardinalityEstimationCache {
 public:
  std::optional<JoinGraphStatisticsCache> join_graph_statistics_cache;

  using StatisticsByLQP = std::unordered_map<std::shared_ptr<const AbstractLQPNode>, std::shared_ptr<TableStatistics>>;
  std::optional<StatisticsByLQP> statistics_by_lqp;
};

}  // namespace hyrise
