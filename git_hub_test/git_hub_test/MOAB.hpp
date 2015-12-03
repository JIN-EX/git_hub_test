//
//  MOAB.hpp
//  git_hub_test
//
//  Created by jin on 2015. 12. 3..
//  Copyright © 2015년 test. All rights reserved.
//

#ifndef MOAB_hpp
#define MOAB_hpp

#include <stdio.h>
#include <iostream>

class MOAB{
    
public:
    
    MOAB();
    virtual ~MOAB();

private:

    void FUNC_MOAB();
    virtual void FUNC_MOAB_Virtual();
    virtual void FUNC_MOAB_Virtual_Zero() = 0;
    
protected:
    
    void FUNC_MOAB_PROTECTED();
    virtual void FUNC_MOAB_Virtual_PROTECTED();
    virtual void FUNC_MOAB_Virtual_Zero_PROTECTED() = 0;
    
};

#endif /* MOAB_hpp */
