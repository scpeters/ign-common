/*
 * Copyright (C) 2017 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */


#ifndef IGNITION_COMMON_DETAIL_PLUGINLOADER_HH_
#define IGNITION_COMMON_DETAIL_PLUGINLOADER_HH_

#include "ignition/common/PluginLoader.hh"

namespace ignition
{
  namespace common
  {
    template <typename PluginPtrType>
    PluginPtrType PluginLoader::Instantiate(
        const std::string &_pluginName) const
    {
      return PluginPtrType(this->PrivateGetPluginInfo(_pluginName));
    }
  }
}

#endif // IGNITION_COMMON_DETAIL_PLUGINLOADER_HH_