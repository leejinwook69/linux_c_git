#include <iostream>
using namespace std;

class Color {
    int red, green, blue;
public:
    Color() {red = green = blue = 0;}
    Color(int r, int g, int b) {red = r; green = g; blue = b;}
    void setColor(int r, int g, int b) {red = r; green = g; blue = b;}
    void show() {cout << red << ' ' << green << ' ' << blue << endl;}

    friend Color operator + (Color b, Color c);
    friend bool operator == (Color b, Color c);

};

Color operator + (Color b, Color c)
{
    Color a;
    a.red = b.red + c.red;
    a.green = b.green + c.green;
    a.blue = b.blue + c.blue;

    return a;
}

bool operator == (Color b, Color c)
{
    bool tf;
    b.red==c.red && b.green==c.green && b.blue==c.blue ? tf = true : tf = false;

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
