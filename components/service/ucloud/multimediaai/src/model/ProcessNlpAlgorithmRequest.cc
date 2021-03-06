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

#include <alibabacloud/multimediaai/model/ProcessNlpAlgorithmRequest.h>

using AlibabaCloud::Multimediaai::Model::ProcessNlpAlgorithmRequest;

ProcessNlpAlgorithmRequest::ProcessNlpAlgorithmRequest() :
	RpcServiceRequest("multimediaai", "2019-08-10", "ProcessNlpAlgorithm")
{
	setMethod(HttpRequest::Method::Post);
}

ProcessNlpAlgorithmRequest::~ProcessNlpAlgorithmRequest()
{}

std::string ProcessNlpAlgorithmRequest::getData()const
{
	return data_;
}

void ProcessNlpAlgorithmRequest::setData(const std::string& data)
{
	data_ = data;
	setBodyParameter("Data", data);
}

std::string ProcessNlpAlgorithmRequest::getAppKey()const
{
	return appKey_;
}

void ProcessNlpAlgorithmRequest::setAppKey(const std::string& appKey)
{
	appKey_ = appKey;
	setBodyParameter("AppKey", appKey);
}

