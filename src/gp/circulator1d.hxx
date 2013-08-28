#ifndef CIRCULATOR1D_HXX_
# define CIRCULATOR1D_HXX_

template<typename Data>
Circulator1d<Data>::Circulator1d (Image1d<Data>& ima) :
  ima_ (ima),
  pos_ (0)
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
  if (this->pos_ != this->ima_.length_get () - 1)
    ++this->pos_;
}

template<typename Data>
void
Circulator1d<Data>::end ()
{
  this->pos_ = this->ima_.length_get () - 1;
}

template<typename Data>
bool
Circulator1d<Data>::operator== (Circulator1d<Data>& c)
{
  return &c.ima_ == &this->ima_ && c.pos_ == this->pos_;
}

template<typename Data>
bool
Circulator1d<Data>::operator!= (Circulator1d<Data>& c)
{
  return !operator== (c);
}

#endif /* !CIRCULATOR1D_HXX_ */
