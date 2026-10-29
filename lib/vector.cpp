

class Vector2D{
    private:
        float x;
        float y;
    public:
        Vector2D(float x, float y) : x(x), y(y) {}
        
        float getX() const { return x; }
        float getY() const { return y; }

        void setX(float newX) { x = newX; }
        void setY(float newY) { y = newY; }

        Vector2D operator+(const Vector2D& other) const {
            return Vector2D(x + other.x, y + other.y);
        }

        Vector2D operator-(const Vector2D& other) const {
            return Vector2D(x - other.x, y - other.y);
        }

        Vector2D operator*(float scalar) const {
            return Vector2D(x * scalar, y * scalar);
        }

        Vector2D operator/(float scalar) const {
            return Vector2D(x / scalar, y / scalar);
        }
};