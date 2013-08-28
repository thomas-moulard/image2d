#ifndef CIRCULATOR1D_HH_
# define CIRCULATOR1D_HH_
# include "image1d.hh"

template<typename Data>
class Image1d;

template<typename Data>
class Circulator1d
{
public:
  Circulator1d (Image1d<Data>& ima);
  ~Circulator1d ();

  void begin ();
  void next ();
  void end ();

  bool operator== (Circulator1d<Data>& c);
  bool operator!= (Circulator1d<Data>& c);

  unsigned pos_get () const { return this->pos_; }
private:
  Image1d<Data> ima_;
  unsigned pos_;
};

# include "circulator1d.hxx"
#endif /* !CIRCULATOR1D_HH_ */
