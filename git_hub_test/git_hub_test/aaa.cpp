//
//  aaa.cpp
//  git_hub_test
//
//  Created by jin on 2015. 12. 3..
//  Copyright © 2015년 test. All rights reserved.
//

#include "aaa.hpp"

aaa::aaa()
{
    printf("%s\n", __PRETTY_FUNCTION__);
}

aaa::~aaa()
{
    printf("%s\n", __PRETTY_FUNCTION__);
}

void aaa::func_A_1()
{
    printf("%s\n", __PRETTY_FUNCTION__);
}

void aaa::FUNC_MOAB_Virtual_Zero(){
    printf("%s\n", __PRETTY_FUNCTION__);
}

void aaa::FUNC_MOAB_Virtual_Zero_PROTECTED(){
    printf("%s\n", __PRETTY_FUNCTION__);
}