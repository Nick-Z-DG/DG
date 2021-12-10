# Copyright 2005-2016 Intel Corporation.  All Rights Reserved.
#
# The source code contained or described herein and all documents related
# to the source code ("Material") are owned by Intel Corporation or its
# suppliers or licensors.  Title to the Material remains with Intel
# Corporation or its suppliers and licensors.  The Material is protected
# by worldwide copyright laws and treaty provisions.  No part of the
# Material may be used, copied, reproduced, modified, published, uploaded,
# posted, transmitted, distributed, or disclosed in any way without
# Intel's prior express written permission.
#
# No license under any patent, copyright, trade secret or other
# intellectual property right is granted to or conferred upon you by
# disclosure or delivery of the Materials, either expressly, by
# implication, inducement, estoppel or otherwise.  Any license under such
# intellectual property rights must be express and approved by Intel in
# writing.

all: release test

clean:
	python setup.py clean
	-rm -rf build/ tbb_wrap.* _TBB.* *.pyc TBB.py*

release: TBB.py

TBB.py: tbb.i tbb.src.py setup.py
	python setup.py build_ext -f --inplace

test: TBB.py
	python TBB.py test

install:
	python setup.py install

test-install:
	@echo Testing installed module
	python -m TBB test
