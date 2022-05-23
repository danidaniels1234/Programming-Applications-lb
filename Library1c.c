#include "Header1c.h"

////////////////////////////////////////////////////////////
//  
//  Function name:  Add
//  Descriprion:    Used to perform Addition of 2 numbers
//  Input:          Float,Float
//  Output:         Float
//  Date:           12/04/2022
//  Author:         Harshal Ramdas Shinde
//  
////////////////////////////////////////////////////////////

float Add(float fNo1,float fNo2)
{
    float fAns = 0.0;
    
    if(fNo1<0)
    {
        fNo1 = -(fNo1);
    }
    
    if(fNo2<0)
    {
        fNo2 = -(fNo2);
    }
    
    fAns = fNo1 + fNo2;
    
    return fAns;    
}
