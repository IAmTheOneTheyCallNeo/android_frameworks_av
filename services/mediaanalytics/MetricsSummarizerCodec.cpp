/*
 * Copyright (C) 2017 The Android Open Source Project
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

#define LOG_TAG "MetricsSummarizerCodec"
#include <utils/Log.h>

#include <stdint.h>
#include <inttypes.h>

#include <utils/threads.h>
#include <utils/Errors.h>
#include <utils/KeyedVector.h>
#include <utils/String8.h>
#include <utils/List.h>

#include <media/IMediaAnalyticsService.h>

#include "MetricsSummarizer.h"
#include "MetricsSummarizerCodec.h"




namespace android {

MetricsSummarizerCodec::MetricsSummarizerCodec(const char *key)
    : MetricsSummarizer(key)
{
    ALOGV("MetricsSummarizerCodec::MetricsSummarizerCodec");
}

} // namespace android
