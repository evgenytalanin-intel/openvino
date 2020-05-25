// Copyright (C) 2020 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include <vector>
#include <string>

#include "functional_test_utils/skip_tests_config.hpp"

std::vector<std::string> disabledTestPatterns() {
    #if defined(_WIN32) || defined(WIN32)
        return {
                // Issue 26268
                ".*ConcatLayerTest.*axis=0.*",
                // Not supported activation types
                ".*ActivationLayerTest\\.CompareWithRefs/Tanh.*netPRC=FP32.*",
                ".*ActivationLayerTest\\.CompareWithRefs/Exp.*netPRC=FP32.*",
                ".*ActivationLayerTest\\.CompareWithRefs/Log.*netPRC=FP32.*",
                ".*ActivationLayerTest\\.CompareWithRefs/Sigmoid.*netPRC=FP32.*",
                ".*ActivationLayerTest\\.CompareWithRefs/Relu.*netPRC=FP32.*",
                // Issue 31197
                ".*myriadLayersTestsProposal_smoke\\.Caffe.*",
                ".*myriadLayersTestsProposal_smoke\\.CaffeNoClipBeforeNms.*",
                ".*myriadLayersTestsProposal_smoke\\.CaffeClipAfterNms.*",
                ".*myriadLayersTestsProposal_smoke\\.CaffeNormalizedOutput.*",
                ".*myriadLayersTestsProposal_smoke\\.TensorFlow.*",
                ".*IEClassBasicTestP\\.smoke_registerPluginsXMLUnicodePath/0.*",
                ".*myriadCTCDecoderLayerTests_smoke\\.CTCGreedyDecoder/0.*",
                ".*myriadCTCDecoderLayerTests_smoke\\.CTCGreedyDecoder/1.*",
                ".*myriadCTCDecoderLayerTests_smoke\\.CTCGreedyDecoder/2.*",
                ".*myriadCTCDecoderLayerTests_smoke\\.CTCGreedyDecoder/3.*"
        };
    #else
        return {
                // Issue 26268
                ".*ConcatLayerTest.*axis=0.*",
                // Not supported activation types
                ".*ActivationLayerTest\\.CompareWithRefs/Tanh.*netPRC=FP32.*",
                ".*ActivationLayerTest\\.CompareWithRefs/Exp.*netPRC=FP32.*",
                ".*ActivationLayerTest\\.CompareWithRefs/Log.*netPRC=FP32.*",
                ".*ActivationLayerTest\\.CompareWithRefs/Sigmoid.*netPRC=FP32.*",
                ".*ActivationLayerTest\\.CompareWithRefs/Relu.*netPRC=FP32.*",
        };
    #endif
}
