#ifndef IMAGE1D_HH_
# define IMAGE1D_HH_
# include "circulator1d.hh"

template<typename Data>
class Circulator1d;

template<typename Data>
class Image1d
{
public:
  typedef Data data;
  typedef Circulator1d<Data> circulator;

  Image1d (unsigned l);
  ~Image1d ();

  Circulator1d<Data>* create_circulator ();

  Data& operator[] (Circulator1d<Data>& c);
private:
  Data* d_;
  unsigned l_;
};

# include "image1d.hxx"
#endif /* !IMAGE1D_HH_ */
