// Copyright (c) by respective owners including Yahoo!, Microsoft, and
// individual contributors. All rights reserved. Released under a BSD (revised)
// license as described in the file LICENSE.
#pragma once

#include "vw/core/v_array.h"
#include "vw/core/vw_fwd.h"

namespace VW
{
namespace reductions
{
VW::LEARNER::base_learner* mwt_setup(VW::setup_base_i& stack_builder);
}
}  // namespace VW

// TODO: move this somewhere else
namespace MWT
{
void print_scalars(
    VW::io::writer* f, const VW::v_array<float>& scalars, const VW::v_array<char>& tag, VW::io::logger& logger);
}  // namespace MWT
