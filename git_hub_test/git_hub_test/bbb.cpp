//
//  bbb.cpp
//  git_hub_test
//
//  Created by jin on 2015. 12. 3..
//  Copyright © 2015년 test. All rights reserved.
//

#include "bbb.hpp"


bbb::bbb(){
    printf("%s\n",__PRETTY_FUNCTION__);
}

bbb::~bbb(){
    printf("%s\n",__PRETTY_FUNCTION__);
}

void bbb::func_B(){
    printf("%s\n",__PRETTY_FUNCTION__);
}