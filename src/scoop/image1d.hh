#ifndef IMAGE1D_HH_
# define IMAGE1D_HH_
# include "image.hh"

template<typename E, typename Data>
class Image;


template<typename E, typename Data>
class Image1d : public Image<Image1d<E, Data>, Data>
{
public:
  Image1d ();
  ~Image1d ();

  vtype(E, iterator) impl_first ();
  vtype(E, iterator) impl_last ();
private:
  unsigned l_;
  Data* d_;
};


template<typename E, typename Data>
class Iterator1d;

template<typename E, typename Data>
struct traits <Image1d<E, Data> >
{
  typedef Iterator1d<E, Data> iterator_vt;
  typedef Data value_vt;
};

# include "image.hxx"
#endif /* !IMAGE1D_HH_ */
