﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/glacier/model/OutputSerialization.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Glacier
{
namespace Model
{

OutputSerialization::OutputSerialization() : 
    m_csvHasBeenSet(false)
{
}

OutputSerialization::OutputSerialization(JsonView jsonValue) : 
    m_csvHasBeenSet(false)
{
  *this = jsonValue;
}

OutputSerialization& OutputSerialization::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("csv"))
  {
    m_csv = jsonValue.GetObject("csv");

    m_csvHasBeenSet = true;
  }

  return *this;
}

JsonValue OutputSerialization::Jsonize() const
{
  JsonValue payload;

  if(m_csvHasBeenSet)
  {
   payload.WithObject("csv", m_csv.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Glacier
} // namespace Aws
