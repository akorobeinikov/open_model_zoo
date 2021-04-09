/*
// Copyright (C) 2021 Intel Corporation
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writingb  software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
*/

#pragma once
#include "image_model.h"

class ImageProcessingModel : public ImageModel {
public:
    /// Constructor
    /// @param modelFileName name of model to load
    /// @param viewInfo size of view of the result of model
    /// @param useAutoResize - if true, image will be resized by IE.
    /// Otherwise, image will be preprocessed and resized using OpenCV routines.
    ImageProcessingModel(const std::string& modelFileName, bool useAutoResize);

    cv::Size getViewSize();
protected:

    int outHeight = 0;
    int outWidth = 0;
    int outChannels = 0;

    cv::Size viewSize = cv::Size(0, 0);
};
