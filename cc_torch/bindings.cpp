#include <torch/extension.h>

#include "connected_components.h"

PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
  m.def(
      "cc_2d",
      &connected_components_labeling_2d,
      "connected_components_labeling_2d");
}
