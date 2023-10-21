#pragma once

using namespace std;

class Rect {
    private:
        float x;
        float y;
    public:
        float w;
        float h;
        const float getX() {
            return x;
        }
        void setX(float _x) {
            x = _x;
        }
        const float getY() {
            return y;
        }
        void setY(float _y) {
            y = _y;
        }
        const float getWidth() {
            return w;
        }
        void setWidth(float _w) {
            w = _w;
        }
        const float getHeight() {
            return h;
        }
        void setHeight(float _h) {
            h = _h;
        }
        void resize(float _w, float _h) {
            w = _w;
            h = _h;
        }
        Rect() {
            x = 0;
            y = 0;
            w = 0;
            h = 0;
        }
        Rect(float _x, float _y, float _w, float _h) {
            x = _x;
            y = _y;
            w = _w;
            h = _h;
        }
};

class AppWindow {
    protected:
        Rect* rect;
    public:
        AppWindow() {
            rect = new Rect();
        };
        AppWindow(float _x, float _y, float _w, float _h) {
            rect = new Rect(_x, _y, _w, _h);
        };
        AppWindow(const Rect& r) {
            rect->setX(r.getX());
            rect->setY(r.getX());
            rect->setWidth(r.getWidth());
            rect->setHeight(r.getHeight());
        };
        const Rect& get_rect() {
            return *rect;
        };
        virtual void resize(int _w, int _h) {};
};

class CircleWin : public AppWindow {
    protected:
        float radius;
    public:
        CircleWin() {
            radius = 0;
        };
        CircleWin(float _x, float _y, float _w, float _h) {
            if (_w >= _h) {
                radius = _w/2;
            } else {
                radius = _h/2;
            }
        };
        CircleWin(const Rect& r) {
            if (r.getWidth() >= r.getHeight()) {
                radius = r.getWidth()/2;
            } else {
                radius = r.getHeight()/2;
            }
        };
        void resize(int _w, int _h) {
            rect->resize(_w, _h);
            if (_w >= _h) {
                radius = _w/2;
            } else {
                radius = _h/2;
            };
            cout << "radius: " << radius << endl;
        };
};

class RectWin : public AppWindow {
    protected:
        float area;
    public:
        RectWin() {
            area = 0;
        };
        RectWin(float _x, float _y, float _w, float _h) {
            area = _w * _h;
        };
        RectWin(const Rect& r) {
            area = r.getWidth() * r.getHeight();
        };
        void resize(float _w, float _h) {
            rect->resize(_w, _h);
            area = _w * _h;
            cout << "area: " << area << endl;
        };
};