#ifndef IMAGE_HH_
# define IMAGE_HH_
# include "any.hh"

template<typename E>
class Any;

template<typename E, typename Data>
class Image : public Any<E>
{
public:
  Image ();
  ~Image ();

  vtype(E, iterator) first ();
  vtype(E, iterator) last ();
};


template<typename E, typename Data>
struct traits <Image<E, Data> >
{
  typedef undefined iterator_vt;
  typedef undefined value_vt;
};

# include "image.hxx"
#endif /* !IMAGE_HH_ */
