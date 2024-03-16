/*
 * Title: The annotated BASIC Listing
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/hangmn/basic/hangmn.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x563445f3ce00 ---------A   01010 PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    0x563445f3cec0 ---------A   01020 REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x563445f3cf40 ---------A   01030 REM
    0x563445f3cfd0 ---------A   01040 RANDOMIZE
    0x563445f3d1e0 ---------A   01050 LET S7=1
    0x563445f3d360 ---------A T 01060 PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    0x563445f3d4c0 ---------A   01070 INPUT N7$
    0x563445f3d6a0 ---------A   01080 IF N7$="N" THEN 1170
    0x563445f3d750 ---------A   01090 PRINT
    0x563445f3d920 ---------A   01100 PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    0x563445f3dac0 ---------A   01110 PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    0x563445f41eb0 ---------A   01120 PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    0x563445f42040 ---------A   01130 PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    0x563445f421d0 ---------A   01140 PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    0x563445f42300 ---------A   01150 PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    0x563445f42430 ---------A   01160 PRINT"LOSE."
    0x563445f42620 ---------A T 01170 LET T2=0
    0x563445f427e0 ---------A   01180 PRINT
    0x563445f42960 ---------A   01190 PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    0x563445f42ac0 ---------A   01200 INPUT Q9$
    0x563445f42ca0 ---------A   01210 IF Q9$="Y" THEN 2030
    0x563445f42e20 ---------A T 01220 LET T2=1
    0x563445f42fd0 ---------A   01230 IF S7=0 THEN 1430
    0x563445f431d0 ---------A   01240 LET Q=0
    0x563445f433c0 ---------A   01250 LET L=1
    0x563445f435b0 ---------A   01260 DIM S(200)
    0x563445f43790 ---------A   01270 DIM F$(2000)
    0x563445f43970 ---------A   01280 DIM A$(20)
    0x563445f43b50 ---------A   01290 DIM B$(20)
    0x563445f43d30 ---------A   01300 DIM I(200)
    0x563445f43f10 ---------A   01310 LET O1=1
    0x563445f44050 ---------A T 01320 READ S(O1)
    0x563445f44250 ---------A   01330 IF S(O1)<0 THEN 1420
    0x563445f44610 ---------A   01340 LET I(O1)=L
    0x563445f44a00 ---------A   01350 FOR O=L TO L+S(O1)-1
    0x563445f44b40 ---------A   01360 READ F$(O)
    0x563445f44be0 ---------A   01370 NEXT O
    0x563445f44e00 ---------A   01380 LET Q=Q+1
    0x563445f45030 ---------A   01390 LET L=L+S(O1)
    0x563445f45240 ---------A   01400 LET O1=O1+1
    0x563445f452b0 ---------A   01410 GO TO 1320
    0x563445f454c0 ---------A T 01420 LET O1=O1-1
    0x563445f45950 ---------A T 01430 LET R=INT(1+O1*RND)
    0x563445f45b60 ---------A   01440 LET S=S(R)
    0x563445f45d70 ---------A   01450 LET O6=I(R)
    0x563445f46020 ---------A   01460 FOR Z2=1 TO S(R)
    0x563445f461d0 ---------A   01470 LET O6=I(R)
    0x563445f46540 ---------A   01480 LET A$(Z2)=F$(O6+Z2-1)
    0x563445f465f0 ---------A   01490 NEXT Z2
    0x563445f467f0 ---------A   01500 DIM U$(26)
    0x563445f469d0 ---------A   01510 DIM E$(26)
    0x563445f46bb0 ---------A   01520 LET V=1
    0x563445f46e00 ---------A   01530 FOR I=1 TO S
    0x563445f47000 ---------A   01540 LET B$(I)=" - "
    0x563445f470b0 ---------A   01550 NEXT I
    0x563445f47130 ---------A   01560 GO TO 1740
    0x563445f471a0 ----------   01570 PRINT
    0x563445f472f0 ---------A T 01580 PRINT"WHAT IS YOUR GUESS";
    0x563445f474e0 ---------A   01590 LET K=1
    0x563445f47630 ---------A   01600 INPUT G$
    0x563445f478a0 ---------A   01610 FOR Y=1 TO S
    0x563445f47a80 ---------A   01620 IF G$=A$(Y) THEN 1640
    0x563445f47b00 ---------A   01630 GO TO 1650
    0x563445f47c60 ---------A T 01640 LET K=0
    0x563445f47d10 ---------A T 01650 NEXT Y
    0x563445f482e0 ---------A   01660 IF K=0 THEN 1690
    0x563445f48480 ---------A   01670 LET E$(V)=G$
    0x563445f48690 ---------A   01680 LET V=V+1
    0x563445f488f0 ---------A T 01690 FOR T=1 TO S 
    0x563445f48ad0 ---------A   01700 IF G$=A$(T) THEN 1720
    0x563445f48b50 ---------A   01710 GO TO 1730
    0x563445f48cd0 ---------A T 01720 LET B$(T)=G$
    0x563445f48d80 ---------A T 01730 NEXT T
    0x563445f48e00 ---------A T 01740 PRINT
    0x563445f48fd0 ---------A   01750 FOR I=1 TO S
    0x563445f49130 ---------A   01760 PRINT B$(I);
    0x563445f491e0 ---------A   01770 NEXT I
    0x563445f49340 ---------A   01780 PRINT " ",
    0x563445f49670 ---------A   01790 FOR G6=1 TO V-1
    0x563445f497d0 ---------A   01800 PRINT E$(G6);
    0x563445f49880 ---------A   01810 NEXT G6
    0x563445f49900 ---------A   01820 PRINT
    0x563445f49b90 ---------A   01830 LET E1=V-1
    0x563445f49d40 ---------A   01840 IF E1<9 THEN 1970
    0x563445f49e90 ---------A   01850 PRINT"I WIN..."
    0x563445f49ff0 ---------A   01860 PRINT"THE CORRECT ANSWER IS ";
    0x563445f4a1c0 ---------A   01870 FOR Z2=1 TO S
    0x563445f4a320 ---------A   01880 PRINT A$(Z2);
    0x563445f4a3d0 ---------A   01890 NEXT Z2
    0x563445f4a470 ---------A   01900 PRINT
    0x563445f4a5d0 ---------A   01910 PRINT " DO YOU WANT TO PLAY AGAIN";
    0x563445f4a7c0 ---------A   01920 LET W=1
    0x563445f4a910 ---------A   01930 INPUT T$
    0x563445f4aaa0 ---------A   01940 LET S7=0
    0x563445f4ac70 ---------A   01950 IF T$="Y" THEN 1060
    0x563445f4acf0 ---------A   01960 GO TO 3660
    0x563445f4ad50 ---------A T 01970 PRINT
    0x563445f4af00 ---------A   01980 IF K=0 THEN 2380
    0x563445f4b0e0 ---------A   01990 IF W=1 THEN 2360
    0x563445f4b250 ---------A   02000 PRINT"DO YOU WANT TO SEE THE PICTURE";
    0x563445f4b3b0 ---------A   02010 INPUT T2$
    0x563445f4b5a0 ---------A   02020 IF T2$="N" THEN2380
    0x563445f4b6f0 ---------A T 02030 PRINT"       *-:-*"
    0x563445f4b830 ---------A   02040 PRINT"     %&     &%"
    0x563445f4b960 ---------A   02050 PRINT"    #         #"
    0x563445f4bb20 ---------A   02060 IF E1=8 THEN 2380
    0x563445f4bc60 ---------A   02070 PRINT"   ^  (.) (.)  ^"
    0x563445f4be20 ---------A   02080 IF E1=7 THEN 2380
    0x563445f4bf60 ---------A   02090 PRINT" <<<           >>>"
    0x563445f4c120 ---------A   02100 IF E1=6 THEN 2380
    0x563445f4c260 ---------A   02110 PRINT"   !    :?:    !"
    0x563445f4c420 ---------A   02120 IF E1=5 THEN 2380
    0x563445f4c570 ---------A   02130 PRINT"   *  -     -  *"
    0x563445f4c6b0 ---------A   02140 PRINT"   '   +++++   '"
    0x563445f4c7f0 ---------A   02150 PRINT"   &           &"
    0x563445f4c930 ---------A   02160 PRINT"    %%%     %%%"
    0x563445f4ca60 ---------A   02170 PRINT"      :!#$#!:"
    0x563445f4cc10 ---------A   02180 IF E1=4 THEN 2380
    0x563445f4cd50 ---------A   02190 PRINT"         I"
    0x563445f4ce80 ---------A   02200 PRINT"         I"
    0x563445f4cfb0 ---------A   02210 PRINT"         I"
    0x563445f4d170 ---------A   02220 IF E1=3 THEN 2380
    0x563445f4d2b0 ---------A   02230 PRINT"???????????????????"
    0x563445f4d460 ---------A   02240 IF E1=2 THEN 2380
    0x563445f4d5a0 ---------A   02250 PRINT"         @"
    0x563445f4d6d0 ---------A   02260 PRINT"         @"
    0x563445f4d800 ---------A   02270 PRINT"         @"
    0x563445f4d9b0 ---------A   02280 IF E1=1 THEN 2380
    0x563445f4db00 ---------A   02290 PRINT"        ( )"
    0x563445f4e450 ---------A   02300 PRINT"       (   )"
    0x563445f4e590 ---------A   02310 PRINT"      (     )"
    0x563445f4e6d0 ---------A   02320 PRINT"     (       )"
    0x563445f4e810 ---------A   02330 PRINT"    (         )"
    0x563445f4e950 ---------A   02340 PRINT"   (           )"
    0x563445f4ea80 ---------A   02350 PRINT"  (#$%&     &%$#)"
    0x563445f4ebf0 ---------A T 02360 LETW=0
    0x563445f4eda0 ---------A   02370 IF T2=0 THEN 1220
    0x563445f4ef90 ---------A T 02380 FOR I=1 TO S
    0x563445f4f1d0 ---------A   02390 IF A$(I)=B$(I) THEN 2410
    0x563445f4f250 ---------A   02400 GO TO 1580
    0x563445f4f2f0 ---------A T 02410 NEXT I
    0x563445f4f450 ---------A   02420 PRINT"VERY GOOD! YOU WIN!"
    0x563445f4f5b0 ---------A   02430 PRINT"DO YOU WANT TO PLAY AGAIN";
    0x563445f4f720 ---------A   02440 LET S7=0
    0x563445f4f880 ---------A   02450 INPUT H8$
    0x563445f4fa60 ---------A   02460 IF H8$="Y" THEN 1060
    0x563445f4fb00 ---------A   02470 GO TO 3660
    0x563445f50830 ---------A   02480 DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    0x563445f51030 ---------A   02490 DATA 9,A,P,A,T,H,E,T,I,C
    0x563445f518f0 ---------A   02500 DATA10,W,A,T,E,R,F,R,O,N,T
    0x563445f52270 ---------A   02510 DATA11,C,O,L,L,E,C,T,I,O,N,S
    0x563445f52a70 ---------A   02520 DATA 9,Y,E,S,T,E,R,D,A,Y
    0x563445f534b0 ---------A   02530 DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    0x563445f54070 ---------A   02540 DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    0x563445f547b0 ---------A   02550 DATA 8,E,M,P,H,A,S,I,S
    0x563445f54fb0 ---------A   02560 DATA 9,E,D,U,C,A,T,I,O,N
    0x563445f55870 ---------A   02570 DATA 10,R,E,C,I,P,R,O,C,A,L
    0x563445f561f0 ---------A   02580 DATA  11,D,E,C,L,A,R,A,T,I,O,N
    0x563445f56870 ---------A   02590 DATA 7,P,I,T,C,H,E,R
    0x563445f57130 ---------A   02600 DATA 10,S,U,P,E,R,S,O,N,I,C
    0x563445f57ab0 ---------A   02610 DATA 11,C,O,M,M,E,N,D,A,B,L,E
    0x563445f58130 ---------A   02620 DATA 7,P,A,S,S,A,G,E
    0x563445f589e0 ---------A   02630 DATA 10,P,E,R,C,E,N,T,A,G,E
    0x563445f58ee0 ---------A   02640 DATA 5,J,O,I,N,T
    0x563445f59620 ---------A   02650 DATA8,G,O,V,E,R,N,O,R
    0x563445f59ca0 ---------A   02660 DATA 7,P,R,O,G,R,A,M
    0x563445f5a7a0 ---------A   02670 DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    0x563445f5aee0 ---------A   02680 DATA 8,S,E,C,U,R,I,T,Y
    0x563445f5b550 ---------A   02690 DATA 7,W,E,L,C,O,M,E
    0x563445f5b990 ---------A   02700 DATA 4,Z,E,R,O
    0x563445f5c190 ---------A   02710 DATA9,P,O,T,E,N,T,I,A,L
    0x563445f5c8d0 ---------A   02720 DATA 8,C,O,M,P,O,S,E,D
    0x563445f5d250 ---------A   02730 DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    0x563445f5d980 ---------A   02740 DATA 8,D,I,R,E,C,T,O,R
    0x563445f5df40 ---------A   02750 DATA 6,R,E,S,U,L,T
    0x563445f5e680 ---------A   02760 DATA 8,C,H,I,L,D,R,E,N
    0x563445f5ee80 ---------A   02770 DATA 9,C,L,A,S,S,R,O,O,M
    0x563445f5f5c0 ---------A   02780 DATA 8,E,C,O,N,O,M,I,C
    0x563445f5fdc0 ---------A   02790 DATA 9,E,Q,U,I,V,O,C,A,L
    0x563445f60440 ---------A   02800 DATA 7,H,O,S,T,I,L,E
    0x563445f60ac0 ---------A   02810 DATA 7,R,O,G,U,I,S,H
    0x563445f612c0 ---------A   02820 DATA 9,M,I,G,R,A,T,I,O,N
    0x563445f61dc0 ---------A   02830 DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    0x563445f62430 ---------A   02840 DATA 7,C,U,R,S,O,R,Y
    0x563445f62930 ---------A   02850 DATA 5,M,O,N,E,Y
    0x563445f62fb0 ---------A   02860 DATA 7,A,B,S,O,L,V,E
    0x563445f639f0 ---------A   02870 DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    0x563445f64080 ---------A   02880 DATA 7,I,N,S,I,P,I,D
    0x563445f64c40 ---------A   02890 DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    0x563445f65500 ---------A   02900 DATA 10,N,E,G,O,T,I,A,B,L,E
    0x563445f65b70 ---------A   02910 DATA 7,D,E,P,O,S,I,T
    0x563445f65fb0 ---------A   02920 DATA 4,L,A,M,P
    0x563445f667b0 ---------A   02930 DATA 9,Q,U,A,L,I,F,I,E,D
    0x563445f67130 ---------A   02940 DATA 11,M,A,I,N,T,E,N,A,N,C,E
    0x563445f677b0 ---------A   02950 DATA 7,F,U,N,E,R,A,L
    0x563445f67fa0 ---------A   02960 DATA 9,C,A,R,P,E,N,T,E,R
    0x563445f684a0 ---------A   02970 DATA 5,F,U,G,U,E
    0x563445f68e10 ---------A   02980 DATA 11,M,A,N,U,F,A,C,T,U,R,E
    0x563445f693d0 ---------A   02990 DATA 6,B,A,K,E,R,Y
    0x563445f69b00 ---------A   03000 DATA 8,M,I,L,I,T,A,R,Y
    0x563445f6a000 ---------A   03010 DATA 5,G,U,A,R,D
    0x563445f6a800 ---------A   03020 DATA 9,T,E,C,H,N,I,C,A,L
    0x563445f6af40 ---------A   03030 DATA 8,S,Y,M,P,H,O,N,Y
    0x563445f6b5c0 ---------A   03040 DATA 7,A,D,V,A,N,C,E
    0x563445f6bc40 ---------A   03050 DATA 7,M,I,N,I,M,U,M
    0x563445f6c440 ---------A   03060 DATA 9,A,L,E,R,T,N,E,S,S
    0x563445f6cab0 ---------A   03070 DATA 7,Q,U,A,R,T,E,T
    0x563445f6d070 ---------A   03080 DATA 6,P,O,L,I,S,H
    0x563445f6d6f0 ---------A   03090 DATA 7,B,E,N,E,F,I,T
    0x563445f6de20 ---------A   03100 DATA 8,C,O,M,P,O,S,E,R
    0x563445f6e250 ---------A   03110 DATA 4,H,E,R,O
    0x563445f6e800 ---------A   03120 DATA 6,D,E,S,I,S,T
    0x563445f6edb0 ---------A   03130 DATA 6,C,I,T,I,E,S
    0x563445f6f1e0 ---------A   03140 DATA 4,S,L,U,M
    0x563445f6f790 ---------A   03150 DATA 6,R,E,G,I,M,E
    0x563445f6fc80 ---------A   03160 DATA 5,D,O,U,B,T
    0x563445f700c0 ---------A   03170 DATA 4,J,O,K,E
    0x563445f708c0 ---------A   03180 DATA 9,P,R,O,T,E,S,T,E,R
    0x563445f70f30 ---------A   03190 DATA 7,S,I,M,I,L,A,R
    0x563445f71360 ---------A   03200 DATA 4,C,U,R,B
    0x563445f71860 ---------A   03210 DATA 5,E,L,I,T,E
    0x563445f71f90 ---------A   03220 DATA 8,M,E,D,I,C,A,R,E
    0x563445f72480 ---------A   03230 DATA 5,M,A,Y,O,R
    0x563445f728b0 ---------A   03240 DATA 4,F,U,N,D
    0x563445f72e60 ---------A   03250 DATA 6,A,C,T,I,O,N
    0x563445f73410 ---------A   03260 DATA 6,C,L,O,U,D,Y
    0x563445f73840 ---------A   03270 DATA 4,N,E,W,S
    0x563445f73d30 ---------A   03280 DATA 5,Y,O,U,N,G
    0x563445f74230 ---------A   03290 DATA 5,M,A,F,I,A
    0x563445f74a30 ---------A   03300 DATA 9,G,U,E,R,R,I,L,L,A
    0x563445f750b0 ---------A   03310 DATA 7,R,E,Q,U,E,S,T
    0x563445f75720 ---------A   03320 DATA 7,G,O,U,R,M,E,T
    0x563445f75aa0 ---------A   03330 DATA 3,P,U,B
    0x563445f761d0 ---------A   03340 DATA 8,S,K,I,R,M,I,S,H
    0x563445f766c0 ---------A   03350 DATA 5,B,L,A,C,K
    0x563445f76bc0 ---------A   03360 DATA 5,W,H,I,T,E
    0x563445f77230 ---------A   03370 DATA 7,H,I,S,T,O,R,Y
    0x563445f777f0 ---------A   03380 DATA 6,P,O,L,I,C,Y
    0x563445f77ff0 ---------A   03390 DATA 9,G,Y,M,N,A,S,I,U,M
    0x563445f78670 ---------A   03400 DATA 7,V,E,H,I,C,L,E
    0x563445f78e60 ---------A   03410 DATA 9,A,U,T,O,M,O,T,O,N
    0x563445f79410 ---------A   03420 DATA 6,B,L,I,G,H,T
    0x563445f79780 ---------A   03430 DATA 3,S,I,X
    0x563445f79bc0 ---------A   03440 DATA 4,C,A,L,L
    0x563445f7a3c0 ---------A   03450 DATA 9,P,S,Y,C,H,O,T,I,C
    0x563445f7ab00 ---------A   03460 DATA 8,N,E,U,R,O,T,I,C
    0x563445f7b180 ---------A   03470 DATA 7,A,N,X,I,E,T,Y
    0x563445f7b800 ---------A   03480 DATA 7,S,Y,M,P,T,O,M
    0x563445f7c2f0 ---------A   03490 DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    0x563445f7c8b0 ---------A   03500 DATA 6,P,H,O,B,I,A
    0x563445f7d0b0 ---------A   03510 DATA 9,O,B,S,E,S,S,I,O,N
    0x563445f7d970 ---------A   03520 DATA10,C,O,M,P,U,L,S,I,O,N
    0x563445f7e0b0 ---------A   03530 DATA 8,H,Y,S,T,E,R,I,A
    0x563445f7e730 ---------A   03540 DATA 7,A,M,N,E,S,I,A
    0x563445f7f230 ---------A   03550 DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    0x563445f7fa30 ---------A   03560 DATA 9,P,R,O,G,N,O,S,I,S
    0x563445f80170 ---------A   03570 DATA 8,P,A,R,A,N,O,I,D
    0x563445f4e300 ---------A   03580 DATA 9,C,A,T,A,T,O,N,I,C
    0x563445f81800 ---------A   03590 DATA 7,A,L,C,O,H,O,L
    0x563445f81f40 ---------A   03600 DATA 8,C,O,M,P,U,T,E,R
    0x563445f82670 ---------A   03610 DATA 8,T,E,R,M,I,N,A,L
    0x563445f82aa0 ---------A   03620 DATA 4,C,U,T,E
    0x563445f82e20 ---------A   03630 DATA 3,F,U,N
    0x563445f836d0 ---------A   03640 DATA10,A,C,C,E,S,S,A,B,L,E
    0x563445f83800 ---------A   03650 DATA -103
    0x563445f83850 ---------A T 03660 END
 */

/*
 * Line reference table:
 *

    Target
   Line Num.    Referencing line number (Reference is T-GOTO or G-GOSUB).
   ---------    -------------------------------------------------------------------
     01060      01950T, 02460T
     01170      01080T
     01220      02370T
     01320      01410T
     01420      01330T
     01430      01230T
     01580      02400T
     01640      01620T
     01650      01630T
     01690      01660T
     01720      01700T
     01730      01710T
     01740      01560T
     01970      01840T
     02030      01210T
     02360      01990T
     02380      01980T, 02020T, 02060T, 02080T, 02100T, 02120T, 02180T, 02220T, 
                02240T, 02280T
     02410      02390T
     03660      01960T, 02470T

 */

/* 
 * Routine Start, Target, Return and End Program Addresses 
 * 

  Rtn      Start           Target           Return             End    
  --- --------------   --------------   --------------   -------------- 
   A) 0x563445f3ce00   0x563445f3ce00   0x563445f83850   0x563445f83850 


 */



/*
 * Free line number map.
 *
     Start    End    # Lines in Gap
     -----   -----   ------------------
     00000 - 00990     100 
     03660 - 10000    6350 

 */



/*
 *  Symbol Table Listing for '/home/alan/dev/BasicGames/source/base/hangmn/basic/hangmn.bas'
 *
    A$    Array    String      {0,21} 
    B$    Array    String      {0,21} 
    E$    Array    String      {0,27} 
    E1             Integer 
    F$    Array    String      {0,2001} 
    G$             String  
    G6             Integer 
    H8$            String  
    I     Array    Integer     {0,201} 
    I              Integer 
    INT   Function Integer     args=1, float 
    K              Integer 
    L              Integer 
    N7$            String  
    O              Integer 
    O1             Integer 
    O6             Integer 
    Q              Integer 
    Q9$            String  
    R              Integer 
    RND   Function Integer     args=1, int   
    S     Array    Integer     {0,201} 
    S              Integer 
    S7             Integer 
    T              Integer 
    T$             String  
    T2             Integer 
    T2$            String  
    U$    Array    String      {0,27} 
    V              Integer 
    W              Integer 
    Y              Integer 
    Z2             Integer 

 */


/*
 * Title: Display of final 'clean' BASIC listing.
 *
 *  Listing of /home/alan/dev/BasicGames/source/base/hangmn/basic/hangmn.bas: 
 *
                   +---- Routine IDs (Empty field=Inaccessible code, A=Main program).
                   | +-- Target status (G-GOSUB, T-GOTO, B-Both GOSUB and GOTO)
        Program    | |
        Address    v v Original BASIC statement
    -------------- - - ------------------------------------------------------------------------------
    0x563445f3ce00 ---------A   01000 PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    0x563445f3cec0 ---------A   01010 REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    0x563445f3cf40 ---------A   01020 REM
    0x563445f3cfd0 ---------A   01030 RANDOMIZE
    0x563445f3d1e0 ---------A   01040 LET S7=1
    0x563445f3d360 ---------A T 01050 PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    0x563445f3d4c0 ---------A   01060 INPUT N7$
    0x563445f3d6a0 ---------A   01070 IF N7$="N" THEN 1160
    0x563445f3d750 ---------A   01080 PRINT
    0x563445f3d920 ---------A   01090 PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    0x563445f3dac0 ---------A   01100 PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    0x563445f41eb0 ---------A   01110 PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    0x563445f42040 ---------A   01120 PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    0x563445f421d0 ---------A   01130 PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    0x563445f42300 ---------A   01140 PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    0x563445f42430 ---------A   01150 PRINT"LOSE."
    0x563445f42620 ---------A T 01160 LET T2=0
    0x563445f427e0 ---------A   01170 PRINT
    0x563445f42960 ---------A   01180 PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    0x563445f42ac0 ---------A   01190 INPUT Q9$
    0x563445f42ca0 ---------A   01200 IF Q9$="Y" THEN 2020
    0x563445f42e20 ---------A T 01210 LET T2=1
    0x563445f42fd0 ---------A   01220 IF S7=0 THEN 1420
    0x563445f431d0 ---------A   01230 LET Q=0
    0x563445f433c0 ---------A   01240 LET L=1
    0x563445f435b0 ---------A   01250 DIM S(200)
    0x563445f43790 ---------A   01260 DIM F$(2000)
    0x563445f43970 ---------A   01270 DIM A$(20)
    0x563445f43b50 ---------A   01280 DIM B$(20)
    0x563445f43d30 ---------A   01290 DIM I(200)
    0x563445f43f10 ---------A   01300 LET O1=1
    0x563445f44050 ---------A T 01310 READ S(O1)
    0x563445f44250 ---------A   01320 IF S(O1)<0 THEN 1410
    0x563445f44610 ---------A   01330 LET I(O1)=L
    0x563445f44a00 ---------A   01340 FOR O=L TO L+S(O1)-1
    0x563445f44b40 ---------A   01350 READ F$(O)
    0x563445f44be0 ---------A   01360 NEXT O
    0x563445f44e00 ---------A   01370 LET Q=Q+1
    0x563445f45030 ---------A   01380 LET L=L+S(O1)
    0x563445f45240 ---------A   01390 LET O1=O1+1
    0x563445f452b0 ---------A   01400 GO TO 1310
    0x563445f454c0 ---------A T 01410 LET O1=O1-1
    0x563445f45950 ---------A T 01420 LET R=INT(1+O1*RND)
    0x563445f45b60 ---------A   01430 LET S=S(R)
    0x563445f45d70 ---------A   01440 LET O6=I(R)
    0x563445f46020 ---------A   01450 FOR Z2=1 TO S(R)
    0x563445f461d0 ---------A   01460 LET O6=I(R)
    0x563445f46540 ---------A   01470 LET A$(Z2)=F$(O6+Z2-1)
    0x563445f465f0 ---------A   01480 NEXT Z2
    0x563445f467f0 ---------A   01490 DIM U$(26)
    0x563445f469d0 ---------A   01500 DIM E$(26)
    0x563445f46bb0 ---------A   01510 LET V=1
    0x563445f46e00 ---------A   01520 FOR I=1 TO S
    0x563445f47000 ---------A   01530 LET B$(I)=" - "
    0x563445f470b0 ---------A   01540 NEXT I
    0x563445f47130 ---------A   01550 GO TO 1730
    0x563445f471a0 ----------   01560 PRINT
    0x563445f472f0 ---------A T 01570 PRINT"WHAT IS YOUR GUESS";
    0x563445f474e0 ---------A   01580 LET K=1
    0x563445f47630 ---------A   01590 INPUT G$
    0x563445f478a0 ---------A   01600 FOR Y=1 TO S
    0x563445f47a80 ---------A   01610 IF G$=A$(Y) THEN 1630
    0x563445f47b00 ---------A   01620 GO TO 1640
    0x563445f47c60 ---------A T 01630 LET K=0
    0x563445f47d10 ---------A T 01640 NEXT Y
    0x563445f482e0 ---------A   01650 IF K=0 THEN 1680
    0x563445f48480 ---------A   01660 LET E$(V)=G$
    0x563445f48690 ---------A   01670 LET V=V+1
    0x563445f488f0 ---------A T 01680 FOR T=1 TO S 
    0x563445f48ad0 ---------A   01690 IF G$=A$(T) THEN 1710
    0x563445f48b50 ---------A   01700 GO TO 1720
    0x563445f48cd0 ---------A T 01710 LET B$(T)=G$
    0x563445f48d80 ---------A T 01720 NEXT T
    0x563445f48e00 ---------A T 01730 PRINT
    0x563445f48fd0 ---------A   01740 FOR I=1 TO S
    0x563445f49130 ---------A   01750 PRINT B$(I);
    0x563445f491e0 ---------A   01760 NEXT I
    0x563445f49340 ---------A   01770 PRINT " ",
    0x563445f49670 ---------A   01780 FOR G6=1 TO V-1
    0x563445f497d0 ---------A   01790 PRINT E$(G6);
    0x563445f49880 ---------A   01800 NEXT G6
    0x563445f49900 ---------A   01810 PRINT
    0x563445f49b90 ---------A   01820 LET E1=V-1
    0x563445f49d40 ---------A   01830 IF E1<9 THEN 1960
    0x563445f49e90 ---------A   01840 PRINT"I WIN..."
    0x563445f49ff0 ---------A   01850 PRINT"THE CORRECT ANSWER IS ";
    0x563445f4a1c0 ---------A   01860 FOR Z2=1 TO S
    0x563445f4a320 ---------A   01870 PRINT A$(Z2);
    0x563445f4a3d0 ---------A   01880 NEXT Z2
    0x563445f4a470 ---------A   01890 PRINT
    0x563445f4a5d0 ---------A   01900 PRINT " DO YOU WANT TO PLAY AGAIN";
    0x563445f4a7c0 ---------A   01910 LET W=1
    0x563445f4a910 ---------A   01920 INPUT T$
    0x563445f4aaa0 ---------A   01930 LET S7=0
    0x563445f4ac70 ---------A   01940 IF T$="Y" THEN 1050
    0x563445f4acf0 ---------A   01950 GO TO 3650
    0x563445f4ad50 ---------A T 01960 PRINT
    0x563445f4af00 ---------A   01970 IF K=0 THEN 2370
    0x563445f4b0e0 ---------A   01980 IF W=1 THEN 2350
    0x563445f4b250 ---------A   01990 PRINT"DO YOU WANT TO SEE THE PICTURE";
    0x563445f4b3b0 ---------A   02000 INPUT T2$
    0x563445f4b5a0 ---------A   02010 IF T2$="N" THEN2370
    0x563445f4b6f0 ---------A T 02020 PRINT"       *-:-*"
    0x563445f4b830 ---------A   02030 PRINT"     %&     &%"
    0x563445f4b960 ---------A   02040 PRINT"    #         #"
    0x563445f4bb20 ---------A   02050 IF E1=8 THEN 2370
    0x563445f4bc60 ---------A   02060 PRINT"   ^  (.) (.)  ^"
    0x563445f4be20 ---------A   02070 IF E1=7 THEN 2370
    0x563445f4bf60 ---------A   02080 PRINT" <<<           >>>"
    0x563445f4c120 ---------A   02090 IF E1=6 THEN 2370
    0x563445f4c260 ---------A   02100 PRINT"   !    :?:    !"
    0x563445f4c420 ---------A   02110 IF E1=5 THEN 2370
    0x563445f4c570 ---------A   02120 PRINT"   *  -     -  *"
    0x563445f4c6b0 ---------A   02130 PRINT"   '   +++++   '"
    0x563445f4c7f0 ---------A   02140 PRINT"   &           &"
    0x563445f4c930 ---------A   02150 PRINT"    %%%     %%%"
    0x563445f4ca60 ---------A   02160 PRINT"      :!#$#!:"
    0x563445f4cc10 ---------A   02170 IF E1=4 THEN 2370
    0x563445f4cd50 ---------A   02180 PRINT"         I"
    0x563445f4ce80 ---------A   02190 PRINT"         I"
    0x563445f4cfb0 ---------A   02200 PRINT"         I"
    0x563445f4d170 ---------A   02210 IF E1=3 THEN 2370
    0x563445f4d2b0 ---------A   02220 PRINT"???????????????????"
    0x563445f4d460 ---------A   02230 IF E1=2 THEN 2370
    0x563445f4d5a0 ---------A   02240 PRINT"         @"
    0x563445f4d6d0 ---------A   02250 PRINT"         @"
    0x563445f4d800 ---------A   02260 PRINT"         @"
    0x563445f4d9b0 ---------A   02270 IF E1=1 THEN 2370
    0x563445f4db00 ---------A   02280 PRINT"        ( )"
    0x563445f4e450 ---------A   02290 PRINT"       (   )"
    0x563445f4e590 ---------A   02300 PRINT"      (     )"
    0x563445f4e6d0 ---------A   02310 PRINT"     (       )"
    0x563445f4e810 ---------A   02320 PRINT"    (         )"
    0x563445f4e950 ---------A   02330 PRINT"   (           )"
    0x563445f4ea80 ---------A   02340 PRINT"  (#$%&     &%$#)"
    0x563445f4ebf0 ---------A T 02350 LETW=0
    0x563445f4eda0 ---------A   02360 IF T2=0 THEN 1210
    0x563445f4ef90 ---------A T 02370 FOR I=1 TO S
    0x563445f4f1d0 ---------A   02380 IF A$(I)=B$(I) THEN 2400
    0x563445f4f250 ---------A   02390 GO TO 1570
    0x563445f4f2f0 ---------A T 02400 NEXT I
    0x563445f4f450 ---------A   02410 PRINT"VERY GOOD! YOU WIN!"
    0x563445f4f5b0 ---------A   02420 PRINT"DO YOU WANT TO PLAY AGAIN";
    0x563445f4f720 ---------A   02430 LET S7=0
    0x563445f4f880 ---------A   02440 INPUT H8$
    0x563445f4fa60 ---------A   02450 IF H8$="Y" THEN 1050
    0x563445f4fb00 ---------A   02460 GO TO 3650
    0x563445f50830 ---------A   02470 DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    0x563445f51030 ---------A   02480 DATA 9,A,P,A,T,H,E,T,I,C
    0x563445f518f0 ---------A   02490 DATA10,W,A,T,E,R,F,R,O,N,T
    0x563445f52270 ---------A   02500 DATA11,C,O,L,L,E,C,T,I,O,N,S
    0x563445f52a70 ---------A   02510 DATA 9,Y,E,S,T,E,R,D,A,Y
    0x563445f534b0 ---------A   02520 DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    0x563445f54070 ---------A   02530 DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    0x563445f547b0 ---------A   02540 DATA 8,E,M,P,H,A,S,I,S
    0x563445f54fb0 ---------A   02550 DATA 9,E,D,U,C,A,T,I,O,N
    0x563445f55870 ---------A   02560 DATA 10,R,E,C,I,P,R,O,C,A,L
    0x563445f561f0 ---------A   02570 DATA  11,D,E,C,L,A,R,A,T,I,O,N
    0x563445f56870 ---------A   02580 DATA 7,P,I,T,C,H,E,R
    0x563445f57130 ---------A   02590 DATA 10,S,U,P,E,R,S,O,N,I,C
    0x563445f57ab0 ---------A   02600 DATA 11,C,O,M,M,E,N,D,A,B,L,E
    0x563445f58130 ---------A   02610 DATA 7,P,A,S,S,A,G,E
    0x563445f589e0 ---------A   02620 DATA 10,P,E,R,C,E,N,T,A,G,E
    0x563445f58ee0 ---------A   02630 DATA 5,J,O,I,N,T
    0x563445f59620 ---------A   02640 DATA8,G,O,V,E,R,N,O,R
    0x563445f59ca0 ---------A   02650 DATA 7,P,R,O,G,R,A,M
    0x563445f5a7a0 ---------A   02660 DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    0x563445f5aee0 ---------A   02670 DATA 8,S,E,C,U,R,I,T,Y
    0x563445f5b550 ---------A   02680 DATA 7,W,E,L,C,O,M,E
    0x563445f5b990 ---------A   02690 DATA 4,Z,E,R,O
    0x563445f5c190 ---------A   02700 DATA9,P,O,T,E,N,T,I,A,L
    0x563445f5c8d0 ---------A   02710 DATA 8,C,O,M,P,O,S,E,D
    0x563445f5d250 ---------A   02720 DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    0x563445f5d980 ---------A   02730 DATA 8,D,I,R,E,C,T,O,R
    0x563445f5df40 ---------A   02740 DATA 6,R,E,S,U,L,T
    0x563445f5e680 ---------A   02750 DATA 8,C,H,I,L,D,R,E,N
    0x563445f5ee80 ---------A   02760 DATA 9,C,L,A,S,S,R,O,O,M
    0x563445f5f5c0 ---------A   02770 DATA 8,E,C,O,N,O,M,I,C
    0x563445f5fdc0 ---------A   02780 DATA 9,E,Q,U,I,V,O,C,A,L
    0x563445f60440 ---------A   02790 DATA 7,H,O,S,T,I,L,E
    0x563445f60ac0 ---------A   02800 DATA 7,R,O,G,U,I,S,H
    0x563445f612c0 ---------A   02810 DATA 9,M,I,G,R,A,T,I,O,N
    0x563445f61dc0 ---------A   02820 DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    0x563445f62430 ---------A   02830 DATA 7,C,U,R,S,O,R,Y
    0x563445f62930 ---------A   02840 DATA 5,M,O,N,E,Y
    0x563445f62fb0 ---------A   02850 DATA 7,A,B,S,O,L,V,E
    0x563445f639f0 ---------A   02860 DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    0x563445f64080 ---------A   02870 DATA 7,I,N,S,I,P,I,D
    0x563445f64c40 ---------A   02880 DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    0x563445f65500 ---------A   02890 DATA 10,N,E,G,O,T,I,A,B,L,E
    0x563445f65b70 ---------A   02900 DATA 7,D,E,P,O,S,I,T
    0x563445f65fb0 ---------A   02910 DATA 4,L,A,M,P
    0x563445f667b0 ---------A   02920 DATA 9,Q,U,A,L,I,F,I,E,D
    0x563445f67130 ---------A   02930 DATA 11,M,A,I,N,T,E,N,A,N,C,E
    0x563445f677b0 ---------A   02940 DATA 7,F,U,N,E,R,A,L
    0x563445f67fa0 ---------A   02950 DATA 9,C,A,R,P,E,N,T,E,R
    0x563445f684a0 ---------A   02960 DATA 5,F,U,G,U,E
    0x563445f68e10 ---------A   02970 DATA 11,M,A,N,U,F,A,C,T,U,R,E
    0x563445f693d0 ---------A   02980 DATA 6,B,A,K,E,R,Y
    0x563445f69b00 ---------A   02990 DATA 8,M,I,L,I,T,A,R,Y
    0x563445f6a000 ---------A   03000 DATA 5,G,U,A,R,D
    0x563445f6a800 ---------A   03010 DATA 9,T,E,C,H,N,I,C,A,L
    0x563445f6af40 ---------A   03020 DATA 8,S,Y,M,P,H,O,N,Y
    0x563445f6b5c0 ---------A   03030 DATA 7,A,D,V,A,N,C,E
    0x563445f6bc40 ---------A   03040 DATA 7,M,I,N,I,M,U,M
    0x563445f6c440 ---------A   03050 DATA 9,A,L,E,R,T,N,E,S,S
    0x563445f6cab0 ---------A   03060 DATA 7,Q,U,A,R,T,E,T
    0x563445f6d070 ---------A   03070 DATA 6,P,O,L,I,S,H
    0x563445f6d6f0 ---------A   03080 DATA 7,B,E,N,E,F,I,T
    0x563445f6de20 ---------A   03090 DATA 8,C,O,M,P,O,S,E,R
    0x563445f6e250 ---------A   03100 DATA 4,H,E,R,O
    0x563445f6e800 ---------A   03110 DATA 6,D,E,S,I,S,T
    0x563445f6edb0 ---------A   03120 DATA 6,C,I,T,I,E,S
    0x563445f6f1e0 ---------A   03130 DATA 4,S,L,U,M
    0x563445f6f790 ---------A   03140 DATA 6,R,E,G,I,M,E
    0x563445f6fc80 ---------A   03150 DATA 5,D,O,U,B,T
    0x563445f700c0 ---------A   03160 DATA 4,J,O,K,E
    0x563445f708c0 ---------A   03170 DATA 9,P,R,O,T,E,S,T,E,R
    0x563445f70f30 ---------A   03180 DATA 7,S,I,M,I,L,A,R
    0x563445f71360 ---------A   03190 DATA 4,C,U,R,B
    0x563445f71860 ---------A   03200 DATA 5,E,L,I,T,E
    0x563445f71f90 ---------A   03210 DATA 8,M,E,D,I,C,A,R,E
    0x563445f72480 ---------A   03220 DATA 5,M,A,Y,O,R
    0x563445f728b0 ---------A   03230 DATA 4,F,U,N,D
    0x563445f72e60 ---------A   03240 DATA 6,A,C,T,I,O,N
    0x563445f73410 ---------A   03250 DATA 6,C,L,O,U,D,Y
    0x563445f73840 ---------A   03260 DATA 4,N,E,W,S
    0x563445f73d30 ---------A   03270 DATA 5,Y,O,U,N,G
    0x563445f74230 ---------A   03280 DATA 5,M,A,F,I,A
    0x563445f74a30 ---------A   03290 DATA 9,G,U,E,R,R,I,L,L,A
    0x563445f750b0 ---------A   03300 DATA 7,R,E,Q,U,E,S,T
    0x563445f75720 ---------A   03310 DATA 7,G,O,U,R,M,E,T
    0x563445f75aa0 ---------A   03320 DATA 3,P,U,B
    0x563445f761d0 ---------A   03330 DATA 8,S,K,I,R,M,I,S,H
    0x563445f766c0 ---------A   03340 DATA 5,B,L,A,C,K
    0x563445f76bc0 ---------A   03350 DATA 5,W,H,I,T,E
    0x563445f77230 ---------A   03360 DATA 7,H,I,S,T,O,R,Y
    0x563445f777f0 ---------A   03370 DATA 6,P,O,L,I,C,Y
    0x563445f77ff0 ---------A   03380 DATA 9,G,Y,M,N,A,S,I,U,M
    0x563445f78670 ---------A   03390 DATA 7,V,E,H,I,C,L,E
    0x563445f78e60 ---------A   03400 DATA 9,A,U,T,O,M,O,T,O,N
    0x563445f79410 ---------A   03410 DATA 6,B,L,I,G,H,T
    0x563445f79780 ---------A   03420 DATA 3,S,I,X
    0x563445f79bc0 ---------A   03430 DATA 4,C,A,L,L
    0x563445f7a3c0 ---------A   03440 DATA 9,P,S,Y,C,H,O,T,I,C
    0x563445f7ab00 ---------A   03450 DATA 8,N,E,U,R,O,T,I,C
    0x563445f7b180 ---------A   03460 DATA 7,A,N,X,I,E,T,Y
    0x563445f7b800 ---------A   03470 DATA 7,S,Y,M,P,T,O,M
    0x563445f7c2f0 ---------A   03480 DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    0x563445f7c8b0 ---------A   03490 DATA 6,P,H,O,B,I,A
    0x563445f7d0b0 ---------A   03500 DATA 9,O,B,S,E,S,S,I,O,N
    0x563445f7d970 ---------A   03510 DATA10,C,O,M,P,U,L,S,I,O,N
    0x563445f7e0b0 ---------A   03520 DATA 8,H,Y,S,T,E,R,I,A
    0x563445f7e730 ---------A   03530 DATA 7,A,M,N,E,S,I,A
    0x563445f7f230 ---------A   03540 DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    0x563445f7fa30 ---------A   03550 DATA 9,P,R,O,G,N,O,S,I,S
    0x563445f80170 ---------A   03560 DATA 8,P,A,R,A,N,O,I,D
    0x563445f4e300 ---------A   03570 DATA 9,C,A,T,A,T,O,N,I,C
    0x563445f81800 ---------A   03580 DATA 7,A,L,C,O,H,O,L
    0x563445f81f40 ---------A   03590 DATA 8,C,O,M,P,U,T,E,R
    0x563445f82670 ---------A   03600 DATA 8,T,E,R,M,I,N,A,L
    0x563445f82aa0 ---------A   03610 DATA 4,C,U,T,E
    0x563445f82e20 ---------A   03620 DATA 3,F,U,N
    0x563445f836d0 ---------A   03630 DATA10,A,C,C,E,S,S,A,B,L,E
    0x563445f83800 ---------A   03640 DATA -103
    0x563445f83850 ---------A T 03650 END
 */

//---------------------------------------------------------------------------
// $Header$ 
//
// NOTE: This program has been automatically tranlated by b2c
//
// $Log$ 
// 
//---------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
//---------------------------------------------------------------------------
// Global data area.
//---------------------------------------------------------------------------
char* data_02470s[]={"10","I","M","P","O","S","S","I","B","L","E","5","I","D","I","O","T"};
char* data_02480s[]={"9","A","P","A","T","H","E","T","I","C"};
char* data_02490s[]={"10","W","A","T","E","R","F","R","O","N","T"};
char* data_02500s[]={"11","C","O","L","L","E","C","T","I","O","N","S"};
char* data_02510s[]={"9","Y","E","S","T","E","R","D","A","Y"};
char* data_02520s[]={"12","K","I","N","D","E","R","G","A","R","T","E","N"};
char* data_02530s[]={"14","A","D","M","I","N","I","S","T","R","A","T","I","O","N"};
char* data_02540s[]={"8","E","M","P","H","A","S","I","S"};
char* data_02550s[]={"9","E","D","U","C","A","T","I","O","N"};
char* data_02560s[]={"10","R","E","C","I","P","R","O","C","A","L"};
char* data_02570s[]={"11","D","E","C","L","A","R","A","T","I","O","N"};
char* data_02580s[]={"7","P","I","T","C","H","E","R"};
char* data_02590s[]={"10","S","U","P","E","R","S","O","N","I","C"};
char* data_02600s[]={"11","C","O","M","M","E","N","D","A","B","L","E"};
char* data_02610s[]={"7","P","A","S","S","A","G","E"};
char* data_02620s[]={"10","P","E","R","C","E","N","T","A","G","E"};
char* data_02630s[]={"5","J","O","I","N","T"};
char* data_02640s[]={"8","G","O","V","E","R","N","O","R"};
char* data_02650s[]={"7","P","R","O","G","R","A","M"};
char* data_02660s[]={"13","D","I","S","A","P","P","E","A","R","A","N","C","E"};
char* data_02670s[]={"8","S","E","C","U","R","I","T","Y"};
char* data_02680s[]={"7","W","E","L","C","O","M","E"};
char* data_02690s[]={"4","Z","E","R","O"};
char* data_02700s[]={"9","P","O","T","E","N","T","I","A","L"};
char* data_02710s[]={"8","C","O","M","P","O","S","E","D"};
char* data_02720s[]={"11","P","O","S","S","I","B","I","L","I","T","Y"};
char* data_02730s[]={"8","D","I","R","E","C","T","O","R"};
char* data_02740s[]={"6","R","E","S","U","L","T"};
char* data_02750s[]={"8","C","H","I","L","D","R","E","N"};
char* data_02760s[]={"9","C","L","A","S","S","R","O","O","M"};
char* data_02770s[]={"8","E","C","O","N","O","M","I","C"};
char* data_02780s[]={"9","E","Q","U","I","V","O","C","A","L"};
char* data_02790s[]={"7","H","O","S","T","I","L","E"};
char* data_02800s[]={"7","R","O","G","U","I","S","H"};
char* data_02810s[]={"9","M","I","G","R","A","T","I","O","N"};
char* data_02820s[]={"13","A","U","T","H","O","R","I","Z","A","T","I","O","N"};
char* data_02830s[]={"7","C","U","R","S","O","R","Y"};
char* data_02840s[]={"5","M","O","N","E","Y"};
char* data_02850s[]={"7","A","B","S","O","L","V","E"};
char* data_02860s[]={"12","P","R","E","R","E","Q","U","I","S","I","T","E"};
char* data_02870s[]={"7","I","N","S","I","P","I","D"};
char* data_02880s[]={"14","C","O","N","G","L","O","M","E","R","A","T","I","O","N"};
char* data_02890s[]={"10","N","E","G","O","T","I","A","B","L","E"};
char* data_02900s[]={"7","D","E","P","O","S","I","T"};
char* data_02910s[]={"4","L","A","M","P"};
char* data_02920s[]={"9","Q","U","A","L","I","F","I","E","D"};
char* data_02930s[]={"11","M","A","I","N","T","E","N","A","N","C","E"};
char* data_02940s[]={"7","F","U","N","E","R","A","L"};
char* data_02950s[]={"9","C","A","R","P","E","N","T","E","R"};
char* data_02960s[]={"5","F","U","G","U","E"};
char* data_02970s[]={"11","M","A","N","U","F","A","C","T","U","R","E"};
char* data_02980s[]={"6","B","A","K","E","R","Y"};
char* data_02990s[]={"8","M","I","L","I","T","A","R","Y"};
char* data_03000s[]={"5","G","U","A","R","D"};
char* data_03010s[]={"9","T","E","C","H","N","I","C","A","L"};
char* data_03020s[]={"8","S","Y","M","P","H","O","N","Y"};
char* data_03030s[]={"7","A","D","V","A","N","C","E"};
char* data_03040s[]={"7","M","I","N","I","M","U","M"};
char* data_03050s[]={"9","A","L","E","R","T","N","E","S","S"};
char* data_03060s[]={"7","Q","U","A","R","T","E","T"};
char* data_03070s[]={"6","P","O","L","I","S","H"};
char* data_03080s[]={"7","B","E","N","E","F","I","T"};
char* data_03090s[]={"8","C","O","M","P","O","S","E","R"};
char* data_03100s[]={"4","H","E","R","O"};
char* data_03110s[]={"6","D","E","S","I","S","T"};
char* data_03120s[]={"6","C","I","T","I","E","S"};
char* data_03130s[]={"4","S","L","U","M"};
char* data_03140s[]={"6","R","E","G","I","M","E"};
char* data_03150s[]={"5","D","O","U","B","T"};
char* data_03160s[]={"4","J","O","K","E"};
char* data_03170s[]={"9","P","R","O","T","E","S","T","E","R"};
char* data_03180s[]={"7","S","I","M","I","L","A","R"};
char* data_03190s[]={"4","C","U","R","B"};
char* data_03200s[]={"5","E","L","I","T","E"};
char* data_03210s[]={"8","M","E","D","I","C","A","R","E"};
char* data_03220s[]={"5","M","A","Y","O","R"};
char* data_03230s[]={"4","F","U","N","D"};
char* data_03240s[]={"6","A","C","T","I","O","N"};
char* data_03250s[]={"6","C","L","O","U","D","Y"};
char* data_03260s[]={"4","N","E","W","S"};
char* data_03270s[]={"5","Y","O","U","N","G"};
char* data_03280s[]={"5","M","A","F","I","A"};
char* data_03290s[]={"9","G","U","E","R","R","I","L","L","A"};
char* data_03300s[]={"7","R","E","Q","U","E","S","T"};
char* data_03310s[]={"7","G","O","U","R","M","E","T"};
char* data_03320s[]={"3","P","U","B"};
char* data_03330s[]={"8","S","K","I","R","M","I","S","H"};
char* data_03340s[]={"5","B","L","A","C","K"};
char* data_03350s[]={"5","W","H","I","T","E"};
char* data_03360s[]={"7","H","I","S","T","O","R","Y"};
char* data_03370s[]={"6","P","O","L","I","C","Y"};
char* data_03380s[]={"9","G","Y","M","N","A","S","I","U","M"};
char* data_03390s[]={"7","V","E","H","I","C","L","E"};
char* data_03400s[]={"9","A","U","T","O","M","O","T","O","N"};
char* data_03410s[]={"6","B","L","I","G","H","T"};
char* data_03420s[]={"3","S","I","X"};
char* data_03430s[]={"4","C","A","L","L"};
char* data_03440s[]={"9","P","S","Y","C","H","O","T","I","C"};
char* data_03450s[]={"8","N","E","U","R","O","T","I","C"};
char* data_03460s[]={"7","A","N","X","I","E","T","Y"};
char* data_03470s[]={"7","S","Y","M","P","T","O","M"};
char* data_03480s[]={"13","H","Y","P","O","C","H","O","N","D","R","I","A","C"};
char* data_03490s[]={"6","P","H","O","B","I","A"};
char* data_03500s[]={"9","O","B","S","E","S","S","I","O","N"};
char* data_03510s[]={"10","C","O","M","P","U","L","S","I","O","N"};
char* data_03520s[]={"8","H","Y","S","T","E","R","I","A"};
char* data_03530s[]={"7","A","M","N","E","S","I","A"};
char* data_03540s[]={"13","S","C","H","I","Z","O","P","H","R","E","N","I","A"};
char* data_03550s[]={"9","P","R","O","G","N","O","S","I","S"};
char* data_03560s[]={"8","P","A","R","A","N","O","I","D"};
char* data_03570s[]={"9","C","A","T","A","T","O","N","I","C"};
char* data_03580s[]={"7","A","L","C","O","H","O","L"};
char* data_03590s[]={"8","C","O","M","P","U","T","E","R"};
char* data_03600s[]={"8","T","E","R","M","I","N","A","L"};
char* data_03610s[]={"4","C","U","T","E"};
char* data_03620s[]={"3","F","U","N"};
char* data_03630s[]={"10","A","C","C","E","S","S","A","B","L","E"};
char* data_03640s[]={"-033"};
//---------------------------------------------------------------------------




typedef enum {TYPE_None,TYPE_Integer,TYPE_Float,TYPE_String}t_type;
typedef struct{
    int    LineNum;
    int    Size;
    char** SData;
}t_data;
t_data ProgramData[] = {
    { 2470, 17,data_02470s},
    { 2480, 10,data_02480s},
    { 2490, 11,data_02490s},
    { 2500, 12,data_02500s},
    { 2510, 10,data_02510s},
    { 2520, 13,data_02520s},
    { 2530, 15,data_02530s},
    { 2540,  9,data_02540s},
    { 2550, 10,data_02550s},
    { 2560, 11,data_02560s},
    { 2570, 12,data_02570s},
    { 2580,  8,data_02580s},
    { 2590, 11,data_02590s},
    { 2600, 12,data_02600s},
    { 2610,  8,data_02610s},
    { 2620, 11,data_02620s},
    { 2630,  6,data_02630s},
    { 2640,  9,data_02640s},
    { 2650,  8,data_02650s},
    { 2660, 14,data_02660s},
    { 2670,  9,data_02670s},
    { 2680,  8,data_02680s},
    { 2690,  5,data_02690s},
    { 2700, 10,data_02700s},
    { 2710,  9,data_02710s},
    { 2720, 12,data_02720s},
    { 2730,  9,data_02730s},
    { 2740,  7,data_02740s},
    { 2750,  9,data_02750s},
    { 2760, 10,data_02760s},
    { 2770,  9,data_02770s},
    { 2780, 10,data_02780s},
    { 2790,  8,data_02790s},
    { 2800,  8,data_02800s},
    { 2810, 10,data_02810s},
    { 2820, 14,data_02820s},
    { 2830,  8,data_02830s},
    { 2840,  6,data_02840s},
    { 2850,  8,data_02850s},
    { 2860, 13,data_02860s},
    { 2870,  8,data_02870s},
    { 2880, 15,data_02880s},
    { 2890, 11,data_02890s},
    { 2900,  8,data_02900s},
    { 2910,  5,data_02910s},
    { 2920, 10,data_02920s},
    { 2930, 12,data_02930s},
    { 2940,  8,data_02940s},
    { 2950, 10,data_02950s},
    { 2960,  6,data_02960s},
    { 2970, 12,data_02970s},
    { 2980,  7,data_02980s},
    { 2990,  9,data_02990s},
    { 3000,  6,data_03000s},
    { 3010, 10,data_03010s},
    { 3020,  9,data_03020s},
    { 3030,  8,data_03030s},
    { 3040,  8,data_03040s},
    { 3050, 10,data_03050s},
    { 3060,  8,data_03060s},
    { 3070,  7,data_03070s},
    { 3080,  8,data_03080s},
    { 3090,  9,data_03090s},
    { 3100,  5,data_03100s},
    { 3110,  7,data_03110s},
    { 3120,  7,data_03120s},
    { 3130,  5,data_03130s},
    { 3140,  7,data_03140s},
    { 3150,  6,data_03150s},
    { 3160,  5,data_03160s},
    { 3170, 10,data_03170s},
    { 3180,  8,data_03180s},
    { 3190,  5,data_03190s},
    { 3200,  6,data_03200s},
    { 3210,  9,data_03210s},
    { 3220,  6,data_03220s},
    { 3230,  5,data_03230s},
    { 3240,  7,data_03240s},
    { 3250,  7,data_03250s},
    { 3260,  5,data_03260s},
    { 3270,  6,data_03270s},
    { 3280,  6,data_03280s},
    { 3290, 10,data_03290s},
    { 3300,  8,data_03300s},
    { 3310,  8,data_03310s},
    { 3320,  4,data_03320s},
    { 3330,  9,data_03330s},
    { 3340,  6,data_03340s},
    { 3350,  6,data_03350s},
    { 3360,  8,data_03360s},
    { 3370,  7,data_03370s},
    { 3380, 10,data_03380s},
    { 3390,  8,data_03390s},
    { 3400, 10,data_03400s},
    { 3410,  7,data_03410s},
    { 3420,  4,data_03420s},
    { 3430,  5,data_03430s},
    { 3440, 10,data_03440s},
    { 3450,  9,data_03450s},
    { 3460,  8,data_03460s},
    { 3470,  8,data_03470s},
    { 3480, 14,data_03480s},
    { 3490,  7,data_03490s},
    { 3500, 10,data_03500s},
    { 3510, 11,data_03510s},
    { 3520,  9,data_03520s},
    { 3530,  8,data_03530s},
    { 3540, 14,data_03540s},
    { 3550, 10,data_03550s},
    { 3560,  9,data_03560s},
    { 3570, 10,data_03570s},
    { 3580,  8,data_03580s},
    { 3590,  9,data_03590s},
    { 3600,  9,data_03600s},
    { 3610,  5,data_03610s},
    { 3620,  4,data_03620s},
    { 3630, 11,data_03630s},
    { 3640,  1,data_03640s},
    {    0,  0,nullptr       }
};

#include "intrinsics.h"


//---------------------------------------------------------------------------
// Global variable area.
//
// NOTE: Variable names are long to allow for easy editing.
//---------------------------------------------------------------------------
char* A_str_arr[21];// Comments?
char* B_str_arr[21];// Comments?
char* E_str_arr[27];// Comments?
int   E1_int;       // Comments?
char* F_str_arr[2001];  // Comments?
char* G_str;        // Comments?
int   G6_int;       // Comments?
char* H8_str;       // Comments?
int   I_int_arr[201];   // Comments?
int   I_int;        // Comments?
int   K_int;        // Comments?
int   L_int;        // Comments?
char* N7_str;       // Comments?
int   O_int;        // Comments?
int   O1_int;       // Comments?
int   O6_int;       // Comments?
int   Q_int;        // Comments?
char* Q9_str;       // Comments?
int   R_int;        // Comments?
int   S_int_arr[201];   // Comments?
int   S_int;        // Comments?
int   S7_int;       // Comments?
int   T_int;        // Comments?
char* T_str;        // Comments?
int   T2_int;       // Comments?
char* T2_str;       // Comments?
char* U_str_arr[27];// Comments?
int   V_int;        // Comments?
int   W_int;        // Comments?
int   Y_int;        // Comments?
int   Z2_int;       // Comments?
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
char* GLBpStr=nullptr;
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
// Subroutine Prototypes.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Program Functions.
//---------------------------------------------------------------------------
//---------------------------------------------------------------------------
// Program Subroutines.
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------
// Main Program.
//---------------------------------------------------------------------------
#pragma argsused
int main(int argc,char *argv[])
{
    // 01000 PRINT "BASIC LIBRARY--'HANGMN'--18-JUL-70"
    b2c_fprintf(stdout,"BASIC LIBRARY--'HANGMN'--18-JUL-70"); b2c_fprintf(stdout,"\n");
    // 01010 REM  *  *  *  *  *  *  *  MAIN PROGRAM  *  *  *  *  *  *  *  *  *  *
    // 01020 REM
    // 01030 RANDOMIZE
    RANDOMIZE();
    // 01040 LET S7=1
    S7_int = 1;

  Lbl_01050:
    // 01050 PRINT"DO YOU WANT TO SEE THE INSTRUCTIONS";
    b2c_fprintf(stdout,"DO YOU WANT TO SEE THE INSTRUCTIONS"); 
    // 01060 INPUT N7$
    // Start of Basic INPUT statement 01060
    printf(" ? ");
    char inpbuf_01060[100];
    if(fgets(inpbuf_01060,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01060=strtok(inpbuf_01060," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01060==nullptr){
            N7_str = "";
        }else{
            N7_str = ps_01060;
        };
    }; // End of Basic INPUT statement 01060
    // 01070 IF N7$="N" THEN 1160
    if(strcmp(N7_str,"N")==0)goto Lbl_01160;
    // 01080 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01090 PRINT"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"
    b2c_fprintf(stdout,"THIS GAME IS SOMETHING LIKE HANGMAN.  THE MACHINE CHOOSES"); b2c_fprintf(stdout,"\n");
    // 01100 PRINT"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"
    b2c_fprintf(stdout,"A WORD OUT OF ITS STORAGE AND YOU ARE REQUIRED TO GUESS THE"); b2c_fprintf(stdout,"\n");
    // 01110 PRINT"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"
    b2c_fprintf(stdout,"WORD LETTER BY LETTER.  AFTER EACH MISTAKE, YOU WILL BE ASKED"); b2c_fprintf(stdout,"\n");
    // 01120 PRINT"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"
    b2c_fprintf(stdout,"WHETHER YOU WANT TO SEE A PICTURE OF YOURSELF.  THE MORE"); b2c_fprintf(stdout,"\n");
    // 01130 PRINT"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"
    b2c_fprintf(stdout,"MISTAKES YOU MAKE, THE LESS OF YOU THERE WILL BE. UNTIL"); b2c_fprintf(stdout,"\n");
    // 01140 PRINT"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"
    b2c_fprintf(stdout,"AFTER 9 MISTAKES, YOU WILL BE ALL GONE, AND YOU WILL"); b2c_fprintf(stdout,"\n");
    // 01150 PRINT"LOSE."
    b2c_fprintf(stdout,"LOSE."); b2c_fprintf(stdout,"\n");

  Lbl_01160:
    // 01160 LET T2=0
    T2_int = 0;
    // 01170 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01180 PRINT"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS";
    b2c_fprintf(stdout,"WOULD YOU LIKE TO SEE THE WHOLE PICTURE BEFORE THE GAME STARTS"); 
    // 01190 INPUT Q9$
    // Start of Basic INPUT statement 01190
    printf(" ? ");
    char inpbuf_01190[100];
    if(fgets(inpbuf_01190,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01190=strtok(inpbuf_01190," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01190==nullptr){
            Q9_str = "";
        }else{
            Q9_str = ps_01190;
        };
    }; // End of Basic INPUT statement 01190
    // 01200 IF Q9$="Y" THEN 2020
    if(strcmp(Q9_str,"Y")==0)goto Lbl_02020;

  Lbl_01210:
    // 01210 LET T2=1
    T2_int = 1;
    // 01220 IF S7=0 THEN 1420
    if(S7_int==0)goto Lbl_01420;
    // 01230 LET Q=0
    Q_int = 0;
    // 01240 LET L=1
    L_int = 1;
    // 01250 DIM S(200)
    // 01260 DIM F$(2000)
    // 01270 DIM A$(20)
    // 01280 DIM B$(20)
    // 01290 DIM I(200)
    // 01300 LET O1=1
    O1_int = 1;

  Lbl_01310:
    // 01310 READ S(O1)
    S_int_arr[(int)O1_int] = Get_Data_Int();
    // 01320 IF S(O1)<0 THEN 1410
    if(S_int_arr[(int)O1_int]<0)goto Lbl_01410;
    // 01330 LET I(O1)=L
    I_int_arr[(int)O1_int] = L_int;
    // 01340 FOR O=L TO L+S(O1)-1
    for(O_int=L_int;O_int<=L_int+S_int_arr[(int)O1_int]-1;O_int++){
        // 01350 READ F$(O)
        F_str_arr[(int)O_int] = Get_Data_String();
        // 01360 NEXT O
        int dummy_1360=0; // Ignore this line.
    }; // End-For(O_int)
    // 01370 LET Q=Q+1
    Q_int = Q_int+1;
    // 01380 LET L=L+S(O1)
    L_int = L_int+S_int_arr[(int)O1_int];
    // 01390 LET O1=O1+1
    O1_int = O1_int+1;
    // 01400 GO TO 1310
    goto Lbl_01310;

  Lbl_01410:
    // 01410 LET O1=O1-1
    O1_int = O1_int-1;

  Lbl_01420:
    // 01420 LET R=INT(1+O1*RND)
    R_int = INT(1+O1_int*RND());
    // 01430 LET S=S(R)
    S_int = S_int_arr[(int)R_int];
    // 01440 LET O6=I(R)
    O6_int = I_int_arr[(int)R_int];
    // 01450 FOR Z2=1 TO S(R)
    for(Z2_int=1;Z2_int<=S_int_arr[(int)R_int];Z2_int++){
        // 01460 LET O6=I(R)
        O6_int = I_int_arr[(int)R_int];
        // 01470 LET A$(Z2)=F$(O6+Z2-1)
        GLBpStr=F_str_arr[(int)O6_int+Z2_int-1];
        A_str_arr[(int)Z2_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01480 NEXT Z2
        int dummy_1480=0; // Ignore this line.
    }; // End-For(Z2_int)
    // 01490 DIM U$(26)
    // 01500 DIM E$(26)
    // 01510 LET V=1
    V_int = 1;
    // 01520 FOR I=1 TO S
    for(I_int=1;I_int<=S_int;I_int++){
        // 01530 LET B$(I)=" - "
        GLBpStr=" - ";
        B_str_arr[(int)I_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
        // 01540 NEXT I
        int dummy_1540=0; // Ignore this line.
    }; // End-For(I_int)
    // 01550 GO TO 1730
    goto Lbl_01730;

  Lbl_01570:
    // 01570 PRINT"WHAT IS YOUR GUESS";
    b2c_fprintf(stdout,"WHAT IS YOUR GUESS"); 
    // 01580 LET K=1
    K_int = 1;
    // 01590 INPUT G$
    // Start of Basic INPUT statement 01590
    printf(" ? ");
    char inpbuf_01590[100];
    if(fgets(inpbuf_01590,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01590=strtok(inpbuf_01590," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01590==nullptr){
            G_str = "";
        }else{
            G_str = ps_01590;
        };
    }; // End of Basic INPUT statement 01590
    // 01600 FOR Y=1 TO S
    for(Y_int=1;Y_int<=S_int;Y_int++){
        // 01610 IF G$=A$(Y) THEN 1630
        if(strcmp(G_str,A_str_arr[(int)Y_int])==0)goto Lbl_01630;
        // 01620 GO TO 1640
        goto Lbl_01640;

  Lbl_01630:
        // 01630 LET K=0
        K_int = 0;

  Lbl_01640:
        // 01640 NEXT Y
        int dummy_1640=0; // Ignore this line.
    }; // End-For(Y_int)
    // 01650 IF K=0 THEN 1680
    if(K_int==0)goto Lbl_01680;
    // 01660 LET E$(V)=G$
    GLBpStr=G_str;
    E_str_arr[(int)V_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;
    // 01670 LET V=V+1
    V_int = V_int+1;

  Lbl_01680:
    // 01680 FOR T=1 TO S 
    for(T_int=1;T_int<=S_int;T_int++){
        // 01690 IF G$=A$(T) THEN 1710
        if(strcmp(G_str,A_str_arr[(int)T_int])==0)goto Lbl_01710;
        // 01700 GO TO 1720
        goto Lbl_01720;

  Lbl_01710:
        // 01710 LET B$(T)=G$
        GLBpStr=G_str;
        B_str_arr[(int)T_int] = (GLBpStr==GLB_StrCatBuf)?strdup(GLBpStr):GLBpStr;

  Lbl_01720:
        // 01720 NEXT T
        int dummy_1720=0; // Ignore this line.
    }; // End-For(T_int)

  Lbl_01730:
    // 01730 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01740 FOR I=1 TO S
    for(I_int=1;I_int<=S_int;I_int++){
        // 01750 PRINT B$(I);
        b2c_fprintf(stdout,"%s",B_str_arr[(int)I_int]); 
        // 01760 NEXT I
        int dummy_1760=0; // Ignore this line.
    }; // End-For(I_int)
    // 01770 PRINT " ",
    b2c_fprintf(stdout," @"); 
    // 01780 FOR G6=1 TO V-1
    for(G6_int=1;G6_int<=V_int-1;G6_int++){
        // 01790 PRINT E$(G6);
        b2c_fprintf(stdout,"%s",E_str_arr[(int)G6_int]); 
        // 01800 NEXT G6
        int dummy_1800=0; // Ignore this line.
    }; // End-For(G6_int)
    // 01810 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01820 LET E1=V-1
    E1_int = V_int-1;
    // 01830 IF E1<9 THEN 1960
    if(E1_int<9)goto Lbl_01960;
    // 01840 PRINT"I WIN..."
    b2c_fprintf(stdout,"I WIN..."); b2c_fprintf(stdout,"\n");
    // 01850 PRINT"THE CORRECT ANSWER IS ";
    b2c_fprintf(stdout,"THE CORRECT ANSWER IS "); 
    // 01860 FOR Z2=1 TO S
    for(Z2_int=1;Z2_int<=S_int;Z2_int++){
        // 01870 PRINT A$(Z2);
        b2c_fprintf(stdout,"%s",A_str_arr[(int)Z2_int]); 
        // 01880 NEXT Z2
        int dummy_1880=0; // Ignore this line.
    }; // End-For(Z2_int)
    // 01890 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01900 PRINT " DO YOU WANT TO PLAY AGAIN";
    b2c_fprintf(stdout," DO YOU WANT TO PLAY AGAIN"); 
    // 01910 LET W=1
    W_int = 1;
    // 01920 INPUT T$
    // Start of Basic INPUT statement 01920
    printf(" ? ");
    char inpbuf_01920[100];
    if(fgets(inpbuf_01920,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_01920=strtok(inpbuf_01920," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_01920==nullptr){
            T_str = "";
        }else{
            T_str = ps_01920;
        };
    }; // End of Basic INPUT statement 01920
    // 01930 LET S7=0
    S7_int = 0;
    // 01940 IF T$="Y" THEN 1050
    if(strcmp(T_str,"Y")==0)goto Lbl_01050;
    // 01950 GO TO 3650
    goto Lbl_03650;

  Lbl_01960:
    // 01960 PRINT
    b2c_fprintf(stdout,""); b2c_fprintf(stdout,"\n");
    // 01970 IF K=0 THEN 2370
    if(K_int==0)goto Lbl_02370;
    // 01980 IF W=1 THEN 2350
    if(W_int==1)goto Lbl_02350;
    // 01990 PRINT"DO YOU WANT TO SEE THE PICTURE";
    b2c_fprintf(stdout,"DO YOU WANT TO SEE THE PICTURE"); 
    // 02000 INPUT T2$
    // Start of Basic INPUT statement 02000
    printf(" ? ");
    char inpbuf_02000[100];
    if(fgets(inpbuf_02000,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02000=strtok(inpbuf_02000," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02000==nullptr){
            T2_str = "";
        }else{
            T2_str = ps_02000;
        };
    }; // End of Basic INPUT statement 02000
    // 02010 IF T2$="N" THEN2370
    if(strcmp(T2_str,"N")==0)goto Lbl_02370;

  Lbl_02020:
    // 02020 PRINT"       *-:-*"
    b2c_fprintf(stdout,"       *-:-*"); b2c_fprintf(stdout,"\n");
    // 02030 PRINT"     %&     &%"
    b2c_fprintf(stdout,"     %%&     &%%"); b2c_fprintf(stdout,"\n");
    // 02040 PRINT"    #         #"
    b2c_fprintf(stdout,"    #         #"); b2c_fprintf(stdout,"\n");
    // 02050 IF E1=8 THEN 2370
    if(E1_int==8)goto Lbl_02370;
    // 02060 PRINT"   ^  (.) (.)  ^"
    b2c_fprintf(stdout,"   ^  (.) (.)  ^"); b2c_fprintf(stdout,"\n");
    // 02070 IF E1=7 THEN 2370
    if(E1_int==7)goto Lbl_02370;
    // 02080 PRINT" <<<           >>>"
    b2c_fprintf(stdout," <<<           >>>"); b2c_fprintf(stdout,"\n");
    // 02090 IF E1=6 THEN 2370
    if(E1_int==6)goto Lbl_02370;
    // 02100 PRINT"   !    :?:    !"
    b2c_fprintf(stdout,"   !    :?:    !"); b2c_fprintf(stdout,"\n");
    // 02110 IF E1=5 THEN 2370
    if(E1_int==5)goto Lbl_02370;
    // 02120 PRINT"   *  -     -  *"
    b2c_fprintf(stdout,"   *  -     -  *"); b2c_fprintf(stdout,"\n");
    // 02130 PRINT"   '   +++++   '"
    b2c_fprintf(stdout,"   '   +++++   '"); b2c_fprintf(stdout,"\n");
    // 02140 PRINT"   &           &"
    b2c_fprintf(stdout,"   &           &"); b2c_fprintf(stdout,"\n");
    // 02150 PRINT"    %%%     %%%"
    b2c_fprintf(stdout,"    %%%%%%     %%%%%%"); b2c_fprintf(stdout,"\n");
    // 02160 PRINT"      :!#$#!:"
    b2c_fprintf(stdout,"      :!#$#!:"); b2c_fprintf(stdout,"\n");
    // 02170 IF E1=4 THEN 2370
    if(E1_int==4)goto Lbl_02370;
    // 02180 PRINT"         I"
    b2c_fprintf(stdout,"         I"); b2c_fprintf(stdout,"\n");
    // 02190 PRINT"         I"
    b2c_fprintf(stdout,"         I"); b2c_fprintf(stdout,"\n");
    // 02200 PRINT"         I"
    b2c_fprintf(stdout,"         I"); b2c_fprintf(stdout,"\n");
    // 02210 IF E1=3 THEN 2370
    if(E1_int==3)goto Lbl_02370;
    // 02220 PRINT"???????????????????"
    b2c_fprintf(stdout,"???????????????????"); b2c_fprintf(stdout,"\n");
    // 02230 IF E1=2 THEN 2370
    if(E1_int==2)goto Lbl_02370;
    // 02240 PRINT"         @"
    b2c_fprintf(stdout,"         @"); b2c_fprintf(stdout,"\n");
    // 02250 PRINT"         @"
    b2c_fprintf(stdout,"         @"); b2c_fprintf(stdout,"\n");
    // 02260 PRINT"         @"
    b2c_fprintf(stdout,"         @"); b2c_fprintf(stdout,"\n");
    // 02270 IF E1=1 THEN 2370
    if(E1_int==1)goto Lbl_02370;
    // 02280 PRINT"        ( )"
    b2c_fprintf(stdout,"        ( )"); b2c_fprintf(stdout,"\n");
    // 02290 PRINT"       (   )"
    b2c_fprintf(stdout,"       (   )"); b2c_fprintf(stdout,"\n");
    // 02300 PRINT"      (     )"
    b2c_fprintf(stdout,"      (     )"); b2c_fprintf(stdout,"\n");
    // 02310 PRINT"     (       )"
    b2c_fprintf(stdout,"     (       )"); b2c_fprintf(stdout,"\n");
    // 02320 PRINT"    (         )"
    b2c_fprintf(stdout,"    (         )"); b2c_fprintf(stdout,"\n");
    // 02330 PRINT"   (           )"
    b2c_fprintf(stdout,"   (           )"); b2c_fprintf(stdout,"\n");
    // 02340 PRINT"  (#$%&     &%$#)"
    b2c_fprintf(stdout,"  (#$%%&     &%%$#)"); b2c_fprintf(stdout,"\n");

  Lbl_02350:
    // 02350 LETW=0
    W_int = 0;
    // 02360 IF T2=0 THEN 1210
    if(T2_int==0)goto Lbl_01210;

  Lbl_02370:
    // 02370 FOR I=1 TO S
    for(I_int=1;I_int<=S_int;I_int++){
        // 02380 IF A$(I)=B$(I) THEN 2400
        if(strcmp(A_str_arr[(int)I_int],B_str_arr[(int)I_int])==0)goto Lbl_02400;
        // 02390 GO TO 1570
        goto Lbl_01570;

  Lbl_02400:
        // 02400 NEXT I
        int dummy_2400=0; // Ignore this line.
    }; // End-For(I_int)
    // 02410 PRINT"VERY GOOD! YOU WIN!"
    b2c_fprintf(stdout,"VERY GOOD! YOU WIN!"); b2c_fprintf(stdout,"\n");
    // 02420 PRINT"DO YOU WANT TO PLAY AGAIN";
    b2c_fprintf(stdout,"DO YOU WANT TO PLAY AGAIN"); 
    // 02430 LET S7=0
    S7_int = 0;
    // 02440 INPUT H8$
    // Start of Basic INPUT statement 02440
    printf(" ? ");
    char inpbuf_02440[100];
    if(fgets(inpbuf_02440,100,stdin)==nullptr){
        fprintf(stderr,"ERROR: End of file on input.\n");
        exit(2);
    }else{
        char *ps_02440=strtok(inpbuf_02440," ,\t\n");
        // This may cause problems if BASIC programmer expected
        // input strings to be copied instead of just pointing
        // to the input buffer (ie. strings can be over written).
        if(ps_02440==nullptr){
            H8_str = "";
        }else{
            H8_str = ps_02440;
        };
    }; // End of Basic INPUT statement 02440
    // 02450 IF H8$="Y" THEN 1050
    if(strcmp(H8_str,"Y")==0)goto Lbl_01050;
    // 02460 GO TO 3650
    goto Lbl_03650;
    // 02470 DATA 10,I,M,P,O,S,S,I,B,L,E,  5,I,D,I,O,T
    // 02480 DATA 9,A,P,A,T,H,E,T,I,C
    // 02490 DATA10,W,A,T,E,R,F,R,O,N,T
    // 02500 DATA11,C,O,L,L,E,C,T,I,O,N,S
    // 02510 DATA 9,Y,E,S,T,E,R,D,A,Y
    // 02520 DATA12,K,I,N,D,E,R,G,A,R,T,E,N
    // 02530 DATA14,A,D,M,I,N,I,S,T,R,A,T,I,O,N
    // 02540 DATA 8,E,M,P,H,A,S,I,S
    // 02550 DATA 9,E,D,U,C,A,T,I,O,N
    // 02560 DATA 10,R,E,C,I,P,R,O,C,A,L
    // 02570 DATA  11,D,E,C,L,A,R,A,T,I,O,N
    // 02580 DATA 7,P,I,T,C,H,E,R
    // 02590 DATA 10,S,U,P,E,R,S,O,N,I,C
    // 02600 DATA 11,C,O,M,M,E,N,D,A,B,L,E
    // 02610 DATA 7,P,A,S,S,A,G,E
    // 02620 DATA 10,P,E,R,C,E,N,T,A,G,E
    // 02630 DATA 5,J,O,I,N,T
    // 02640 DATA8,G,O,V,E,R,N,O,R
    // 02650 DATA 7,P,R,O,G,R,A,M
    // 02660 DATA 13,D,I,S,A,P,P,E,A,R,A,N,C,E
    // 02670 DATA 8,S,E,C,U,R,I,T,Y
    // 02680 DATA 7,W,E,L,C,O,M,E
    // 02690 DATA 4,Z,E,R,O
    // 02700 DATA9,P,O,T,E,N,T,I,A,L
    // 02710 DATA 8,C,O,M,P,O,S,E,D
    // 02720 DATA 11,P,O,S,S,I,B,I,L,I,T,Y
    // 02730 DATA 8,D,I,R,E,C,T,O,R
    // 02740 DATA 6,R,E,S,U,L,T
    // 02750 DATA 8,C,H,I,L,D,R,E,N
    // 02760 DATA 9,C,L,A,S,S,R,O,O,M
    // 02770 DATA 8,E,C,O,N,O,M,I,C
    // 02780 DATA 9,E,Q,U,I,V,O,C,A,L
    // 02790 DATA 7,H,O,S,T,I,L,E
    // 02800 DATA 7,R,O,G,U,I,S,H
    // 02810 DATA 9,M,I,G,R,A,T,I,O,N
    // 02820 DATA 13,A,U,T,H,O,R,I,Z,A,T,I,O,N
    // 02830 DATA 7,C,U,R,S,O,R,Y
    // 02840 DATA 5,M,O,N,E,Y
    // 02850 DATA 7,A,B,S,O,L,V,E
    // 02860 DATA 12,P,R,E,R,E,Q,U,I,S,I,T,E
    // 02870 DATA 7,I,N,S,I,P,I,D
    // 02880 DATA 14 ,C,O,N,G,L,O,M,E,R,A,T,I,O,N
    // 02890 DATA 10,N,E,G,O,T,I,A,B,L,E
    // 02900 DATA 7,D,E,P,O,S,I,T
    // 02910 DATA 4,L,A,M,P
    // 02920 DATA 9,Q,U,A,L,I,F,I,E,D
    // 02930 DATA 11,M,A,I,N,T,E,N,A,N,C,E
    // 02940 DATA 7,F,U,N,E,R,A,L
    // 02950 DATA 9,C,A,R,P,E,N,T,E,R
    // 02960 DATA 5,F,U,G,U,E
    // 02970 DATA 11,M,A,N,U,F,A,C,T,U,R,E
    // 02980 DATA 6,B,A,K,E,R,Y
    // 02990 DATA 8,M,I,L,I,T,A,R,Y
    // 03000 DATA 5,G,U,A,R,D
    // 03010 DATA 9,T,E,C,H,N,I,C,A,L
    // 03020 DATA 8,S,Y,M,P,H,O,N,Y
    // 03030 DATA 7,A,D,V,A,N,C,E
    // 03040 DATA 7,M,I,N,I,M,U,M
    // 03050 DATA 9,A,L,E,R,T,N,E,S,S
    // 03060 DATA 7,Q,U,A,R,T,E,T
    // 03070 DATA 6,P,O,L,I,S,H
    // 03080 DATA 7,B,E,N,E,F,I,T
    // 03090 DATA 8,C,O,M,P,O,S,E,R
    // 03100 DATA 4,H,E,R,O
    // 03110 DATA 6,D,E,S,I,S,T
    // 03120 DATA 6,C,I,T,I,E,S
    // 03130 DATA 4,S,L,U,M
    // 03140 DATA 6,R,E,G,I,M,E
    // 03150 DATA 5,D,O,U,B,T
    // 03160 DATA 4,J,O,K,E
    // 03170 DATA 9,P,R,O,T,E,S,T,E,R
    // 03180 DATA 7,S,I,M,I,L,A,R
    // 03190 DATA 4,C,U,R,B
    // 03200 DATA 5,E,L,I,T,E
    // 03210 DATA 8,M,E,D,I,C,A,R,E
    // 03220 DATA 5,M,A,Y,O,R
    // 03230 DATA 4,F,U,N,D
    // 03240 DATA 6,A,C,T,I,O,N
    // 03250 DATA 6,C,L,O,U,D,Y
    // 03260 DATA 4,N,E,W,S
    // 03270 DATA 5,Y,O,U,N,G
    // 03280 DATA 5,M,A,F,I,A
    // 03290 DATA 9,G,U,E,R,R,I,L,L,A
    // 03300 DATA 7,R,E,Q,U,E,S,T
    // 03310 DATA 7,G,O,U,R,M,E,T
    // 03320 DATA 3,P,U,B
    // 03330 DATA 8,S,K,I,R,M,I,S,H
    // 03340 DATA 5,B,L,A,C,K
    // 03350 DATA 5,W,H,I,T,E
    // 03360 DATA 7,H,I,S,T,O,R,Y
    // 03370 DATA 6,P,O,L,I,C,Y
    // 03380 DATA 9,G,Y,M,N,A,S,I,U,M
    // 03390 DATA 7,V,E,H,I,C,L,E
    // 03400 DATA 9,A,U,T,O,M,O,T,O,N
    // 03410 DATA 6,B,L,I,G,H,T
    // 03420 DATA 3,S,I,X
    // 03430 DATA 4,C,A,L,L
    // 03440 DATA 9,P,S,Y,C,H,O,T,I,C
    // 03450 DATA 8,N,E,U,R,O,T,I,C
    // 03460 DATA 7,A,N,X,I,E,T,Y
    // 03470 DATA 7,S,Y,M,P,T,O,M
    // 03480 DATA13,H,Y,P,O,C,H,O,N,D,R,I,A,C
    // 03490 DATA 6,P,H,O,B,I,A
    // 03500 DATA 9,O,B,S,E,S,S,I,O,N
    // 03510 DATA10,C,O,M,P,U,L,S,I,O,N
    // 03520 DATA 8,H,Y,S,T,E,R,I,A
    // 03530 DATA 7,A,M,N,E,S,I,A
    // 03540 DATA13,S,C,H,I,Z,O,P,H,R,E,N,I,A
    // 03550 DATA 9,P,R,O,G,N,O,S,I,S
    // 03560 DATA 8,P,A,R,A,N,O,I,D
    // 03570 DATA 9,C,A,T,A,T,O,N,I,C
    // 03580 DATA 7,A,L,C,O,H,O,L
    // 03590 DATA 8,C,O,M,P,U,T,E,R
    // 03600 DATA 8,T,E,R,M,I,N,A,L
    // 03610 DATA 4,C,U,T,E
    // 03620 DATA 3,F,U,N
    // 03630 DATA10,A,C,C,E,S,S,A,B,L,E
    // 03640 DATA -103

  Lbl_03650:
    // 03650 END
   return(0);
};

//---------------------------------------------------------------------------
// End of $RCSfile$ 
//---------------------------------------------------------------------------
