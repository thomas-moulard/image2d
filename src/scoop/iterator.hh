#ifndef ITERATOR_HH_
# define ITERATOR_HH_

template<typename E, typename Data>
class Iterator : public Any<E, Data>
{
public:
  typedef vtype(E, image)::vtype(E, value) dimage_t;

  Iterator ();
  ~Iterator ();

  void operator++ ();
  dimage_t& operator* ();
};

template<typename E, typename Data>
struct traits <Iterator<E, Data> >
{
  typedef undefined image_vt;
};

# include "iterator.hxx"
#endif /* !ITERATOR_HH_ */
