#ifndef IMAGE1D_HH_
# define IMAGE1D_HH_
# include "image.hh"
# include "circulator.hh"
# include "circulator1d.hh"

template<typename Data>
class Image1d : public Image<Data>
{
public:
  Image1d (unsigned l);
  ~Image1d ();

  virtual Circulator<Data> *create_circulator ();

  virtual Data& operator[] (Circulator<Data>& c);

  unsigned get_length () const { return this->l_; }
protected:
  unsigned l_;
  Data* d_;
};

# include "image1d.hxx"
#endif /* !IMAGE_HH_ */
