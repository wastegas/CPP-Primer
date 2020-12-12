#ifndef SCREEN_H
#define SCREEN_H


class Screen {
 public:
  Sceen() = default;
  Screen(const size_t& h, const size_t& w)
    : height(h), width(w) {}
 private:
  size_t height = 0;
  size_t width = 0;

};


#endif // SCREEN_H
