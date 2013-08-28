#ifndef CIRCULATOR1D_HH_
# define CIRCULATOR1D_HH_
# include "circulator.hh"
# include "image1d.hh"

template<typename Data>
class Image;

template<typename Data>
class Image1d;


template<typename Data>
class Circulator1d : public Circulator<Data>
{
public:
  Circulator1d (Image1d<Data>& ima);
  Circulator1d (Image1d<Data>& ima, int pos);
  virtual ~Circulator1d ();

  virtual void begin ();
  virtual void next ();
  virtual void end ();

  virtual bool operator== (Circulator<Data>& c);
  virtual bool operator!= (Circulator<Data>& c);

  int pos_get () const { return pos_; }
private:
  Image1d<Data>& ima_;
  int pos_;
};

# include "circulator1d.hxx"
#endif /* !CIRCULATOR1D_HH_ */
