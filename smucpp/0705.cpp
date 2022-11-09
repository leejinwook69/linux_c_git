#include <iostream>
using namespace std;

class Color {
    int red, green, blue;
public:
    Color() {red = green = blue = 0;}
    Color(int r, int g, int b) {red = r; green = g; blue = b;}
    void setColor(int r, int g, int b) {red = r; green = g; blue = b;}
    void show() {cout << red << ' ' << green << ' ' << blue << endl;}

    Color operator + (Color c);
    bool operator == (Color c);

};

Color Color::operator + (Color c)
{
    Color a;
    a.red = this->red + c.red;
    a.green = this->green + c.green;
    a.blue = this->blue + c.blue;

    return a;
}

bool Color::operator == (Color c)
{
    bool tf;
    this->red==c.red && this->green==c.green && this->blue==c.blue ? tf = true : tf = false;

    return tf;
}
int main(void)
{
  Color red(255, 0, 0), blue(0,0,255), c;
  c = red+blue;
  c.show();

  Color fuchsia(255, 0, 255);

  if(c == fuchsia)
  {
      cout << "is purple"<<endl;
  } else
  {
      cout << "not a purple"<<endl;
  }
}
