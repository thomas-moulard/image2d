#ifndef CIRCULATOR1D_HXX_
# define CIRCULATOR1D_HXX_

template<typename Data>
Circulator1d<Data>::Circulator1d (Image1d<Data>& ima) :
  Circulator<Data> (),
  ima_ (ima),
  pos_ (0)
{
}

template<typename Data>
Circulator1d<Data>::Circulator1d (Image1d<Data>& ima, int pos) :
  Circulator<Data> (ima),
  pos_ (pos)
{
}

template<typename Data>
Circulator1d<Data>::~Circulator1d ()
{
}

template<typename Data>
void
Circulator1d<Data>::begin ()
{
  this->pos_ = 0;
}

template<typename Data>
void
Circulator1d<Data>::next ()
{
  if (this->pos_ != this->ima_.get_length () - 1)
    ++this->pos_;
}

template<typename Data>
void
Circulator1d<Data>::end ()
{
  this->pos_ = this->ima_.get_length () - 1;
}

template<typename Data>
bool
Circulator1d<Data>::operator== (Circulator<Data>& c)
{
  Circulator1d<Data>* c1d = dynamic_cast<Circulator1d<Data>*> (&c);
  return &this->ima_ == &c1d->ima_ && this->pos_ == c1d->pos_;
}

template<typename Data>
bool
Circulator1d<Data>::operator!= (Circulator<Data>& c)
{
  return !operator==(c);
}

#endif /* !CIRCULATOR_HXX_ */
