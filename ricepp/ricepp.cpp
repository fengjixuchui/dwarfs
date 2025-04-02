/* vim:set ts=2 sw=2 sts=2 et: */
/**
 * \author     Marcus Holland-Moritz (github@mhxnet.de)
 * \copyright  Copyright (c) Marcus Holland-Moritz
 *
 * This file is part of ricepp.
 *
 * ricepp is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * ricepp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ricepp.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <ricepp/create_decoder.h>
#include <ricepp/create_encoder.h>

#include "ricepp_cpuspecific.h"

namespace ricepp {

template <>
std::unique_ptr<encoder_interface<uint16_t>>
create_encoder<uint16_t>(codec_config const& config) {
  return detail::create_codec_cpuspecific<
      encoder_interface, detail::encoder_cpuspecific_, uint16_t>(config);
}

template <>
std::unique_ptr<decoder_interface<uint16_t>>
create_decoder<uint16_t>(codec_config const& config) {
  return detail::create_codec_cpuspecific<
      decoder_interface, detail::decoder_cpuspecific_, uint16_t>(config);
}

} // namespace ricepp
