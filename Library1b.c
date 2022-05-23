//////////////////////////////////////////////////////////
//  
//  Function name:  Addition
//  Descriprion:    Used to perform 2 numbers
//  Input:          Integer,Integer
//  Output:         Integer
//  Date:           12/04/2022
//  Author:         Harshal Ramdas Shinde
//  
//////////////////////////////////////////////////////////

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
