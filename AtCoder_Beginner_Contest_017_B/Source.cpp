/*
問題文
高橋君は、ある日不思議な生物を見た。
その生物は choku 語という言語を用いていることがわかった。
文字列 S が以下の条件を満たしているときに S は choku 語であると定義する。
文字列 S が空文字列であるとき。
文字列 S が、choku 語である文字列 T の末尾に ch をつけた文字列であるとき。
文字列 S が、choku 語である文字列 T の末尾に o をつけた文字列であるとき。
文字列 S が、choku 語である文字列 T の末尾に k をつけた文字列であるとき。
文字列 S が、choku 語である文字列 T の末尾に u をつけた文字列であるとき。
choku 語の理解を深めるため、与えられた文字列が choku 語であるかを判定するプログラムを作成することにした。
*/

#include<iostream>
#include<array>
#include<string>

int main() {
	std::string str;
	std::array < std::string, 3> ar{ "o","k","u" };
	std::cin >> str;
	bool flag;

	int i = 0;
	while (str.size() > i) {
		flag = true;
		std::string sub = str.substr(i, 2);
		if (sub == "ch") {
			i = i + 2;
			continue;
		}
		std::string sub_1 = sub.substr(0, 1);
		for (int j = 0; j < ar.size(); j++) {
			if (sub_1 == ar[j]) {
				i++;
				flag = false;
			}
		}
		if (flag) {
			std::cout << "NO" << std::endl;
			exit(0);
		}
	}

	std::cout << "YES" << std::endl;

	return 0;
}