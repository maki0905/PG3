#pragma once
template <typename Type1, typename Type2>

class Comparison
{
public:
	Type1 a;
	Type2 b;

	// コンストラクタ
	Comparison (Type1 a, Type2 b) : a(a), b(b) {};

	// メンバ関数
	Type1 Min() {
		if (a < b) {
			return static_cast<Type1>(a);
		}
		else if (a > b) {
			return static_cast<Type2>(b);
		}
		else {
			return static_cast<Type1>(a);
		}
	}

};

