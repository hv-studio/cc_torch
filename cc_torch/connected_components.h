#pragma once

#include <ATen/ATen.h>
#include <vector>

std::vector<at::Tensor> connected_components_labeling_2d(
    const at::Tensor& inputs,
    bool get_counts);
