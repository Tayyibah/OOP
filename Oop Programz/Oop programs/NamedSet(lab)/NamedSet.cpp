#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
#include "namedSet.h"
NamedSet::NamedSet(char *str,int cap):set(cap),name(str)
{	
}
NamedSet::~NamedSet()
{
}
void NamedSet::insert(int elem)
{
	set.insert(elem);
}
void NamedSet:: remove( int elem)
{
	set.remove(elem);
}
void NamedSet:: print()
{
	name.display();
	set.print();
}
int NamedSet:: getCardinality()
{
	return set.getCardinality();
}
int NamedSet:: isMember ( int val )
{
	return set.isMember (val );
}	
int NamedSet:: isSubset(NamedSet & s2)
{
	return set.isSubset(s2.set);

}
void NamedSet:: resize(int newcapacity)
{
	set.resize(newcapacity);
}
NamedSet::NamedSet(const NamedSet & ref):set(ref.set),name(ref.name)
{
}
NamedSet NamedSet:: calcUnion( NamedSet & s2)
{
	NamedSet ns("union");
	ns.set=set.calcUnion(s2.set);
	return ns;
}
NamedSet NamedSet:: calcIntersection( NamedSet & s2)
{
	NamedSet ns("Intersect");
	ns.set=set.calcIntersection(s2.set);
	return ns;
}
NamedSet NamedSet:: calcDifference( NamedSet & s2)
{
	NamedSet ns("Difference");
	ns.set=set.calcDifference(s2.set);
	return ns;
}
NamedSet NamedSet:: calcSymmetricDifference ( NamedSet & s2 )
{
	NamedSet ns("SymmetricDifference");
	ns.set=set.calcSymmetricDifference(s2.set);
	return ns;
}
NamedSet & NamedSet:: operator = (const NamedSet & ref)
{
	set=ref.set;
	name=ref.name;
	return *this;
}
