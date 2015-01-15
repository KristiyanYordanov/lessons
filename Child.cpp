namespace utils
{
class f
{
private:
    typedef int int_type;
    int_type value;

public:
    // let's assume it doesn't only need .value, but some
    // internal stuff.
    friend f operator*(f const& a, f const& b)
    {
        // name resolution finds names in class-scope.
        // int_type is visible here.
        return f(a.value * b.value);
    }

    friend f operator+(f const& a, f const& b)
    {
        // name resolution finds names in class-scope.
        // int_type is visible here.
        return f(a.value + b.value);
    }

    friend int getVa() const
    {
        return value;
    }

    int getValue() const
    {
        return value;
    }
};
}

int main()
{
    f a, b;
    a.getValue();

    //friend pri predifinirane na operatori
    //friend moje da dostypi private parts
    //friend moje da se izvika bez operatora za dostyp "."
    std::cout << (a + b).getValue(); // valid
}
