/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_RTC_MODEL_DESCRIBEMPULAYOUTLISTRESULT_H_
#define ALIBABACLOUD_RTC_MODEL_DESCRIBEMPULAYOUTLISTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/rtc/RtcExport.h>

namespace AlibabaCloud
{
	namespace Rtc
	{
		namespace Model
		{
			class ALIBABACLOUD_RTC_EXPORT DescribeMPULayoutListResult : public ServiceResult
			{
			public:


				DescribeMPULayoutListResult();
				explicit DescribeMPULayoutListResult(const std::string &payload);
				~DescribeMPULayoutListResult();
				std::vector<std::string> getLayoutIds()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<std::string> layoutIds_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_RTC_MODEL_DESCRIBEMPULAYOUTLISTRESULT_H_