// file: fp2Tester.cpp
/////////////////////////////////////////////
#include <iostream>
#include "PreTriage.h"
#include "utils.h"
using namespace sdds;
int main() {
   sdds::debug = true;
   PreTriage P("smalldata.csv");
   P.run();
   return 0;
}

/*순서대로 입력
fp2Test:
2
2
1:11
2
1
1:12
2
2
1:19
2
2
1:51
0
*/


/*결과
fp2tester.cpp
Loading data...
16 Records imported...

General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 2
Select Type of Admittance:
1- Covid Test
2- Triage
0- Exit
> 2

******************************************
Calling for TRIAGE
Ticket No: 12, Issued at: 01:10
Barney Gumble, OHIP: 350158143
Symptoms: Nausea-Vomiting-Abdominal Pain
******************************************

Enter current time: 1:11
General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 2
Select Type of Admittance:
1- Covid Test
2- Triage
0- Exit
> 1

******************************************
Calling for COVID TEST
Ticket No: 18, Issued at: 01:04
Apu Nahasapeemapetilon, OHIP: 684689164
******************************************

Enter current time: 1:12
General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 2
Select Type of Admittance:
1- Covid Test
2- Triage
0- Exit
> 2

******************************************
Calling for TRIAGE
Ticket No: 13, Issued at: 01:18
Murphy Brown, OHIP: 763006002
Symptoms: Pounding headache
******************************************

Enter current time: 1:19
General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 2
Select Type of Admittance:
1- Covid Test
2- Triage
0- Exit
> 2

******************************************
Calling for TRIAGE
Ticket No: 14, Issued at: 01:50
Edna Krabappel, OHIP: 435676529
Symptoms: Muscle tension-Nausea-Photosensitivity
******************************************

Enter current time: 1:51
General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 0
Saving Average Wait Times,
   COVID Test: 00:05
   Triage: 00:04
Saving m_lineup...
1- C,Chief Clancy Wiggum,448762564,19,01:26
2- C,Dewey Largo,712691397,20,01:34
3- C,Eddie,547723561,21,01:42
4- T,Itchy,253789913,15,01:58,Chest Pain-Lightheadedness-Pain radiates to arm
5- T,Janey Powell,319153275,16,02:06,Fatigue-Dry mouth-Stomach pain
6- C,Jasper Beardly,119258893,22,02:14
7- T,Kent Brockman,483681036,17,02:22,Cramps-Bloating-Backpain-Fatigue
8- T,Krusty The Clown,950529072,18,02:30,Upset Stomach-Headache-Chills-Redness of left eye
9- C,Lenny Leonard,587869296,23,02:38
10- C,Lou,152561791,24,02:46
11- C,Martin Prince,666834410,25,02:54
12- T,Marvin Monroe,617902450,19,03:02,Fever-Sore throat-Red blisters on tonge hand and feet
done!



smalldata.csv 이렇게 변화해야 한다.
Content of "smalldata.csv" after execution:
00:05,00:04
C,Chief Clancy Wiggum,448762564,19,01:26
C,Dewey Largo,712691397,20,01:34
C,Eddie,547723561,21,01:42
T,Itchy,253789913,15,01:58,Chest Pain-Lightheadedness-Pain radiates to arm
T,Janey Powell,319153275,16,02:06,Fatigue-Dry mouth-Stomach pain
C,Jasper Beardly,119258893,22,02:14
T,Kent Brockman,483681036,17,02:22,Cramps-Bloating-Backpain-Fatigue
T,Krusty The Clown,950529072,18,02:30,Upset Stomach-Headache-Chills-Redness of left eye
C,Lenny Leonard,587869296,23,02:38
C,Lou,152561791,24,02:46
C,Martin Prince,666834410,25,02:54
T,Marvin Monroe,617902450,19,03:02,Fever-Sore throat-Red blisters on tonge hand and feet
*/
