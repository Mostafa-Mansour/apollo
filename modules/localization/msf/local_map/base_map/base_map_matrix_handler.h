/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/
#pragma once

#include "modules/localization/msf/local_map/base_map/base_map_matrix.h"

namespace apollo {
namespace localization {
namespace msf {

class BaseMapMatrixHandler {
 public:
  BaseMapMatrixHandler() {}
  virtual ~BaseMapMatrixHandler() {}
  /**@brief Load the map cell from a binary chunk.
   * @param <return> The size read (the real size of object).
   */
  virtual size_t LoadBinary(const unsigned char* buf,
                                       BaseMapMatrix* matrix) = 0;
  /**@brief Create the binary. Serialization of the object.
   * @param <buf, buf_size> The buffer and its size.
   * @param <return> The required or the used size of is returned.
   */
  virtual size_t CreateBinary(const BaseMapMatrix* matrix,
                                         unsigned char* buf,
                                         unsigned int buf_size) = 0;
  /**@brief Get the binary size of the object. */
  virtual size_t GetBinarySize(const BaseMapMatrix* matrix) = 0;
};

}  // namespace msf
}  // namespace localization
}  // namespace apollo
