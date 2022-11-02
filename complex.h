#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <cmath>
class complex
{ 
    private:	
	public:
	float re;
	float im;
	float a,b,c;


   
    complex mutlak(complex b)
	{
		complex c ;
		c.im=sqrt((b.im*b.im)+(b.re*b.re));
		std::cout<<c.im<<std::endl;
		return c;
    }
	complex toplama(complex b)
	{
	complex c;
	c.im= im+b.im;
	c.re=re+b.re;
	return c;
	}
	complex cikar(complex b)
	{
	complex c;
	c.im=im-b.im;
	c.re=re-b.re;
	return c;
	}
	complex carpma(complex b)
	{
	complex c;
	c.im=(im*b.im)+(b.im*re);
	c.re=(re*b.re)-(im*b.im);
	return c;
	}
	complex norm(complex b){
	}
};



#endif
