/*
��蕶
�����N�́A������s�v�c�Ȑ����������B
���̐����� choku ��Ƃ��������p���Ă��邱�Ƃ��킩�����B
������ S ���ȉ��̏����𖞂����Ă���Ƃ��� S �� choku ��ł���ƒ�`����B
������ S ���󕶎���ł���Ƃ��B
������ S ���Achoku ��ł��镶���� T �̖����� ch ������������ł���Ƃ��B
������ S ���Achoku ��ł��镶���� T �̖����� o ������������ł���Ƃ��B
������ S ���Achoku ��ł��镶���� T �̖����� k ������������ł���Ƃ��B
������ S ���Achoku ��ł��镶���� T �̖����� u ������������ł���Ƃ��B
choku ��̗�����[�߂邽�߁A�^����ꂽ������ choku ��ł��邩�𔻒肷��v���O�������쐬���邱�Ƃɂ����B
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