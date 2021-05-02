
// file: fp3Tester.cpp
/////////////////////////////////////////////
#include <iostream>
#include "PreTriage.h"
#include "utils.h"
using namespace sdds;
int main() {
   sdds::debug = true;
   PreTriage P("bigdata.csv");
   P.run();
   return 0;
}

/*순서대로 입력
fp3Test:
1
0
*/


/*결과
Loading data...
Warning: number of records exceeded 100
100 Records imported...

General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 1
Line up full!
General Hospital Pre-Triage Application
1- Register
2- Admit
0- Exit
> 0
Saving Average Wait Times,
   COVID Test: 00:05
   Triage: 00:07
Saving m_lineup...
1- C,Apu Nahasapeemapetilon,684689164,18,01:04
2- T,Barney Gumble,350158143,12,01:10,Nausea-Vomiting-Abdominal Pain
3- T,Bleeding Gums Murphy[B],763006002,13,01:18,Pounding headache
4- C,Chief Clancy Wiggum,448762564,19,01:26
5- C,Dewey Largo,712691397,20,01:34
6- C,Eddie,547723561,21,01:42
7- T,Edna Krabappel,435676529,14,01:50,Muscle tension-Nausea-Photosensitivity
8- T,Itchy,253789913,15,01:58,Chest Pain-Lightheadedness-Pain radiates to arm
9- T,Janey Powell,319153275,16,02:06,Fatigue-Dry mouth-Stomach pain
10- C,Jasper Beardly,119258893,22,02:14
11- T,Kent Brockman,483681036,17,02:22,Cramps-Bloating-Backpain-Fatigue
12- T,Krusty The Clown,950529072,18,02:30,Upset Stomach-Headache-Chills-Redness of left eye
13- C,Lenny Leonard,587869296,23,02:38
14- C,Lou,152561791,24,02:46
15- C,Martin Prince,666834410,25,02:54
16- T,Marvin Monroe,617902450,19,03:02,Fever-Sore throat-Red blisters on tonge hand and feet
17- T,Milhouse Van Houten,245141298,20,03:10,Nausea-Vomiting-Abdominal Pain
18- T,Moe Szyslak,949650271,21,03:18,Pounding headache
19- C,Mr.Burns,302111099,26,03:26
20- T,Ned Flanders,901243533,22,03:34,Muscle tension-Nausea-Photosensitivity
21- T,Otto Mann,353808561,23,03:42,Chest Pain-Lightheadedness-Pain radiates to arm
22- C,Patty Bouvier,563626049,27,03:50
23- C,Ralph Wiggum,232528535,28,03:58
24- C,Reverend Timothy Lovejoy,954597483,29,04:06
25- T,Scratchy,804624732,24,04:14,Fatigue-Dry mouth-Stomach pain
26- T,Selma Bouvier,824433633,25,04:22,Cramps-Bloating-Backpain-Fatigue
27- T,Seymour Skinner,212777486,26,04:30,Upset Stomach-Headache-Chills-Redness of left eye
28- C,Sherri,803890510,30,04:38
29- T,Sideshow Bob,661926384,27,04:46,Fever-Sore throat-Red blisters on tonge hand and feet
30- T,Terri,436143666,28,04:54,Nausea-Vomiting-Abdominal Pain
31- C,Todd Flanders,633004791,31,05:02
32- C,Waylon Smithers,363654580,32,05:10
33- C,Wendell Borton,799577464,33,05:18
34- T,Bernice Hibbert,951217324,29,05:26,Pounding headache
35- T,Blue - Haired Lawyer,999210723,30,05:34,Muscle tension-Nausea-Photosensitivity
36- T,Carl Carlson,891594250,31,05:42,Chest Pain-Lightheadedness-Pain radiates to arm
37- C,Dolph Starbeam,569782342,34,05:50
38- T,Dr.Julius Hibbert,729513816,32,05:58,Fatigue-Dry mouth-Stomach pain
39- T,Dr.Nick Riviera,238049382,33,06:06,Cramps-Bloating-Backpain-Fatigue
40- C,Elizabeth Hoover,800542218,35,06:14
41- C,Hans Moleman,969819277,36,06:22
42- C,Helen Lovejoy,401224915,37,06:30
43- T,Herman Hermann,593609025,34,06:38,Upset Stomach-Headache-Chills-Redness of left eye
44- T,Jacqueline Bouvier,953663619,35,06:46,Fever-Sore throat-Red blisters on tonge hand and feet
45- T,Jimbo Jones,721443190,36,06:54,Nausea-Vomiting-Abdominal Pain
46- C,Kearney Zzyzwicz,432711501,38,07:02
47- T,Lionel Hutz,178593191,37,07:10,Pounding headache
48- T,Maude Flanders[D],420801423,38,07:18,Muscle tension-Nausea-Photosensitivity
49- C,Mayor Joe Quimby,110077488,39,07:26
50- C,Nelson Muntz,196178470,40,07:34
51- C,Princess Kashmir,535122245,41,07:42
52- T,Professor Jonathan Frink,862738888,39,07:50,Chest Pain-Lightheadedness-Pain radiates to arm
53- T,Rainier Wolfcastle,838261596,40,07:58,Fatigue-Dry mouth-Stomach pain
54- T,Rod Flanders,570771995,41,08:06,Cramps-Bloating-Backpain-Fatigue
55- C,Sideshow Mel,665096883,42,08:14
56- T,Troy McClure,889384541,42,08:22,Upset Stomach-Headache-Chills-Redness of left eye
57- T,Wise Guy,687194419,43,08:30,Fever-Sore throat-Red blisters on tonge hand and feet
58- C,Agnes Skinner,139838034,43,08:38
59- C,Akira Kurosawa,109031892,44,08:46
60- C,Comic Book Guy,560066225,45,08:54
61- T,Groundskeeper Willie,750953613,44,09:02,Nausea-Vomiting-Abdominal Pain
62- T,Judge Roy Snyder,590660433,45,09:10,Pounding headache
63- T,Kang,874482795,46,09:18,Muscle tension-Nausea-Photosensitivity
64- C,Kodos,713945919,46,09:26
65- T,Luann Van Houten,674163110,47,09:34,Chest Pain-Lightheadedness-Pain radiates to arm
66- T,Mr.Teeny,682435248,48,09:42,Fatigue-Dry mouth-Stomach pain
67- C,Snake Jailbird,982038952,47,09:50
68- C,Arnie Pye,839813200,48,09:58
69- C,Bumblebee Man,953269767,49,10:06
70- T,Drederick Tatum,595058538,49,10:14,Cramps-Bloating-Backpain-Fatigue
71- T,Kirk Van Houten,920565776,50,10:22,Upset Stomach-Headache-Chills-Redness of left eye
72- T,Lunchlady Doris,531265858,51,10:30,Fever-Sore throat-Red blisters on tonge hand and feet
73- C,Homer simpson,897545973,50,10:38
74- T,Ruth Powers,839708037,52,10:46,Nausea-Vomiting-Abdominal Pain
75- T,Sea Captain,536632611,53,10:54,Pounding headache
76- C,Squeaky,969983044,51,11:02
77- C,Baby Gerald,720596849,52,11:10
78- C,Cletus Spuckler,663876953,53,11:18
79- T,Luigi Risotto,806256565,54,11:26,Muscle tension-Nausea-Photosensitivity
80- T,Miss Springfield,120316413,55,11:34,Chest Pain-Lightheadedness-Pain radiates to arm
81- T,Superintendent Gary Chalmers,338313093,56,11:42,Fatigue-Dry mouth-Stomach pain
82- C,Alice Glick,716798266,54,11:50
83- T,Allison Taylor,135930980,57,11:58,Cramps-Bloating-Backpain-Fatigue
84- T,Database,327304915,58,12:06,Upset Stomach-Headache-Chills-Redness of left eye
85- C,The Rich Texan,563121591,55,12:14
86- C,Sarah Wiggum,997622584,56,12:22
87- C,Uter Zurker,822087239,57,12:30
88- T,Brandine Spuckler,437656034,59,12:38,Fever-Sore throat-Red blisters on tonge hand and feet
89- T,Disco Stu,530230041,60,12:46,Nausea-Vomiting-Abdominal Pain
90- T,Fat Tony,801621386,61,12:54,Pounding headache
91- C,Louie,937944799,58,13:02
92- T,Mona Simpson,489288169,62,13:10,Muscle tension-Nausea-Photosensitivity
93- T,Legs,385733617,63,13:18,Chest Pain-Lightheadedness-Pain radiates to arm
94- C,Gil Gunderson,737726088,59,13:26
95- C,Manjula Nahasapeemapetilon,965839509,60,13:34
96- C,Lindsey Naegle,723662924,61,13:42
97- T,Mrs.Vanderbilt,439527467,64,13:50,Fatigue-Dry mouth-Stomach pain
98- T,Artie Ziff,903489573,65,13:58,Cramps-Bloating-Backpain-Fatigue
99- T,Duffman,908615164,66,14:06,Upset Stomach-Headache-Chills-Redness of left eye
100- C,Gloria Jailbird,791034131,62,14:14
done!
*/

/*파일변화
Content of "bigdata.csv" after execution:

00:05,00:07
C,Apu Nahasapeemapetilon,684689164,18,01:04
T,Barney Gumble,350158143,12,01:10,Nausea-Vomiting-Abdominal Pain
T,Bleeding Gums Murphy[B],763006002,13,01:18,Pounding headache
C,Chief Clancy Wiggum,448762564,19,01:26
C,Dewey Largo,712691397,20,01:34
C,Eddie,547723561,21,01:42
T,Edna Krabappel,435676529,14,01:50,Muscle tension-Nausea-Photosensitivity
T,Itchy,253789913,15,01:58,Chest Pain-Lightheadedness-Pain radiates to arm
T,Janey Powell,319153275,16,02:06,Fatigue-Dry mouth-Stomach pain
C,Jasper Beardly,119258893,22,02:14
T,Kent Brockman,483681036,17,02:22,Cramps-Bloating-Backpain-Fatigue
T,Krusty The Clown,950529072,18,02:30,Upset Stomach-Headache-Chills-Redness of left eye
C,Lenny Leonard,587869296,23,02:38
C,Lou,152561791,24,02:46
C,Martin Prince,666834410,25,02:54
T,Marvin Monroe,617902450,19,03:02,Fever-Sore throat-Red blisters on tonge hand and feet
T,Milhouse Van Houten,245141298,20,03:10,Nausea-Vomiting-Abdominal Pain
T,Moe Szyslak,949650271,21,03:18,Pounding headache
C,Mr.Burns,302111099,26,03:26
T,Ned Flanders,901243533,22,03:34,Muscle tension-Nausea-Photosensitivity
T,Otto Mann,353808561,23,03:42,Chest Pain-Lightheadedness-Pain radiates to arm
C,Patty Bouvier,563626049,27,03:50
C,Ralph Wiggum,232528535,28,03:58
C,Reverend Timothy Lovejoy,954597483,29,04:06
T,Scratchy,804624732,24,04:14,Fatigue-Dry mouth-Stomach pain
T,Selma Bouvier,824433633,25,04:22,Cramps-Bloating-Backpain-Fatigue
T,Seymour Skinner,212777486,26,04:30,Upset Stomach-Headache-Chills-Redness of left eye
C,Sherri,803890510,30,04:38
T,Sideshow Bob,661926384,27,04:46,Fever-Sore throat-Red blisters on tonge hand and feet
T,Terri,436143666,28,04:54,Nausea-Vomiting-Abdominal Pain
C,Todd Flanders,633004791,31,05:02
C,Waylon Smithers,363654580,32,05:10
C,Wendell Borton,799577464,33,05:18
T,Bernice Hibbert,951217324,29,05:26,Pounding headache
T,Blue - Haired Lawyer,999210723,30,05:34,Muscle tension-Nausea-Photosensitivity
T,Carl Carlson,891594250,31,05:42,Chest Pain-Lightheadedness-Pain radiates to arm
C,Dolph Starbeam,569782342,34,05:50
T,Dr.Julius Hibbert,729513816,32,05:58,Fatigue-Dry mouth-Stomach pain
T,Dr.Nick Riviera,238049382,33,06:06,Cramps-Bloating-Backpain-Fatigue
C,Elizabeth Hoover,800542218,35,06:14
C,Hans Moleman,969819277,36,06:22
C,Helen Lovejoy,401224915,37,06:30
T,Herman Hermann,593609025,34,06:38,Upset Stomach-Headache-Chills-Redness of left eye
T,Jacqueline Bouvier,953663619,35,06:46,Fever-Sore throat-Red blisters on tonge hand and feet
T,Jimbo Jones,721443190,36,06:54,Nausea-Vomiting-Abdominal Pain
C,Kearney Zzyzwicz,432711501,38,07:02
T,Lionel Hutz,178593191,37,07:10,Pounding headache
T,Maude Flanders[D],420801423,38,07:18,Muscle tension-Nausea-Photosensitivity
C,Mayor Joe Quimby,110077488,39,07:26
C,Nelson Muntz,196178470,40,07:34
C,Princess Kashmir,535122245,41,07:42
T,Professor Jonathan Frink,862738888,39,07:50,Chest Pain-Lightheadedness-Pain radiates to arm
T,Rainier Wolfcastle,838261596,40,07:58,Fatigue-Dry mouth-Stomach pain
T,Rod Flanders,570771995,41,08:06,Cramps-Bloating-Backpain-Fatigue
C,Sideshow Mel,665096883,42,08:14
T,Troy McClure,889384541,42,08:22,Upset Stomach-Headache-Chills-Redness of left eye
T,Wise Guy,687194419,43,08:30,Fever-Sore throat-Red blisters on tonge hand and feet
C,Agnes Skinner,139838034,43,08:38
C,Akira Kurosawa,109031892,44,08:46
C,Comic Book Guy,560066225,45,08:54
T,Groundskeeper Willie,750953613,44,09:02,Nausea-Vomiting-Abdominal Pain
T,Judge Roy Snyder,590660433,45,09:10,Pounding headache
T,Kang,874482795,46,09:18,Muscle tension-Nausea-Photosensitivity
C,Kodos,713945919,46,09:26
T,Luann Van Houten,674163110,47,09:34,Chest Pain-Lightheadedness-Pain radiates to arm
T,Mr.Teeny,682435248,48,09:42,Fatigue-Dry mouth-Stomach pain
C,Snake Jailbird,982038952,47,09:50
C,Arnie Pye,839813200,48,09:58
C,Bumblebee Man,953269767,49,10:06
T,Drederick Tatum,595058538,49,10:14,Cramps-Bloating-Backpain-Fatigue
T,Kirk Van Houten,920565776,50,10:22,Upset Stomach-Headache-Chills-Redness of left eye
T,Lunchlady Doris,531265858,51,10:30,Fever-Sore throat-Red blisters on tonge hand and feet
C,Homer simpson,897545973,50,10:38
T,Ruth Powers,839708037,52,10:46,Nausea-Vomiting-Abdominal Pain
T,Sea Captain,536632611,53,10:54,Pounding headache
C,Squeaky,969983044,51,11:02
C,Baby Gerald,720596849,52,11:10
C,Cletus Spuckler,663876953,53,11:18
T,Luigi Risotto,806256565,54,11:26,Muscle tension-Nausea-Photosensitivity
T,Miss Springfield,120316413,55,11:34,Chest Pain-Lightheadedness-Pain radiates to arm
T,Superintendent Gary Chalmers,338313093,56,11:42,Fatigue-Dry mouth-Stomach pain
C,Alice Glick,716798266,54,11:50
T,Allison Taylor,135930980,57,11:58,Cramps-Bloating-Backpain-Fatigue
T,Database,327304915,58,12:06,Upset Stomach-Headache-Chills-Redness of left eye
C,The Rich Texan,563121591,55,12:14
C,Sarah Wiggum,997622584,56,12:22
C,Uter Zurker,822087239,57,12:30
T,Brandine Spuckler,437656034,59,12:38,Fever-Sore throat-Red blisters on tonge hand and feet
T,Disco Stu,530230041,60,12:46,Nausea-Vomiting-Abdominal Pain
T,Fat Tony,801621386,61,12:54,Pounding headache
C,Louie,937944799,58,13:02
T,Mona Simpson,489288169,62,13:10,Muscle tension-Nausea-Photosensitivity
T,Legs,385733617,63,13:18,Chest Pain-Lightheadedness-Pain radiates to arm
C,Gil Gunderson,737726088,59,13:26
C,Manjula Nahasapeemapetilon,965839509,60,13:34
C,Lindsey Naegle,723662924,61,13:42
T,Mrs.Vanderbilt,439527467,64,13:50,Fatigue-Dry mouth-Stomach pain
T,Artie Ziff,903489573,65,13:58,Cramps-Bloating-Backpain-Fatigue
T,Duffman,908615164,66,14:06,Upset Stomach-Headache-Chills-Redness of left eye
C,Gloria Jailbird,791034131,62,14:14
*/