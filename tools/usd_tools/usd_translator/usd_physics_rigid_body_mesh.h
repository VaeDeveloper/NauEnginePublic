// Copyright 2024 N-GINN LLC. All rights reserved.
// Use of this source code is governed by a BSD-3 Clause license that can be found in the LICENSE file.

#pragma once

#include "nau/math/math.h"
#include "usd_physics_adapter.h"

namespace UsdTranslator
{
    class PhysicsRigidMeshAdapter : public PhysicsRigidBodyAdapter
    {
    public:
        PhysicsRigidMeshAdapter(PXR_NS::UsdPrim prim);

        std::string_view getType() const override;

    protected:
        void fillRigidBodyComponent(nau::physics::RigidBodyComponent& component) const override;
    };
}  // namespace UsdTranslator