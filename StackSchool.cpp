#include <iostream>
using namespace std;
#ifndef TSTACK1_H
#define TSTACK1_H

template< class T >
class Stack
{
public:
    Stack( int = 10 );    // подразбиращ се конструктор  (размер на стека)
    ~Stack()
    {
        delete [] stackPtr;    // деструктор
    }
    bool push( const T& ); // push функция
    bool pop( T& );        // pop функция
private:
    int size;             // брой на елементите в стека
    int top;           //   местоположение на top елемента (върха на стека)
    T *stackPtr;          // указател към стека
    // utility
    bool isEmpty() const
    {
        return top == -1;    //Когато стекът е празен
    }
    bool isFull() const
    {
        return top == size - 1;    // Когато стекът е пълен
    }
};
//Дефиниции на член-функциите
// Конструктор с подразбиращ се размер 10
template< class T >
Stack< T >::Stack( int s )
{
    size = s > 0 ? s : 10;  //Ако s > 0, size = s, в противен случай size =10
   // if (s > 0) {
    //    size = s;
   // }
   // else {
    //    size = 10;
    //}
    top = -1;               // В начално положение стекът е празен
    stackPtr = new T[ size ]; // заделя се място за елементите на стека
}
template< class T >
bool Stack< T >::push( const T &pushValue )
{
    if ( !isFull() )
    {
        stackPtr[ ++top ] = pushValue; // place item in Stack
        return true;  // push successful
    }
    return false;     // push unsuccessful
}
// Pop an element off the stack
template< class T >
bool Stack< T >::pop( T &popValue )

{

    if ( !isEmpty() )
    {

        popValue = stackPtr[ top-- ];  // remove item from

        return true;  // pop successful

    }

    return false;     // pop unsuccessful

}

#endif
int main()
{
    //Специализация на клас Stack за реални числа
    Stack< double > doubleStack( 5 );
    double f = 1.5;
    cout << "Pushing elements onto doubleStack\n";
// Когато е възможно добавянето на данни в стека (не е пълен) връща true
    while ( doubleStack.push( f ) )
    {
        cout << f << ' ';
        f += 1.0;
    }
    cout << "\nStack is full. Cannot push " << f << "\n\nPopping elements from doubleStack\n";
    // Когато е възможно извеждането на данни от стека (не е празен )връща true
    while ( doubleStack.pop( f ) )
        cout << f << ' ';
    cout << "\nStack is empty. Cannot pop\n";
    //Специализация на клас Stack за цели числа
    Stack< int > intStack;
    int i = 1.6;
    cout << "\nPushing elements onto intStack\n";
// Когато е възможно добавянето на дани (не е пълен) в стека връща true
    while ( intStack.push( i ) )
    {
        cout << i << ' ';
        ++i;
    }
    cout << "\nStack is full. Cannot push " << i << "\n\nPopping elements from intStack\n";
    // Когато е възможно извеждането на данни от стека (не е празен )връща true
    while ( intStack.pop( i ) )
        cout << i << ' ';
    cout << "\nStack is empty. Cannot pop\n";


     Stack< string > stStack;
    string s ="1";
    cout << "\nPushing elements onto intStack\n";
// Когато е възможно добавянето на дани (не е пълен) в стека връща true
    while ( stStack.push(1) )
    {
        cout << s << ' ';
    }
    cout << "\nStack is full. Cannot push " << i << "\n\nPopping elements from intStack\n";
    // Когато е възможно извеждането на данни от стека (не е празен )връща true
    while ( stStack.pop( s ) ) {
        cout << i << ' ';
    }
    cout << "\nStack is empty. Cannot pop\n";
    return 0;
}
