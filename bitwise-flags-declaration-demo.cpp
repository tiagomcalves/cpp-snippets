/*
	Bitwise flags demonstration
	
    https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/
    https://stackoverflow.com/questions/3643681/how-do-flags-work-in-c
	
*/

#include <iostream>
#include <bitset>

//	defines in in_buttons.h
//	from source sdk 2013
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
#define IN_WALK			(1 << 18)	// Player holding walk key
#define IN_ZOOM			(1 << 19)	// Zoom key for HUD zoom
#define IN_WEAPON1		(1 << 20)	// weapon defines these bits
#define IN_WEAPON2		(1 << 21)	// weapon defines these bits
#define IN_BULLRUSH		(1 << 22)
#define IN_GRENADE1		(1 << 23)	// grenade 1
#define IN_GRENADE2		(1 << 24)	// grenade 2
#define	IN_ATTACK3		(1 << 25)


using namespace std;


int main()
{

    cout << "IN_ATTACK	" 		<< (1 << 0) << "\t ( " << bitset<26>((1 << 0)) << " )" << endl;
    cout << "IN_JUMP		" 	<< (1 << 1) << "\t ( " << bitset<26>((1 << 1)) << " )" << endl;
    cout << "IN_DUCK		" 	<< (1 << 2) << "\t ( " << bitset<26>((1 << 2)) << " )" << endl;
    cout << "IN_FORWARD	" 		<< (1 << 3) << "\t ( " << bitset<26>((1 << 3)) << " )" << endl;
    cout << "IN_BACK		" 	<< (1 << 4) << "\t ( " << bitset<26>((1 << 4)) << " )" << endl;
    cout << "IN_USE		" 		<< (1 << 5) << "\t ( " << bitset<26>((1 << 5)) << " )" << endl;
    cout << "IN_CANCEL	" 		<< (1 << 6) << "\t ( " << bitset<26>((1 << 6)) << " )" << endl;
    cout << "IN_LEFT		" 	<< (1 << 7) << "\t ( " << bitset<26>((1 << 7)) << " )" << endl;
    cout << "IN_RIGHT	" 		<< (1 << 8) << "\t ( " << bitset<26>((1 << 8)) << " )" << endl;
    cout << "IN_MOVELEFT	" 	<< (1 << 9) << "\t ( " << bitset<26>((1 << 9)) << " )" << endl;
    cout << "IN_MOVERIGHT    " 	<< (1 << 10) << "\t ( " << bitset<26>((1 << 10)) << " )" << endl;
    cout << "IN_ATTACK2      " 	<< (1 << 11) << "\t ( " << bitset<26>((1 << 11)) << " )" << endl;
    cout << "IN_RUN		" 		<< (1 << 12) << "\t ( " << bitset<26>((1 << 12)) << " )" << endl;
    cout << "IN_RELOAD	" 		<< (1 << 13) << "\t ( " << bitset<26>((1 << 13)) << " )" << endl;
    cout << "IN_ALT1		" 	<< (1 << 14) << "\t ( " << bitset<26>((1 << 14)) << " )" << endl;
    cout << "IN_ALT2		" 	<< (1 << 15) << "\t ( " << bitset<26>((1 << 15)) << " )" << endl;
    cout << "IN_SCORE	" 		<< (1 << 16) << "\t ( " << bitset<26>((1 << 16)) << " )" << endl;   // Used by client.dll for when scoreboard is held down
    cout << "IN_SPEED	" 		<< (1 << 17) << "\t ( " << bitset<26>((1 << 17)) << " )" << endl;	// Player is holding the speed key
    cout << "IN_WALK		" 	<< (1 << 18) << "\t ( " << bitset<26>((1 << 18)) << " )" << endl;	// Player holding walk key
    cout << "IN_ZOOM		" 	<< (1 << 19) << "\t ( " << bitset<26>((1 << 19)) << " )" << endl;	// Zoom key for HUD zoom
    cout << "IN_WEAPON1	" 		<< (1 << 20) << "\t ( " << bitset<26>((1 << 20)) << " )" << endl;	// weapon defines these bits
    cout << "IN_WEAPON2	" 		<< (1 << 21) << "\t ( " << bitset<26>((1 << 21)) << " )" << endl;	// weapon defines these bits
    cout << "IN_BULLRUSH	" 	<< (1 << 22) << "\t ( " << bitset<26>((1 << 22)) << " )" << endl;
    cout << "IN_GRENADE1	" 	<< (1 << 23) << "\t ( " << bitset<26>((1 << 23)) << " )" << endl;	// grenade 1
    cout << "IN_GRENADE2	" 	<< (1 << 24) << " ( " << bitset<26>((1 << 24)) << " )" << endl;		// grenade 2
    cout << "IN_ATTACK3	" 		<< (1 << 25) << " ( " << bitset<26>((1 << 25)) << " )" << endl;
    

    return 0;
}

/*
	Console output:
	
	IN_ATTACK       1        ( 00000000000000000000000001 )
	IN_JUMP         2        ( 00000000000000000000000010 )
	IN_DUCK         4        ( 00000000000000000000000100 )
	IN_FORWARD      8        ( 00000000000000000000001000 )
	IN_BACK         16       ( 00000000000000000000010000 )
	IN_USE          32       ( 00000000000000000000100000 )
	IN_CANCEL       64       ( 00000000000000000001000000 )
	IN_LEFT         128      ( 00000000000000000010000000 )
	IN_RIGHT        256      ( 00000000000000000100000000 )
	IN_MOVELEFT     512      ( 00000000000000001000000000 )
	IN_MOVERIGHT    1024     ( 00000000000000010000000000 )
	IN_ATTACK2      2048     ( 00000000000000100000000000 )
	IN_RUN          4096     ( 00000000000001000000000000 )
	IN_RELOAD       8192     ( 00000000000010000000000000 )
	IN_ALT1         16384    ( 00000000000100000000000000 )
	IN_ALT2         32768    ( 00000000001000000000000000 )
	IN_SCORE        65536    ( 00000000010000000000000000 )
	IN_SPEED        131072   ( 00000000100000000000000000 )
	IN_WALK         262144   ( 00000001000000000000000000 )
	IN_ZOOM         524288   ( 00000010000000000000000000 )
	IN_WEAPON1      1048576  ( 00000100000000000000000000 )
	IN_WEAPON2      2097152  ( 00001000000000000000000000 )
	IN_BULLRUSH     4194304  ( 00010000000000000000000000 )
	IN_GRENADE1     8388608  ( 00100000000000000000000000 )
	IN_GRENADE2     16777216 ( 01000000000000000000000000 )
	IN_ATTACK3      33554432 ( 10000000000000000000000000 )
	
*/
