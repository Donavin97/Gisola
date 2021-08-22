INTERFACE

      SUBROUTINE XAPIIR(DATA, NSAMPS, APROTO, TRBNDW, A, IORD, TYPE, FLO, FHI, TS, PASSES, MAX_NT)
      IMPLICIT NONE
!$OMP DECLARE TARGET
!$ACC ROUTINE SEQ
      REAL DATA
      INTEGER MAX_NT

      DIMENSION DATA(MAX_NT)
      CHARACTER*2 TYPE, APROTO
      INTEGER NSAMPS, PASSES, IORD
      REAL*4 TRBNDW, A, FLO, FHI, TS

      END SUBROUTINE XAPIIR

END INTERFACE
