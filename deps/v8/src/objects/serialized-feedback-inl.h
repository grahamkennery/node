// Copyright 2020 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_OBJECTS_SERIALIZED_FEEDBACK_INL_H_
#define V8_OBJECTS_SERIALIZED_FEEDBACK_INL_H_

#include "src/objects/fixed-array-inl.h"
#include "src/objects/serialized-feedback.h"

// Has to be the last include (doesn't have include guards):
#include "src/objects/object-macros.h"

namespace v8 {
namespace internal {

SerializedFeedback::SerializedFeedback(Address ptr) : ByteArray(ptr) {}

CAST_ACCESSOR(SerializedFeedback)

}  // namespace internal
}  // namespace v8

#include "src/objects/object-macros-undef.h"

#endif  // V8_OBJECTS_SERIALIZED_FEEDBACK_INL_H_
