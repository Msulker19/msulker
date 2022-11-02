#ifndef KESIRLER_H
#define KESIRLER_H
template <typename tip>
class kesirler
{
	public:
	tip pay ;
	tip payda;
	kesirler<tip> topla(kesirler<tip> b){
	kesirler<tip> c;
	c.pay=((pay*b.payda)+(b.pay*payda));
	c.payda=(payda*b.payda);
	return c;
	}
};

#endif
