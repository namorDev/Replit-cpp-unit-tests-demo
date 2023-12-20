#pragma once

class IAdc
{
public:
IAdc(){}
virtual ~IAdc(){}

virtual int readAdcValue() = 0;
};