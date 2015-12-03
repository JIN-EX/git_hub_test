//
//  aaa.hpp
//  git_hub_test
//
//  Created by jin on 2015. 12. 3..
//  Copyright © 2015년 test. All rights reserved.
//

#ifndef aaa_hpp
#define aaa_hpp

#include <stdio.h>
#include <iostream>
#include "MOAB.hpp"

class aaa : public MOAB{
    
public:
    aaa();
    virtual ~aaa();
    
//private:
    
    void func_A_1();
    
    virtual void FUNC_MOAB_Virtual_Zero();
    
    virtual void FUNC_MOAB_Virtual_Zero_PROTECTED();

protected:
    
    
    
};


#endif /* aaa_hpp */
