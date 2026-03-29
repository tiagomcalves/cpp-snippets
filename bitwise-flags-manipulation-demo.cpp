/*
	Bitwise flags demonstration 2

	https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
	https://stackoverflow.com/questions/3643681/how-do-flags-work-in-c

	Turn specific flag (bit) to 1 (one)
	Integer |= ~FLAG;

	Turn specific flag (bit) to 0 (zero)
	Integer &= ~FLAG;

*/

#include <iostream>
#include <bitset>

//	
#define IN_ATTACK		(1 << 0)
#define IN_JUMP			(1 << 1)
#define IN_DUCK			(1 << 2)
#define IN_FORWARD		(1 << 3)
#define IN_BACK			(1 << 4)
#define IN_USE			(1 << 5)
#define IN_CANCEL		(1 << 6)
#define IN_LEFT			(1 << 7)
#define IN_RIGHT		(1 << 8)
#define IN_MOVELEFT		(1 << 9)
#define IN_MOVERIGHT	(1 << 10)
#define IN_ATTACK2		(1 << 11)
#define IN_RUN			(1 << 12)
#define IN_RELOAD		(1 << 13)
#define IN_ALT1			(1 << 14)
#define IN_ALT2			(1 << 15)
#define IN_SCORE		(1 << 16)   // Used by client.dll for when scoreboard is held down
#define IN_SPEED		(1 << 17)	// Player is holding the speed key


using namespace std;

void PrintOldKeys(const int& keys)
{
	cout << keys << endl;
	cout << bitset<18>(keys) << endl;
}

int main()
{
	int iOldKeys{ 0 };

	cout << endl;
	cout << "Jump forward attacking" << endl;
	iOldKeys |= (IN_FORWARD | IN_ATTACK | IN_JUMP);

	PrintOldKeys(iOldKeys);

	//	---

	cout << endl;
	cout << "Stopped jumping" << endl; 
	iOldKeys &= ~IN_JUMP;

	PrintOldKeys(iOldKeys);

	//	---

	cout << endl;
	cout << "Stopped going foward. " << endl;
	iOldKeys &= ~IN_FORWARD;
	cout << "Started Backing while Sprinting. " << endl;
	iOldKeys |= (IN_BACK | IN_SPEED);

	PrintOldKeys(iOldKeys);

	//	---

	cout << endl;
	cout << "Stopped sprinting and started crouching" << endl;
	iOldKeys &= ~IN_SPEED;
	iOldKeys |= IN_DUCK;

	PrintOldKeys(iOldKeys);

	//	---

	cout << endl;
	cout << "Took cover to stop" << endl;
	iOldKeys &= ~(IN_BACK | IN_ATTACK);

	PrintOldKeys(iOldKeys);

	//	---

	cout << endl;
	cout << "and reload" << endl;
	iOldKeys |= IN_RELOAD;

	PrintOldKeys(iOldKeys);

	return 0;
}

/*

Jump forward attacking
11
000000000000001011

Stopped jumping
9
000000000000001001

Stopped going foward.
Started Backing while Sprinting.
131089
100000000000010001

Stopped sprinting and started crouching
21
000000000000010101

Took cover to stop
4
000000000000000100

and reload
8196
000010000000000100

*/