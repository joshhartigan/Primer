// EXERCISE 2.1:
//     What are the differences between `int`, `long`, `long long`, and `short`?
//                              between a signed and unsigned type?
//                              between a `float` and a `double`?

int i; // `int` is a basic integer (non-fractional number) type, guaranteed to
       // be at least 16 bits - however on 32bit or 64bit systems, `int` will
       // usually have a size of at least 32 bits.

long l; // long integer, guaranteed at least 32 bits.
long long ll; // long-long, 'very' long integer, guaranteed at least 64 bits.

short s; // a short integer of 16 bits, optimized for space / memory efficiency

signed int si;   // variables are signed by default, if neither `signed` nor
unsigned int ui; // `unsigned` is specified. A signed value can be positive or
                // negative, e.g. it can be shown with a negative (-) sign if it
                // is negative, or no sign if it is positive. Unsigned values
                // can only represent positive values, but they take up less
                // space.

float f; // variables of the `float` type can carry decimal places to 6
         // significant digits. `float` is usually a 32 bit data type.

double d; // `double` is the double-precision floating point type, that can
          // carry 10 significant digits - usually 64 bits in size.

long double ld; // The 'extended-precision' floating point type. Usually 80 bits
                // in size, but with the same number of significant digits (10)
                // as the normal `double` type.

// EXERCISE 2.3: (unfinished)
//     What output will the following code produce?
//
//         unsigned u = 10, u2 = 42;
//         std::cout << u2 -u << std::endl;
//         std::cout << u - u2 << std::endl;
//
//         int i = 10, i2 = 42;
//         std::cout << i2 - i << std::endl;
//         std::cout << i - i2 << std::endl;
