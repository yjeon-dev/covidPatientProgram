// file: fp1Tester.cpp
/////////////////////////////////////////////
#include <iostream>
#include "PreTriage.h"
#include "utils.h"
using namespace sdds;
int main() {
	sdds::debug = true;
	PreTriage P("data.csv");
	P.run();
	return 0;
}


/* 순서대로 입력
fp1Test:
1
1
1:00
aaa
111111111
1
2
1:01
bbb
222222222
bbb bbb bbb
0
*/


/*결과
fp1tester.cpp
Loading data...
No data or bad data file!

General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 1
Select Type of Admittance:
1- Covid Test
2- Triage
0- Exit
> 1
Enter current time: 1:00
Please enter patient information:
Name: aaa
OHIP: 111111111

******************************************
COVID TEST
Ticket No: 1, Issued at: 01:00
aaa, OHIP: 111111111
Estimated Wait Time: 00:00
******************************************

General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 1
Select Type of Admittance:
1- Covid Test
2- Triage
0- Exit
> 2
Enter current time: 1:01
Please enter patient information:
Name: bbb
OHIP: 222222222
Symptoms: bbb bbb bbb

******************************************
TRIAGE
Ticket No: 1, Issued at: 01:01
bbb, OHIP: 222222222
Symptoms: bbb bbb bbb
Estimated Wait Time: 00:00
******************************************

General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 0
Saving Average Wait Times,
   COVID Test: 00:15
   Triage: 00:05
Saving m_lineup...
1- C,aaa,111111111,1,01:00
2- T,bbb,222222222,1,01:01,bbb bbb bbb
done!


data.csv파일 변화
Content of "data.csv" after execution:
00:15,00:05
C,aaa,111111111,1,01:00
T,bbb,222222222,1,01:01,bbb bbb bbb

*/