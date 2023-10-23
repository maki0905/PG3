#pragma once

// Enemyクラス
class Enemy
{
public:
	// 行動
	enum class Phase {
		Approach,
		Shooting,
		Withdrawal
	};

public:
	// メンバ関数
	void Approach();   // 接近
	void Shooting();   // 射撃
	void Withdrawal(); // 離脱

	void Updata();

	bool GetFlag() { return flag_; }

private:
	// メンバ関数ポインタのテーブル
	static void(Enemy:: *FuncTable[])();

	// フェーズ
	Phase phase_ = Phase::Approach;

	int timer_ = 0;

	bool flag_ = false;

};

