//繰り返し文はwhile(){}以外に、for文があります。

//for (初期化�@; 条件式�A; 代入文�B) { 繰り返したい処理�C } という風に書きます。�@〜�Cは空文字でも構いません。
//�@ -> {�A -> �B -> �C}で繰り返す -> �Aが偽になると（�B->�Cをせずに）ループを抜ける
//という感じ
//�Aが空の場合, 無限ループになります.

//これは0〜9を出力するプログラムです。

#include <iostream>
using namespace std;

int main() {
	int i;
	
	for (i = 0; i < 10; i++) {
		cout << i << endl;
	}
	cout << "終了. i = " << i << endl;
	
	return 0;
}