//===- ReduceMetadata.h - Specialized Delta Pass ----------------*- C++ -*-===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements two functions used by the Generic Delta Debugging
// Algorithm, which are used to reduce Metadata nodes.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_TOOLS_LLVM_REDUCE_DELTAS_REDUCEMETADATA_H
#define LLVM_TOOLS_LLVM_REDUCE_DELTAS_REDUCEMETADATA_H

#include "Delta.h"

namespace llvm {
void reduceMetadataDeltaPass(Oracle &O, ReducerWorkItem &WorkItem);
void reduceNamedMetadataDeltaPass(Oracle &O, ReducerWorkItem &WorkItem);
} // namespace llvm

#endif
