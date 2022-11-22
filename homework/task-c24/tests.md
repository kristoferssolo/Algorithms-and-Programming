# C uzdevums
C24. Autors - Kristiāns Francis Cagulis, kc22015  
Fails izveidots: 16.10.2022.  


## Uzdevuma nosacījumi
Izveidot programmu gan C++, gan Python. Ievadot loģiski nepareizus datus, programmai jāizdod atbilstošs paziņojums.
Jābūt iespējai programmu izpildīt atkārtoti. Atrādot programmu, jāatrāda:
  1. programmas teksts,
  2. testa piemēri,
  3. programma darbībā.
Precīzākas prasības sk. Laboratorijas darbu noteikumos.  

C24. Dots skaitļu masīvs A(n).
Izmest no masīva visus liekos elementus (izņemot pirmo) tā, lai palikušie skaitļi veidotu augošu elementu virkni.
Izmest tikai tos skaitļus, bez kuru izmešanas nevar iztikt augošas virknes iegūšanai.

## Testi
| Ievade                              | Programmā vēlamā izvade              | C++ | Python | Rust |
|-------------------------------------|--------------------------------------|-----|--------|------|
| 0                                   | Kļūda. Skaitlim jābūt lielākam par 0 | +   |        |      |
|                                     |                                      |     |        |      |
| 10                                  |                                      |     |        |      |
| 68 55 69 75 44 86 47 77 19 86       | 68 69 75 86 86                       | +   | +      |      |
|                                     |                                      |     |        |      |
| 7                                   |                                      |     |        |      |
| 0.73 0.32 0.18 0.97 0.49 0.26 0.70  | 0.73 0.97                            | +   |        |      |
|                                     |                                      |     |        |      |
| 10                                  |                                      |     |        |      |
| -97 -9 -67 93 -17 25 -85 -69 90 -10 | -97 -9 93                            | +   | +      |      |
|                                     |                                      |     |        |      |
| 10                                  |                                      |     |        |      |
| 88 6 87 39 27 78 93 4 48 8          | 88 93                                | +   | +      |      |
