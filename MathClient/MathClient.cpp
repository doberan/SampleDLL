// MathClient.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
#include <iostream>
#include "MathLibrary.h"

// フィボナッチ数列のライブラリのテストコード
int main()
{
	std::cout << "Hello World!\n";
	fibonacci_init(1, 1);
	do {
		std::cout << fibonacci_index() << ": "
			<< fibonacci_current() << std::endl;
	} while (fibonacci_next());

	std::cout << fibonacci_index() + 1 <<
		"Fibonacci sequence values fit in an" <<
		"unsigned 64-bit integer." << std::endl;
}