﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/ChannelBan.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Chime
{
namespace Model
{
  class DescribeChannelBanResult
  {
  public:
    AWS_CHIME_API DescribeChannelBanResult();
    AWS_CHIME_API DescribeChannelBanResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CHIME_API DescribeChannelBanResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The details of the ban.</p>
     */
    inline const ChannelBan& GetChannelBan() const{ return m_channelBan; }

    /**
     * <p>The details of the ban.</p>
     */
    inline void SetChannelBan(const ChannelBan& value) { m_channelBan = value; }

    /**
     * <p>The details of the ban.</p>
     */
    inline void SetChannelBan(ChannelBan&& value) { m_channelBan = std::move(value); }

    /**
     * <p>The details of the ban.</p>
     */
    inline DescribeChannelBanResult& WithChannelBan(const ChannelBan& value) { SetChannelBan(value); return *this;}

    /**
     * <p>The details of the ban.</p>
     */
    inline DescribeChannelBanResult& WithChannelBan(ChannelBan&& value) { SetChannelBan(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeChannelBanResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeChannelBanResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeChannelBanResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ChannelBan m_channelBan;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
