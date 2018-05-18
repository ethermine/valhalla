#ifndef VALHALLA_MJOLNIR_GRAPHENHANCER_H
#define VALHALLA_MJOLNIR_GRAPHENHANCER_H

#include <boost/property_tree/ptree.hpp>
#include <cstdint>

namespace valhalla {
namespace mjolnir {

/**
 * Class used to enhance graph tile information at the local level.
 */
class GraphEnhancer {
public:
  /**
   * Enhance the local level graph tile information.
   * @param pt          property tree containing the hierarchy configuration
   * @param access_file where to store the nodes so they are not in memory
   */
  static void Enhance(const boost::property_tree::ptree& pt, const std::string& access_file);
};

} // namespace mjolnir
} // namespace valhalla

#endif // VALHALLA_MJOLNIR_GRAPHENHANCER_H
