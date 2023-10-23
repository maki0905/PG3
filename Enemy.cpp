#include "Enemy.h"
#include <stdio.h>

void Enemy::Approach()
{
	if (timer_ < 3) {
		timer_++;
		printf("接近中\n");
	}
	else {
		phase_ = Phase::Shooting;
	}

}

void Enemy::Shooting()
{
	printf("射撃\n");
	phase_ = Phase::Withdrawal;
}

void Enemy::Withdrawal()
{
	if (timer_ > 0) {
		timer_--;
		printf("離脱中\n");
	}
	else {
		phase_ = Phase::Approach;
		flag_ = true;
	}


}

void Enemy::Updata()
{

	(this->*FuncTable[static_cast<size_t>(phase_)])();
}

void(Enemy::* Enemy::FuncTable[])() = {
	&Enemy::Approach,
	&Enemy::Shooting,
	&Enemy::Withdrawal
};