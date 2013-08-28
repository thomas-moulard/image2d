#ifndef ANY_HH_
# define ANY_HH_

struct undefined;

template<typename T>
struct traits
{
};

template<typename E>
class Any
{
public:
  E& exact () { return *(E*)(void*)this; }
  const E& exact() const { return *(E*)(void*)this; }
};

#define vtype(T,V) typename traits<T>::V##_vt
#endif /* !ANY_HH_ */
