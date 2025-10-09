/**
 * Copyright Soramitsu Co., 2021-2023
 * Copyright Quadrivium Co., 2023
 * All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

#include <atomic>
#include <thread>

namespace soralog {
  class BusyWaitMutex {
   public:
    void lock() {
      while (flag_.test_and_set()) {
        std::this_thread::yield();
      }
    }

    void unlock() {
      flag_.clear();
    }

   private:
    std::atomic_flag flag_ = false;
  };
}  // namespace soralog
