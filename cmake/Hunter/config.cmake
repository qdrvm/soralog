#
# Copyright Soramitsu Co., 2021-2023
# Copyright Quadrivium Co., 2023
# All Rights Reserved
# SPDX-License-Identifier: Apache-2.0
#

## Template for add custom hunter config
#hunter_config(
#    package-name
#    VERSION 0.0.0-package-version
#    CMAKE_ARGS "CMAKE_VARIABLE=value"
#)

hunter_config(
    fmt
    URL  https://github.com/fmtlib/fmt/archive/refs/tags/11.1.4.tar.gz
    SHA1 045b14fcdc6356eeb2d83feeb1c79e58215517f8
    CMAKE_ARGS
    CMAKE_POSITION_INDEPENDENT_CODE=TRUE
)
