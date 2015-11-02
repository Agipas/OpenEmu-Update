bgm_title_module
	.dw .chn0,.chn1,.chn2,.chn3,.chn4,bgm_instruments
	.db $05

.chn0
.chn0_loop
.chn0_0
	.db $42,$07,$82,$17,$80,$17,$82,$46,$1a,$3f,$42,$17,$80,$46,$18,$80
	.db $42,$05,$82,$15,$80,$15,$80,$46,$0e,$80,$11,$80,$42,$15,$80,$46
	.db $15,$80
.chn0_1
	.db $42,$00,$82,$10,$80,$10,$81,$46,$17,$18,$80,$42,$10,$80,$46,$1a
	.db $80,$42,$00,$80,$46,$13,$80,$42,$10,$80,$10,$80,$46,$13,$82,$42
	.db $10,$82
.chn0_2
	.db $07,$82,$17,$80,$17,$82,$46,$1a,$3f,$42,$17,$80,$46,$18,$80,$42
	.db $05,$82,$15,$80,$15,$80,$46,$1d,$80,$1c,$80,$42,$15,$80,$46,$18
	.db $80
.chn0_3
	.db $42,$02,$46,$14,$15,$80,$42,$12,$80,$12,$80,$46,$17,$82,$42,$12
	.db $82,$02,$82,$12,$80,$12,$82,$0e,$80,$12,$80,$0e,$80
.chn0_4
	.db $07,$82,$17,$80,$17,$81,$46,$19,$1a,$80,$42,$17,$80,$46,$18,$3f
	.db $42,$05,$82,$15,$80,$15,$80,$46,$1a,$80,$1d,$80,$42,$15,$80,$46
	.db $1a,$80
.chn0_5
	.db $42,$00,$80,$46,$24,$80,$42,$10,$80,$10,$80,$46,$23,$82,$42,$10
	.db $80,$46,$21,$80,$42,$00,$80,$46,$21,$80,$42,$10,$80,$10,$80,$46
	.db $1f,$82,$42,$10,$80,$46,$1f,$80
.chn0_6
	.db $42,$07,$82,$17,$80,$17,$80,$46,$1c,$3f,$81,$42,$17,$80,$46,$1c
	.db $80,$42,$05,$80,$46,$1d,$80,$42,$15,$80,$15,$80,$46,$1c,$80,$1d
	.db $80,$42,$15,$80,$46,$1f,$80
.chn0_7
	.db $42,$02,$46,$23,$24,$80,$42,$12,$80,$12,$80,$46,$26,$82,$42,$12
	.db $82,$02,$84,$4a,$13,$81,$14,$15,$82,$13,$80
.chn0_8
	.db $42,$00,$80,$4a,$18,$80,$42,$10,$80,$10,$80,$4a,$18,$80,$42,$10
	.db $82,$4a,$18,$80,$42,$02,$80,$4a,$1a,$80,$42,$12,$80,$12,$80,$4a
	.db $18,$80,$42,$12,$80,$4a,$17,$80,$15,$80
.chn0_9
	.db $42,$07,$80,$4a,$17,$80,$42,$17,$80,$17,$80,$4a,$17,$80,$42,$17
	.db $80,$4a,$15,$82,$42,$04,$80,$4a,$13,$80,$42,$13,$80,$13,$80,$4a
	.db $13,$80,$42,$13,$82,$4a,$15,$80
.chn0_10
	.db $42,$00,$80,$4a,$18,$80,$42,$10,$80,$10,$80,$4a,$18,$80,$42,$10
	.db $82,$4a,$18,$80,$42,$02,$80,$4a,$1a,$80,$42,$12,$80,$12,$80,$4a
	.db $18,$80,$42,$12,$80,$4a,$17,$80,$12,$80
.chn0_11
	.db $42,$04,$80,$4a,$13,$80,$42,$13,$80,$13,$80,$4a,$13,$80,$42,$13
	.db $84,$04,$82,$13,$80,$4a,$13,$80,$42,$04,$4a,$14,$15,$80,$42,$02
	.db $80,$4a,$13,$80
.chn0_12
	.db $ff,$20
	.dw .chn0_8
.chn0_13
	.db $42,$07,$80,$4a,$17,$80,$42,$17,$80,$17,$80,$4a,$17,$80,$42,$17
	.db $82,$4a,$1c,$80,$42,$04,$80,$4a,$1d,$80,$42,$13,$80,$13,$80,$4a
	.db $1c,$80,$42,$13,$80,$4a,$1a,$80,$17,$80
.chn0_14
	.db $42,$00,$80,$4a,$18,$80,$42,$10,$80,$10,$80,$4a,$18,$80,$42,$10
	.db $82,$4a,$15,$80,$42,$02,$4a,$16,$17,$80,$42,$12,$80,$12,$82,$12
	.db $80,$4a,$15,$82
.chn0_15
	.db $42,$07,$80,$4a,$13,$80,$42,$17,$80,$17,$80,$4a,$13,$80,$42,$17
	.db $84,$07,$8e
	.db $fe
	.dw .chn0_loop

.chn1
.chn1_loop
.chn1_0
	.db $51,$07,$82,$43,$1a,$81,$3f,$1a,$3f,$81,$18,$80,$1a,$80,$51,$05
	.db $84,$43,$0e,$80,$11,$82,$15,$80,$1a,$80
.chn1_1
	.db $83,$18,$3f,$80,$17,$18,$80,$1a,$84,$13,$8e
.chn1_2
	.db $51,$07,$82,$43,$1a,$82,$1a,$3f,$81,$18,$80,$1a,$80,$51,$05,$84
	.db $43,$1d,$80,$1c,$82,$18,$81,$14
.chn1_3
	.db $15,$80,$17,$8c,$51,$02,$88,$02,$80,$06,$80,$02,$80
.chn1_4
	.db $07,$82,$43,$1a,$3f,$80,$19,$1a,$82,$18,$3f,$1a,$80,$51,$05,$82
	.db $43,$1a,$82,$1d,$80,$1a,$83,$23
.chn1_5
	.db $24,$82,$1f,$80,$23,$82,$1c,$80,$4f,$21,$86,$43,$1f,$80,$1f,$84
	.db $1f,$82
.chn1_6
	.db $51,$07,$82,$43,$1d,$80,$1c,$3f,$83,$1c,$80,$1d,$86,$1c,$80,$1d
	.db $82,$1f,$81,$23
.chn1_7
	.db $24,$80,$26,$90,$47,$13,$81,$14,$15,$82,$13,$82
.chn1_8
	.db $18,$8a,$18,$80,$1a,$84,$18,$82,$17,$82,$15,$81,$16
.chn1_9
	.db $17,$86,$15,$86,$13,$8a,$15,$82
.chn1_10
	.db $18,$8a,$18,$80,$1a,$84,$18,$82,$17,$82,$12,$80,$13,$80
.chn1_11
	.db $93,$13,$81,$14,$15,$82,$13,$82
.chn1_12
	.db $18,$8a,$18,$80,$1a,$84,$18,$82,$17,$82,$15,$80,$17,$80
.chn1_13
	.db $8b,$1c,$80,$1d,$84,$1c,$82,$1a,$82,$17,$80,$18,$80
.chn1_14
	.db $8b,$15,$81,$16,$17,$86,$15,$86
.chn1_15
	.db $13,$9e
	.db $fe
	.dw .chn1_loop

.chn2
.chn2_loop
.chn2_0
	.db $41,$13,$80,$3f,$80,$1f,$3f,$1f,$3f,$13,$80,$3f,$80,$1f,$3f,$81
	.db $11,$80,$3f,$80,$1d,$3f,$1d,$3f,$11,$80,$3f,$80,$1d,$3f,$81
.chn2_1
	.db $0c,$80,$3f,$80,$18,$3f,$18,$3f,$0c,$80,$3f,$80,$18,$3f,$81,$0c
	.db $80,$3f,$80,$18,$3f,$18,$3f,$0c,$3f,$0c,$80,$10,$80,$0c,$80
.chn2_2
	.db $13,$80,$3f,$80,$1f,$3f,$1f,$3f,$13,$80,$3f,$80,$1f,$3f,$81,$11
	.db $80,$3f,$80,$1d,$3f,$1d,$3f,$11,$80,$3f,$80,$1d,$3f,$81
.chn2_3
	.db $0e,$80,$3f,$80,$1a,$3f,$1a,$3f,$0e,$80,$3f,$80,$1a,$3f,$1a,$3f
	.db $0e,$82,$1a,$3f,$1a,$3f,$0e,$3f,$0e,$80,$12,$80,$0e,$80
.chn2_4
	.db $ff,$20
	.dw .chn2_2
.chn2_5
	.db $ff,$20
	.dw .chn2_1
.chn2_6
	.db $ff,$20
	.dw .chn2_2
.chn2_7
	.db $0e,$80,$3f,$80,$1a,$3f,$1a,$3f,$0e,$80,$3f,$80,$1a,$3f,$1a,$3f
	.db $0e,$85,$14,$15,$80,$3f,$80,$13,$80,$3f,$80
.chn2_8
	.db $0c,$80,$3f,$80,$0c,$3f,$0c,$3f,$48,$18,$80,$41,$18,$3f,$10,$80
	.db $0c,$3f,$0e,$80,$3f,$80,$0e,$3f,$0e,$3f,$48,$18,$80,$41,$1a,$3f
	.db $12,$80,$0e,$3f
.chn2_9
	.db $13,$80,$3f,$80,$13,$3f,$13,$3f,$48,$18,$80,$41,$1f,$3f,$1c,$80
	.db $13,$3f,$10,$80,$3f,$80,$10,$3f,$10,$3f,$48,$18,$80,$41,$1c,$3f
	.db $13,$80,$10,$3f
.chn2_10
	.db $ff,$20
	.dw .chn2_8
.chn2_11
	.db $42,$10,$80,$3f,$80,$10,$3f,$10,$3f,$48,$18,$80,$42,$1c,$3f,$10
	.db $80,$13,$3f,$10,$82,$3f,$82,$48,$18,$80,$41,$10,$3f,$1a,$3f,$0e
	.db $3f
.chn2_12
	.db $ff,$20
	.dw .chn2_8
.chn2_13
	.db $ff,$20
	.dw .chn2_9
.chn2_14
	.db $ff,$20
	.dw .chn2_8
.chn2_15
	.db $13,$80,$3f,$80,$13,$3f,$13,$3f,$48,$18,$80,$41,$1f,$3f,$17,$80
	.db $13,$3f,$13,$86,$42,$3f,$86
	.db $fe
	.dw .chn2_loop

.chn3
.chn3_loop
.chn3_0
	.db $9f
.chn3_1
	.db $9f
.chn3_2
	.db $9f
.chn3_3
	.db $9f
.chn3_4
	.db $9f
.chn3_5
	.db $9f
.chn3_6
	.db $9f
.chn3_7
	.db $97,$44,$0f,$80,$0f,$80,$45,$0f,$82
.chn3_8
	.db $0f,$82,$44,$0f,$80,$0f,$80,$49,$0f,$82,$45,$0f,$80,$44,$0f,$80
	.db $45,$0f,$82,$44,$0f,$80,$0f,$80,$49,$0f,$82,$44,$0f,$82
.chn3_9
	.db $45,$0f,$82,$44,$0f,$80,$0f,$80,$49,$0f,$82,$45,$0f,$80,$44,$0f
	.db $80,$45,$0f,$82,$44,$0f,$80,$0f,$80,$49,$0f,$82,$44,$0f,$82
.chn3_10
	.db $ff,$20
	.dw .chn3_9
.chn3_11
	.db $ff,$20
	.dw .chn3_9
.chn3_12
	.db $ff,$20
	.dw .chn3_9
.chn3_13
	.db $ff,$20
	.dw .chn3_9
.chn3_14
	.db $ff,$20
	.dw .chn3_9
.chn3_15
	.db $45,$0f,$82,$44,$0f,$80,$0f,$80,$49,$0f,$82,$45,$0f,$80,$44,$0f
	.db $80,$45,$0f,$8e
	.db $fe
	.dw .chn3_loop

.chn4
.chn4_loop
.chn4_0
	.db $c6,$81,$c4,$81,$c6,$81,$c4,$81,$c6,$81,$c4,$81,$c6,$81,$c4,$81
	.db $c6,$81,$c4,$81,$c6,$81,$c4,$81,$c6,$81,$c4,$81,$c6,$81,$c4,$81
.chn4_1
	.db $ff,$20
	.dw .chn4_0
.chn4_2
	.db $ff,$20
	.dw .chn4_0
.chn4_3
	.db $ff,$20
	.dw .chn4_0
.chn4_4
	.db $ff,$20
	.dw .chn4_0
.chn4_5
	.db $ff,$20
	.dw .chn4_0
.chn4_6
	.db $ff,$20
	.dw .chn4_0
.chn4_7
	.db $ff,$20
	.dw .chn4_0
.chn4_8
	.db $ff,$20
	.dw .chn4_0
.chn4_9
	.db $ff,$20
	.dw .chn4_0
.chn4_10
	.db $ff,$20
	.dw .chn4_0
.chn4_11
	.db $ff,$20
	.dw .chn4_0
.chn4_12
	.db $ff,$20
	.dw .chn4_0
.chn4_13
	.db $ff,$20
	.dw .chn4_0
.chn4_14
	.db $ff,$20
	.dw .chn4_0
.chn4_15
	.db $ff,$20
	.dw .chn4_0
	.db $fe
	.dw .chn4_loop