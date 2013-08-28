#ifndef IMAGE1D_HXX_
# define IMAGE1D_HXX_

template<typename Data>
Image1d<Data>::Image1d (unsigned l) :
  l_ (l)
{
  this->d_ = new Data[l];
}

template<typename Data>
Image1d<Data>::~Image1d ()
{
  delete[] this->d_;
}

template<typename Data>
Circulator<Data>*
Image1d<Data>::create_circulator ()
{
  return new Circulator1d<Data>(*this);
}

template <typename Data>
Data&
Image1d<Data>::operator[] (Circulator<Data>& c)
{
  Circulator1d<Data> *c_1d = dynamic_cast<Circulator1d<Data>*> (&c);
  return this->d_[c_1d->pos_get ()];
}

#endif /* !IMAGE1D_HXX_ */
