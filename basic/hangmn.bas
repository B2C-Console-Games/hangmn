1010 PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
1020 REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
1030 REM
1040 RANDOMIZE
1050 LET S7=1
1060 PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
1070 INPUT N7$
1080 IF N7$="N" THEN 1170
1090 PRINT
1100 PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
1110 PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
1120 PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
1130 PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
1140 PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
1150 PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
1160 PRINT"LOSE."
1170 LET T2=0
1180 PRINT
1190 PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
1200 INPUT Q9$
1210 IF Q9$="Y" THEN 2030
1220 LET T2=1
1230 IF S7=0 THEN 1430
1240 LET Q=0
1250 LET L=1
1260 DIM S(200)
1270 DIM F$(2000)
1280 DIM A$(20)
1290 DIM B$(20)
1300 DIM I(200)
1310 LET O1=1
1320 READ S(O1)
1330 IF S(O1)<0 THEN 1420
1340 LET I(O1)=L
1350 FOR O=L TO L+S(O1)-1
1360 READ F$(O)
1370 NEXT O
1380 LET Q=Q+1
1390 LET L=L+S(O1)
1400 LET O1=O1+1
1410 GO TO 1320
1420 LET O1=O1-1
1430 LET R=INT(1+O1*RND)
1440 LET S=S(R)
1450 LET O6=I(R)
1460 FOR Z2=1 TO S(R)
1470 LET O6=I(R)
1480 LET A$(Z2)=F$(O6+Z2-1)
1490 NEXT Z2
1500 DIM U$(26)
1510 DIM E$(26)
1520 LET V=1
1530 FOR I=1 TO S
1540 LET B$(I)=" - "
1550 NEXT I
1560 GO TO 1740
1570 PRINT
1580 PRINT"WHAT IS YOUR GUESS";
1590 LET K=1
1600 INPUT G$
1610 FOR Y=1 TO S
1620 IF G$=A$(Y) THEN 1640
1630 GO TO 1650
1640 LET K=0
1650 NEXT Y
1660 IF K=0 THEN 1690
1670 LET E$(V)=G$
1680 LET V=V+1
1690 FOR T=1 TO S 
1700 IF G$=A$(T) THEN 1720
1710 GO TO 1730
1720 LET B$(T)=G$
1730 NEXT T
1740 PRINT
1750 FOR I=1 TO S
1760 PRINT B$(I);
1770 NEXT I
1780 PRINT " ",
1790 FOR G6=1 TO V-1
1800 PRINT E$(G6);
1810 NEXT G6
1820 PRINT
1830 LET E1=V-1
1840 IF E1<9 THEN 1970
1850 PRINT"I WIN..."
1860 PRINT"THE CORRECT ANSWER IS ";
1870 FOR Z2=1 TO S
1880 PRINT A$(Z2);
1890 NEXT Z2
1900 PRINT
1910 PRINT " DO YOU WANT TO PLAY AGAIN";
1920 LET W=1
1930 INPUT T$
1940 LET S7=0
1950 IF T$="Y" THEN 1060
1960 GO TO 3660
1970 PRINT
1980 IF K=0 THEN 2380
1990 IF W=1 THEN 2360
2000 PRINT"DO YOU WANT TO SEE THE PICTURE";
2010 INPUT T2$
2020 IF T2$="N" THEN2380
2030 PRINT"       *-:-*"
2040 PRINT"     %&     &%"
2050 PRINT"    #         #"
2060 IF E1=8 THEN 2380
2070 PRINT"   ^  (.) (.)  ^"
2080 IF E1=7 THEN 2380
2090 PRINT" <<<           >>>"
2100 IF E1=6 THEN 2380
2110 PRINT"   !    :?:    !"
2120 IF E1=5 THEN 2380
2130 PRINT"   *  -     -  *"
2140 PRINT"   '   +++++   '"
2150 PRINT"   &           &"
2160 PRINT"    %%%     %%%"
2170 PRINT"      :!#$#!:"
2180 IF E1=4 THEN 2380
2190 PRINT"         I"
2200 PRINT"         I"
2210 PRINT"         I"
2220 IF E1=3 THEN 2380
2230 PRINT"???????????????????"
2240 IF E1=2 THEN 2380
2250 PRINT"         @"
2260 PRINT"         @"
2270 PRINT"         @"
2280 IF E1=1 THEN 2380
2290 PRINT"        ( )"
2300 PRINT"       (   )"
2310 PRINT"      (     )"
2320 PRINT"     (       )"
2330 PRINT"    (         )"
2340 PRINT"   (           )"
2350 PRINT"  (#$%&     &%$#)"
2360 LETW=0
2370 IF T2=0 THEN 1220
2380 FOR I=1 TO S
2390 IF A$(I)=B$(I) THEN 2410
2400 GO TO 1580
2410 NEXT I
2420 PRINT"VERY GOOD! YOU WIN!"
2430 PRINT"DO YOU WANT TO PLAY AGAIN";
2440 LET S7=0
2450 INPUT H8$
2460 IF H8$="Y" THEN 1060
2470 GO TO 3660
2480 DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
2490 DATA 9,A,P,A,T,H,E,T,I,C
2500 DATA10,W,A,T,E,R,F,R,O,N,T
2510 DATA11,C,O,L,L,E,C,T,I,O,N,S
2520 DATA 9,Y,E,S,T,E,R,D,A,Y
2530 DATA12,K,I,N,D,E,R,G,A,R,T,E,N
2540 DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
2550 DATA 8,E,M,P,H,A,S,I,S
2560 DATA 9,E,D,U,C,A,T,I,O,N
2570 DATA 10,R,E,C,I,P,R,O,C,A,L
2580 DATA  11,D,E,C,L,A,R,A,T,I,O,N
2590 DATA 7,P,I,T,C,H,E,R
2600 DATA 10,S,U,P,E,R,S,O,N,I,C
2610 DATA 11,C,O,M,M,E,N,D,A,B,L,E
2620 DATA 7,P,A,S,S,A,G,E
2630 DATA 10,P,E,R,C,E,N,T,A,G,E
2640 DATA 5,J,O,I,N,T
2650 DATA8,G,O,V,E,R,N,O,R
2660 DATA 7,P,R,O,G,R,A,M
2670 DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
2680 DATA 8,S,E,C,U,R,I,T,Y
2690 DATA 7,W,E,L,C,O,M,E
2700 DATA 4,Z,E,R,O
2710 DATA9,P,O,T,E,N,T,I,A,L
2720 DATA 8,C,O,M,P,O,S,E,D
2730 DATA 11,P,O,S,S,I,B,I,L,I,T,Y
2740 DATA 8,D,I,R,E,C,T,O,R
2750 DATA 6,R,E,S,U,L,T
2760 DATA 8,C,H,I,L,D,R,E,N
2770 DATA 9,C,L,A,S,S,R,O,O,M
2780 DATA 8,E,C,O,N,O,M,I,C
2790 DATA 9,E,Q,U,I,V,O,C,A,L
2800 DATA 7,H,O,S,T,I,L,E
2810 DATA 7,R,O,G,U,I,S,H
2820 DATA 9,M,I,G,R,A,T,I,O,N
2830 DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
2840 DATA 7,C,U,R,S,O,R,Y
2850 DATA 5,M,O,N,E,Y
2860 DATA 7,A,B,S,O,L,V,E
2870 DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
2880 DATA 7,I,N,S,I,P,I,D
2890 DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
2900 DATA 10,N,E,G,O,T,I,A,B,L,E
2910 DATA 7,D,E,P,O,S,I,T
2920 DATA 4,L,A,M,P
2930 DATA 9,Q,U,A,L,I,F,I,E,D
2940 DATA 11,M,A,I,N,T,E,N,A,N,C,E
2950 DATA 7,F,U,N,E,R,A,L
2960 DATA 9,C,A,R,P,E,N,T,E,R
2970 DATA 5,F,U,G,U,E
2980 DATA 11,M,A,N,U,F,A,C,T,U,R,E
2990 DATA 6,B,A,K,E,R,Y
3000 DATA 8,M,I,L,I,T,A,R,Y
3010 DATA 5,G,U,A,R,D
3020 DATA 9,T,E,C,H,N,I,C,A,L
3030 DATA 8,S,Y,M,P,H,O,N,Y
3040 DATA 7,A,D,V,A,N,C,E
3050 DATA 7,M,I,N,I,M,U,M
3060 DATA 9,A,L,E,R,T,N,E,S,S
3070 DATA 7,Q,U,A,R,T,E,T
3080 DATA 6,P,O,L,I,S,H
3090 DATA 7,B,E,N,E,F,I,T
3100 DATA 8,C,O,M,P,O,S,E,R
3110 DATA 4,H,E,R,O
3120 DATA 6,D,E,S,I,S,T
3130 DATA 6,C,I,T,I,E,S
3140 DATA 4,S,L,U,M
3150 DATA 6,R,E,G,I,M,E
3160 DATA 5,D,O,U,B,T
3170 DATA 4,J,O,K,E
3180 DATA 9,P,R,O,T,E,S,T,E,R
3190 DATA 7,S,I,M,I,L,A,R
3200 DATA 4,C,U,R,B
3210 DATA 5,E,L,I,T,E
3220 DATA 8,M,E,D,I,C,A,R,E
3230 DATA 5,M,A,Y,O,R
3240 DATA 4,F,U,N,D
3250 DATA 6,A,C,T,I,O,N
3260 DATA 6,C,L,O,U,D,Y
3270 DATA 4,N,E,W,S
3280 DATA 5,Y,O,U,N,G
3290 DATA 5,M,A,F,I,A
3300 DATA 9,G,U,E,R,R,I,L,L,A
3310 DATA 7,R,E,Q,U,E,S,T
3320 DATA 7,G,O,U,R,M,E,T
3330 DATA 3,P,U,B
3340 DATA 8,S,K,I,R,M,I,S,H
3350 DATA 5,B,L,A,C,K
3360 DATA 5,W,H,I,T,E
3370 DATA 7,H,I,S,T,O,R,Y
3380 DATA 6,P,O,L,I,C,Y
3390 DATA 9,G,Y,M,N,A,S,I,U,M
3400 DATA 7,V,E,H,I,C,L,E
3410 DATA 9,A,U,T,O,M,O,T,O,N
3420 DATA 6,B,L,I,G,H,T
3430 DATA 3,S,I,X
3440 DATA 4,C,A,L,L
3450 DATA 9,P,S,Y,C,H,O,T,I,C
3460 DATA 8,N,E,U,R,O,T,I,C
3470 DATA 7,A,N,X,I,E,T,Y
3480 DATA 7,S,Y,M,P,T,O,M
3490 DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
3500 DATA 6,P,H,O,B,I,A
3510 DATA 9,O,B,S,E,S,S,I,O,N
3520 DATA10,C,O,M,P,U,L,S,I,O,N
3530 DATA 8,H,Y,S,T,E,R,I,A
3540 DATA 7,A,M,N,E,S,I,A
3550 DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
3560 DATA 9,P,R,O,G,N,O,S,I,S
3570 DATA 8,P,A,R,A,N,O,I,D
3580 DATA 9,C,A,T,A,T,O,N,I,C
3590 DATA 7,A,L,C,O,H,O,L
3600 DATA 8,C,O,M,P,U,T,E,R
3610 DATA 8,T,E,R,M,I,N,A,L
3620 DATA 4,C,U,T,E
3630 DATA 3,F,U,N
3640 DATA10,A,C,C,E,S,S,A,B,L,E
3650 DATA -103
3660 END
