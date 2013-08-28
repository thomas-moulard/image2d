#ifndef IMAGE_HH_
# define IMAGE_HH_
# include "circulator.hh"

template<typename Data>
class Circulator;

template<typename Data>
class Image
{
public:
  Image () {}
  virtual ~Image () {}

  virtual Circulator<Data> *create_circulator () = 0;
  virtual Data& operator[] (Circulator<Data>& c) = 0;
};

#endif /* !IMAGE_HH_ */
