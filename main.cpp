#include <stdio.h>
#include "Enemy.h"

int main() {
	int a = 0;
	Enemy* enemy = new Enemy();

	while (!enemy->GetFlag()) {
		enemy->Updata();
	}

	return 0;
}

