;
-- --Inputs-- --;
A in R1, B in R2; You can change these for different test cases

MOV R1, 0        ;
A = 0 MOV R2, 1;
B = 1

    ;
== == == == == Circuit A : Q = (A + B) · B' ========== OR R3, R1, R2;
R3 = A + B
             NOT R4,
    R2;
R4 = B' AND R10, R3, R4;
R10 = (A + B) · B'

    ;
== == == == == Circuit B : Q = A · B' ========== NOT R5, R2;
R5 = B' AND R11, R1, R5;
R11 = A · B'

    ; ========== Circuit C: Q = A · (B + B') ==========
NOT R6, R2       ; R6 = B'
AND R7, R1, R6   ; R7 = A · B'
AND R8, R1, R2   ; R8 = A · B
OR  R12, R7, R8  ; R12 = A · B' + A · B = A

; ========== Circuit D: Q = A' + B ==========
NOT R9, R1       ; R9 = A'
OR  R13, R9, R2  ; R13 = A' + B

; ---- Outputs ----
OUT R10         ; Output Q for Circuit A
OUT R11         ; Output Q for Circuit B
OUT R12         ; Output Q for Circuit C
OUT R13         ; Output Q for Circuit D
