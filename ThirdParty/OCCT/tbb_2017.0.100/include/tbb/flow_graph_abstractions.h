/*
    Copyright 2005-2016 Intel Corporation.  All Rights Reserved.

    The source code contained or described herein and all documents related
    to the source code ("Material") are owned by Intel Corporation or its
    suppliers or licensors.  Title to the Material remains with Intel
    Corporation or its suppliers and licensors.  The Material is protected
    by worldwide copyright laws and treaty provisions.  No part of the
    Material may be used, copied, reproduced, modified, published, uploaded,
    posted, transmitted, distributed, or disclosed in any way without
    Intel's prior express written permission.

    No license under any patent, copyright, trade secret or other
    intellectual property right is granted to or conferred upon you by
    disclosure or delivery of the Materials, either expressly, by
    implication, inducement, estoppel or otherwise.  Any license under such
    intellectual property rights must be express and approved by Intel in
    writing.
*/

#ifndef __TBB_flow_graph_abstractions_H
#define __TBB_flow_graph_abstractions_H

namespace tbb {
namespace flow {
namespace interface9 {

//! Pure virtual template classes that define interfaces for async communication
class graph_proxy {
public:
    //! Inform a graph that messages may come from outside, to prevent premature graph completion
    virtual void reserve_wait() = 0;

    //! Inform a graph that a previous call to reserve_wait is no longer in effect
    virtual void release_wait() = 0;

    virtual ~graph_proxy() {}
};

template <typename Input>
class receiver_gateway : public graph_proxy {
public:
    //! Type of inputing data into FG.
    typedef Input input_type;

    //! Submit signal from an asynchronous activity to FG.
    virtual bool try_put(const input_type&) = 0;
};

} //interface9

using interface9::graph_proxy;
using interface9::receiver_gateway;

} //flow
} //tbb
#endif
